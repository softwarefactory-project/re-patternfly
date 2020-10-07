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

// https://www.patternfly.org/v4/layouts/bullseye
module Bullseye = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "Bullseye";
};

// https://www.patternfly.org/v4/layouts/grid

module Column: {
  type t;
  let _1: t;
  let _2: t;
  let _3: t;
  let _4: t;
  let _5: t;
  let _6: t;
  let _7: t;
  let _8: t;
  let _9: t;
  let _10: t;
  let _11: t;
  let _12: t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;

  let _1 = Any(1);
  let _2 = Any(2);
  let _3 = Any(3);
  let _4 = Any(4);
  let _5 = Any(5);
  let _6 = Any(6);
  let _7 = Any(7);
  let _8 = Any(8);
  let _9 = Any(9);
  let _10 = Any(10);
  let _11 = Any(11);
  let _12 = Any(12);
};

module Grid = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~hasGutter: bool=?,
      ~lg: Column.t=?,
      ~md: Column.t=?,
      ~sm: Column.t=?,
      ~span: Column.t=?,
      ~xl: Column.t=?,
      ~xl2: Column.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Grid";
};

module GridItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~hasGutter: bool=?,
      ~lg: Column.t=?,
      ~lgOffset: Column.t=?,
      ~lgRowSpan: Column.t=?,
      ~md: Column.t=?,
      ~mdOffset: Column.t=?,
      ~mdRowSpan: Column.t=?,
      ~offset: Column.t=?,
      ~rowSpan: Column.t=?,
      ~sm: Column.t=?,
      ~smRowSpan: Column.t=?,
      ~span: Column.t=?,
      ~xl: Column.t=?,
      ~xlOffset: Column.t=?,
      ~xlRowSpan: Column.t=?,
      ~xl2: Column.t=?,
      ~xl2Offset: Column.t=?,
      ~xl2RowSpan: Column.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "GridItem";
};
