include Patternfly_Generated;

// https://www.patternfly.org/v4/components/avatar
module Avatar = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~alt: string, ~src: string=?) => React.element = "Avatar";
};

// https://www.patternfly.org/v4/components/badge
module Badge = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~isRead: bool=?, ~children: 'children=?) => React.element =
    "Badge";
};

// https://www.patternfly.org/v4/components/brand
module Brand = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~className: string=?, ~alt: string, ~src: string=?) => React.element =
    "Brand";
};

// https://www.patternfly.org/v4/components/breadcrumb
module Breadcrumb = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "Breadcrumb";
};

module BreadcrumbHeading = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~isActive: bool=?,
      ~showDivider: bool=?,
      ~target: string=?,
      ~_to: string=?,
      ~children: 'children=?
    ) =>
    React.element =
    "BreadcrumbHeading";
};

module BreadcrumbItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~isActive: bool=?,
      ~showDivider: bool=?,
      ~target: string=?,
      ~_to: string=?,
      ~children: 'children=?
    ) =>
    React.element =
    "BreadcrumbItem";
};

// https://www.patternfly.org/v4/guidelines/icons/
//   generated using re-cli
module Icons = {
  include PFIcons;
};

module Layout = {
  include PFLayouts;
};

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

module NavItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOM.Style.t=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~isActive: bool,
      ~children: 'children=?
    ) =>
    React.element =
    "NavItem";
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

// https://www.patternfly.org/v4/components/table
type transformers;
type rowProps = {className: string};
type pfRow = {cells: array(string)};
type pfCell = {
  title: string,
  transforms: array(transformers),
};
type pfrows = array(pfRow);
type pfcells = array(pfCell);

[@bs.module "@patternfly/react-table"] [@bs.val]
external sortable: transformers = "sortable";

module Table = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make:
    (
      ~rows: pfrows,
      ~cells: pfcells,
      ~onSort: ReactEvent.Mouse.t => unit=?,
      ~caption: string=?,
      ~children: 'children=?
    ) =>
    React.element =
    "Table";
};

module TableBody = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make: (~children: 'children=?) => React.element = "TableBody";
};

module TableHeader = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make: (~children: 'children=?) => React.element = "TableHeader";
};
