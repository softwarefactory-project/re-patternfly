open Jest;
open Expect;
open ReactTestUtils;

describe("Basic test", () => {
  let container = ref(None);
  beforeEach(prepareContainer(container));
  afterEach(cleanupContainer(container));

  test("can render List", () => {
    let container = getContainer(container);

    act(() => {
      ReactDOMRe.render(
        <Patternfly.List>
          <Patternfly.ListItem>
            {"Hello world!" |> React.string}
          </Patternfly.ListItem>
        </Patternfly.List>,
        container,
      )
    });

    expect(
      container
      ->DOM.findBySelectorAndTextContent("li", "Hello world!")
      ->Belt.Option.isSome,
    )
    |> toBe(true);
  });

  test("can render Card", () => {
    let container = getContainer(container);
    open Patternfly;
    act(() => {
      ReactDOMRe.render(
        <Card>
          <CardTitle> {"title" |> React.string} </CardTitle>
          <CardBody> {"body" |> React.string} </CardBody>
          <CardFooter> {"footer" |> React.string} </CardFooter>
        </Card>,
        container,
      )
    });

    let createAsserts = (strs: list(string)) => {
      let createAssert = (str: string) => {
        container
        ->DOM.findBySelectorAndTextContent("div", str)
        ->Belt.Option.isSome;
      };
      Belt.List.map(strs, createAssert);
    };

    expect(createAsserts(["title", "body", "footer"]))
    |> toEqual([true, true, true]);
  });

  test("can render Page", () => {
    let container = getContainer(container);
    open Patternfly;
    act(() => {
      ReactDOMRe.render(<Page> <PageHeader logo="logo" /> </Page>, container)
    });

    expect(
      container
      ->DOM.findBySelectorAndTextContent("a", "logo")
      ->Belt.Option.isSome,
    )
    |> toEqual(true);
  });

  test("can render Grid and GridItem", () => {
    let container = getContainer(container);
    open Patternfly;
    act(() => {
      ReactDOMRe.render(
        <Grid md=Column._12 hasGutter=true>
          <GridItem md=Column._6> {"Item1" |> React.string} </GridItem>
          <GridItem md=Column._6> {"Item2" |> React.string} </GridItem>
        </Grid>,
        container,
      )
    });

    expect(
      container
      ->DOM.findBySelectorAndTextContent("div", "Item1")
      ->Belt.Option.isSome,
    )
    |> toEqual(true);
  });
});
