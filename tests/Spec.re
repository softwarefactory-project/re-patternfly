open Jest;
open Expect;
open ReactTestUtils;
open Patternfly;

let assertDom = (container, component, expectFunc) => {
  let container = getContainer(container);

  act(() => {ReactDOMRe.render(component, container)});

  expectFunc(container);
};

let assertDomSelector = (container, component, (selector, value)) => {
  assertDom(container, component, container => {
    expect(
      container
      ->DOM.findBySelectorAndTextContent(selector, value)
      ->Belt.Option.isSome,
    )
    |> toBe(true)
  });
};

describe("Basic test", () => {
  let container = ref(None);
  beforeEach(prepareContainer(container));
  afterEach(cleanupContainer(container));
  let doAssertDom = assertDom(container);
  let doAssertDomSelector = assertDomSelector(container);

  test("can render List", () => {
    doAssertDomSelector(
      <List> <ListItem> {"Hello world!" |> React.string} </ListItem> </List>,
      ("li", "Hello world!"),
    )
  });

  test("can render Card", () => {
    doAssertDom(
      <Card>
        <CardTitle> {"title" |> React.string} </CardTitle>
        <CardBody> {"body" |> React.string} </CardBody>
        <CardFooter> {"footer" |> React.string} </CardFooter>
      </Card>,
      container => {
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
      },
    )
  });

  test("can render Page", () => {
    doAssertDomSelector(
      <Page> <PageHeader logo="logo" /> </Page>,
      ("a", "logo"),
    )
  });

  test("can render Nav", () => {
    doAssertDomSelector(
      <Nav>
        <NavList>
          <NavItem isActive=false> {"Gerrit" |> React.string} </NavItem>
        </NavList>
      </Nav>,
      ("a", "Gerrit"),
    )
  });

  test("can render Grid and GridItem", () => {
    doAssertDomSelector(
      <Grid md=Column._12 hasGutter=true>
        <GridItem md=Column._6> {"Item1" |> React.string} </GridItem>
        <GridItem md=Column._6> {"Item2" |> React.string} </GridItem>
      </Grid>,
      ("div", "Item1"),
    )
  });
});
