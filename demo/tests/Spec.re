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
});
