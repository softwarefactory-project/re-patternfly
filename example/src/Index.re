switch (ReactDOM.querySelector("#root")) {
| Some(root) =>
  ReactDOM.render(
    <Patternfly.List>
      <Patternfly.ListItem>
        {"Hello patternfly!" |> React.string}
      </Patternfly.ListItem>
    </Patternfly.List>,
    root,
  )
| None => Js.log("oops!")
};
