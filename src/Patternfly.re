// https://www.patternfly.org/v4/components/list/react/
module List = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "List";
};

module ListItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~style: ReactDOM.Style.t=?, ~children: 'children=?) => React.element =
    "ListItem";
};

// https://www.patternfly.org/v4/components/card
module Card = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~isCompact: bool=?,
      ~isFlat: bool=?,
      ~isHoverable: bool=?,
      ~isSelectable: bool=?,
      ~isSelected: bool=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Card";
};

module CardTitle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "CardTitle";
};

module CardBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "CardBody";
};

module CardFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "CardFooter";
};

// https://www.patternfly.org/v4/components/page
module Page = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~header: React.element=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Page";
};

module PageHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~logo: string,
      ~topNav: React.element=?
    ) =>
    React.element =
    "PageHeader";
};

module PageSection = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~isFilled: bool=?,
      ~isWidthLimited: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "default"] `Default
                  | [@bs.as "light"] `Light
                  | [@bs.as "dark"] `Dark
                  | [@bs.as "darker"] `Darker
                ]
                  =?,
      ~children: 'children=?
    ) =>
    React.element =
    "PageSection";
};

// https://www.patternfly.org/v4/components/navigation
module Nav = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
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
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "NavList";
};

module NavItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~isActive: bool,
      ~onClick: 'onClick=?,
      ~children: 'children=?
    ) =>
    React.element =
    "NavItem";
};

// https://www.patternfly.org/v4/layouts/bullseye
module Bullseye = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Bullseye";
};

// https://www.patternfly.org/v4/layouts/grid
module Column: {
  // This module lists every column values and prevents invalid value to be used.
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
  type t = int;
  let _1 = 1;
  let _2 = 2;
  let _3 = 3;
  let _4 = 4;
  let _5 = 5;
  let _6 = 6;
  let _7 = 7;
  let _8 = 8;
  let _9 = 9;
  let _10 = 10;
  let _11 = 11;
  let _12 = 12;
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
