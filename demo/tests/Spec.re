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
});
