// https://www.patternfly.org/v4/components/alert
module Alert = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~variant: [@bs.string] [
                  | [@bs.as "info"] `Info
                  | [@bs.as "success"] `Success
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "danger"] `Danger
                ]
                  =?,
      ~title: string
    ) =>
    React.element =
    "Alert";
};

module AlertGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children) => React.element = "AlertGroup";
};

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

module Banner = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~isSticky: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "info"] `Info
                  | [@bs.as "success"] `Success
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "danger"] `Danger
                ]
                  =?,
      ~children: 'children=?
    ) =>
    React.element =
    "Banner";
};

// https://www.patternfly.org/v4/components/breadcrumb
module Breadcrumb = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "Breadcrumb";
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
      ~onClick: ReactEvent.Mouse.t => unit=?,
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

// https://www.patternfly.org/v4/guidelines/icons/
//   generated using re-cli
module Icons = {
  include PFIcons;
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
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~isActive: bool,
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

// https://www.patternfly.org/v4/components/login-page
module LoginFooterItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~href: string=?, ~children: 'children=?) => React.element =
    "LoginFooterItem";
};
module LoginForm = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~showHelperText: bool=?,
      ~helperText: string=?,
      ~helperTextIcon: string=?,
      ~usernameLabel: string=?,
      ~usernameValue: string=?,
      ~isValidUsername: bool=?,
      ~passwordLabel: string=?,
      ~passwordValue: string=?,
      ~isValidPassword: bool=?,
      ~rememberMeLabel: string=?,
      ~isRememberMeChecked: bool=?,
      ~onChangeRememberMe: ReactEvent.Mouse.t => unit=?,
      ~onLoginButtonClick: ReactEvent.Mouse.t => unit=?,
      ~onChangeUsername: ReactEvent.Mouse.t => unit=?,
      ~onChangePassword: ReactEvent.Mouse.t => unit=?,
      ~children: 'children=?
    ) =>
    React.element =
    "LoginForm";
};
module LoginMainFooterBandItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element =
    "LoginMainFooterBandItem";
};

type cprops = Js.Dict.t(string);

module LoginMainFooterLinksItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~href: string=?, ~linkComponentProps: cprops=?, ~children: 'children=?) =>
    React.element =
    "LoginMainFooterLinksItem";
};
module LoginPage = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~footerListVariants: [@bs.string] [ | [@bs.as "inline"] `Inline]=?,
      ~brandImgSrc: string=?,
      ~brandImgAlt: string=?,
      ~backgroundImgSrc: string=?,
      ~backgroundImgAlt: string=?,
      ~footerListItems: React.element=?,
      ~textContent: string=?,
      ~loginTitle: string=?,
      ~loginSubtitle: string=?,
      ~socialMediaLoginContent: React.element=?,
      ~signUpForAccountMessage: React.element=?,
      ~forgotCredentials: React.element=?,
      ~children: 'children=?
    ) =>
    React.element =
    "LoginPage";
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

module TableHeader = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make: (~children: 'children=?) => React.element = "TableHeader";
};

module TableBody = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make: (~children: 'children=?) => React.element = "TableBody";
};
