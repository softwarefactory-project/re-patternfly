// https://www.patternfly.org/v4/components/list/react/
module List = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "List";
};

module ListItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "ListItem";
};

// https://www.patternfly.org/v4/components/card
module Card = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "Card";
};

module CardTitle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "CardTitle";
};

module CardBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "CardBody";
};

module CardFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "CardFooter";
};

// https://www.patternfly.org/v4/components/page
module Page = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "Page";
};

module PageHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~logo: string, ~topNav: React.element=?) => React.element =
    "PageHeader";
};

module Nav = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~variant: [@bs.string] [
                  | [@bs.as "vertial"] `Vertical
                  | [@bs.as "horizontal"] `Horizontal
                ]
                  =?,
      ~onSelect: 'onSelect=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Nav";
};

module NavList = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "NavList";
};

module NavItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~isActive: bool, ~onClick: 'onClick=?, ~children: 'children=?) =>
    React.element =
    "NavItem";
};
