// https://www.patternfly.org/v4/components/list/react/
module List = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "List";
};

module ListItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "ListItem";
};
