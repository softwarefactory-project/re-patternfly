module Alert = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~actionClose: 'children=?,
      ~actionLinks: 'children=?,
      ~children: 'children=?,
      ~className: string=?,
      ~isInline: bool=?,
      ~isLiveRegion: bool=?,
      ~title: 'children,
      ~tooltipPosition: [@bs.string] [
                          | [@bs.as "auto"] `Auto
                          | [@bs.as "top"] `Top
                          | [@bs.as "bottom"] `Bottom
                          | [@bs.as "left"] `Left
                          | [@bs.as "right"] `Right
                        ]
                          =?,
      ~truncateTitle: int=?,
      ~variant: [@bs.string] [
                  | [@bs.as "success"] `Success
                  | [@bs.as "danger"] `Danger
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "info"] `Info
                  | [@bs.as "default"] `Default
                ]
                  =?,
      ~variantLabel: string=?
    ) =>
    React.element =
    "Alert";
};

module AlertActionCloseButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~className: string=?, ~variantLabel: string=?) => React.element =
    "AlertActionCloseButton";
};

module AlertActionLink = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: string=?, ~className: string=?) => React.element =
    "AlertActionLink";
};

module AlertIcon = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~variant: [@bs.string] [
                  | [@bs.as "success"] `Success
                  | [@bs.as "danger"] `Danger
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "info"] `Info
                  | [@bs.as "default"] `Default
                ]
    ) =>
    React.element =
    "AlertIcon";
};

module AlertGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~isToast: bool=?) =>
    React.element =
    "AlertGroup";
};

module Avatar = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~alt: string, ~className: string=?, ~src: string=?) => React.element =
    "Avatar";
};

module Badge = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~isRead: bool=?) =>
    React.element =
    "Badge";
};

module Banner = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~isSticky: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "default"] `Default
                  | [@bs.as "info"] `Info
                  | [@bs.as "danger"] `Danger
                  | [@bs.as "success"] `Success
                  | [@bs.as "warning"] `Warning
                ]
                  =?
    ) =>
    React.element =
    "Banner";
};

module Brand = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~alt: string,
      ~className: string=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~src: string=?
    ) =>
    React.element =
    "Brand";
};

module Button = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: React.element=?,
      ~iconPosition: [@bs.string] [
                       | [@bs.as "left"] `Left
                       | [@bs.as "right"] `Right
                     ]
                       =?,
      ~inoperableEvents: list(string)=?,
      ~isActive: bool=?,
      ~isAriaDisabled: bool=?,
      ~isBlock: bool=?,
      ~isDisabled: bool=?,
      ~isInline: bool=?,
      ~isLarge: bool=?,
      ~isLoading: bool=?,
      ~isSmall: bool=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~spinnerAriaValueText: string=?,
      ~tabIndex: int=?,
      ~type_: [@bs.string] [
                | [@bs.as "button"] `Button
                | [@bs.as "submit"] `Submit
                | [@bs.as "reset"] `Reset
              ]
                =?,
      ~variant: [@bs.string] [
                  | [@bs.as "primary"] `Primary
                  | [@bs.as "secondary"] `Secondary
                  | [@bs.as "tertiary"] `Tertiary
                  | [@bs.as "danger"] `Danger
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "link"] `Link
                  | [@bs.as "plain"] `Plain
                  | [@bs.as "control"] `Control
                ]
                  =?
    ) =>
    React.element =
    "Button";
};

module Card = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~isCompact: bool=?,
      ~isFlat: bool=?,
      ~isHoverable: bool=?,
      ~isSelectable: bool=?,
      ~isSelected: bool=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "Card";
};

module CardActions = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardActions";
};

module CardBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~isFilled: bool=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardBody";
};

module CardFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardFooter";
};

module CardHeadMain = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardHeadMain";
};

module CardHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardHeader";
};

module CardHeaderMain = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardHeaderMain";
};

module CardTitle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardTitle";
};

module Checkbox = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~checked: bool=?,
      ~className: string=?,
      ~description: 'children=?,
      ~id: string,
      ~isChecked: bool=?,
      ~isDisabled: bool=?,
      ~isValid: bool=?,
      ~label: 'children=?,
      ~onChange: (bool, ReactEvent.Mouse.t) => unit=?
    ) =>
    React.element =
    "Checkbox";
};

module ActionGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "ActionGroup";
};

module Form = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~isHorizontal: bool=?,
      ~isWidthLimited: bool=?
    ) =>
    React.element =
    "Form";
};

module FormAlert = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "FormAlert";
};

module FormGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~fieldId: string,
      ~hasNoPaddingTop: bool=?,
      ~helperText: 'children=?,
      ~helperTextIcon: 'children=?,
      ~helperTextInvalid: 'children=?,
      ~helperTextInvalidIcon: 'children=?,
      ~isHelperTextBeforeField: bool=?,
      ~isInline: bool=?,
      ~isRequired: bool=?,
      ~label: 'children=?,
      ~labelIcon: React.element=?,
      ~validated: [@bs.string] [
                    | [@bs.as "success"] `Success
                    | [@bs.as "warning"] `Warning
                    | [@bs.as "error"] `Error
                    | [@bs.as "default"] `Default
                  ]
                    =?
    ) =>
    React.element =
    "FormGroup";
};

module FormHelperText = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~icon: 'children=?,
      ~isError: bool=?,
      ~isHidden: bool=?
    ) =>
    React.element =
    "FormHelperText";
};

module FormSection = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "FormSection";
};

module Login = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~footer: 'children=?,
      ~header: 'children=?
    ) =>
    React.element =
    "Login";
};

module LoginFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "LoginFooter";
};

module LoginFooterItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~href: string=?,
      ~target: string=?
    ) =>
    React.element =
    "LoginFooterItem";
};

module LoginForm = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~helperText: 'children=?,
      ~helperTextIcon: 'children=?,
      ~isLoginButtonDisabled: bool=?,
      ~isRememberMeChecked: bool=?,
      ~isValidPassword: bool=?,
      ~isValidUsername: bool=?,
      ~loginButtonLabel: string=?,
      ~noAutoFocus: bool=?,
      ~onChangePassword: (string, ReactEvent.Mouse.t) => unit=?,
      ~onChangeRememberMe: (bool, ReactEvent.Mouse.t) => unit=?,
      ~onChangeUsername: (string, ReactEvent.Mouse.t) => unit=?,
      ~onLoginButtonClick: ReactEvent.Mouse.t => unit=?,
      ~passwordLabel: string=?,
      ~passwordValue: string=?,
      ~rememberMeLabel: string=?,
      ~showHelperText: bool=?,
      ~usernameLabel: string=?,
      ~usernameValue: string=?
    ) =>
    React.element =
    "LoginForm";
};

module LoginHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~headerBrand: 'children=?
    ) =>
    React.element =
    "LoginHeader";
};

module LoginMainBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "LoginMainBody";
};

module LoginMainFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~forgotCredentials: 'children=?,
      ~signUpForAccountMessage: 'children=?,
      ~socialMediaLoginContent: 'children=?
    ) =>
    React.element =
    "LoginMainFooter";
};

module LoginMainFooterBandItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "LoginMainFooterBandItem";
};

module LoginMainFooterLinksItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~href: string=?,
      ~linkComponent: 'children=?,
      ~linkComponentProps: 'any=?,
      ~target: string=?
    ) =>
    React.element =
    "LoginMainFooterLinksItem";
};

module LoginMainHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~subtitle: string=?,
      ~title: string=?
    ) =>
    React.element =
    "LoginMainHeader";
};

module LoginPage = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~backgroundImgAlt: string=?,
      ~brandImgAlt: string=?,
      ~brandImgSrc: string=?,
      ~children: 'children=?,
      ~className: string=?,
      ~footerListItems: 'children=?,
      ~footerListVariants: [@bs.string] [ | [@bs.as "inline"] `Inline]=?,
      ~forgotCredentials: 'children=?,
      ~loginSubtitle: string=?,
      ~loginTitle: string,
      ~signUpForAccountMessage: 'children=?,
      ~socialMediaLoginContent: 'children=?,
      ~textContent: string=?
    ) =>
    React.element =
    "LoginPage";
};

module Page = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~additionalGroupedContent: 'children=?,
      ~breadcrumb: 'children=?,
      ~children: 'children=?,
      ~className: string=?,
      ~defaultManagedSidebarIsOpen: bool=?,
      ~groupProps: 'any=?,
      ~header: 'children=?,
      ~isBreadcrumbGrouped: bool=?,
      ~isBreadcrumbWidthLimited: bool=?,
      ~isManagedSidebar: bool=?,
      ~isNotificationDrawerExpanded: bool=?,
      ~isTertiaryNavGrouped: bool=?,
      ~isTertiaryNavWidthLimited: bool=?,
      ~mainAriaLabel: string=?,
      ~mainContainerId: string=?,
      ~notificationDrawer: 'children=?,
      ~role: string=?,
      ~sidebar: 'children=?,
      ~skipToContent: React.element=?,
      ~style: ReactDOM.Style.t=?,
      ~tertiaryNav: 'children=?
    ) =>
    React.element =
    "Page";
};

module PageContext = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~isManagedSidebar: bool, ~isNavOpen: bool) => React.element =
    "PageContext";
};

module PageBreadcrumb = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasOverflowScroll: bool=?,
      ~hasShadowBottom: bool=?,
      ~hasShadowTop: bool=?,
      ~isWidthLimited: bool=?,
      ~sticky: [@bs.string] [
                 | [@bs.as "top"] `Top
                 | [@bs.as "bottom"] `Bottom
               ]
                 =?
    ) =>
    React.element =
    "PageBreadcrumb";
};

module PageGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasOverflowScroll: bool=?,
      ~hasShadowBottom: bool=?,
      ~hasShadowTop: bool=?,
      ~sticky: [@bs.string] [
                 | [@bs.as "top"] `Top
                 | [@bs.as "bottom"] `Bottom
               ]
                 =?
    ) =>
    React.element =
    "PageGroup";
};

module PageHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~headerTools: 'children=?,
      ~isManagedSidebar: bool=?,
      ~isNavOpen: bool=?,
      ~logo: 'children=?,
      ~logoComponent: 'children=?,
      ~logoProps: 'any=?,
      ~role: string=?,
      ~showNavToggle: bool=?,
      ~topNav: 'children=?
    ) =>
    React.element =
    "PageHeader";
};

module PageHeaderTools = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "PageHeaderTools";
};

module PageHeaderToolsGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children, ~className: string=?, ~visibility: 'any=?) =>
    React.element =
    "PageHeaderToolsGroup";
};

module PageHeaderToolsItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~id: string=?,
      ~isSelected: bool=?,
      ~visibility: 'any=?
    ) =>
    React.element =
    "PageHeaderToolsItem";
};

module PageNavigation = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasOverflowScroll: bool=?,
      ~hasShadowBottom: bool=?,
      ~hasShadowTop: bool=?,
      ~isWidthLimited: bool=?,
      ~sticky: [@bs.string] [
                 | [@bs.as "top"] `Top
                 | [@bs.as "bottom"] `Bottom
               ]
                 =?
    ) =>
    React.element =
    "PageNavigation";
};

module PageSection = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasOverflowScroll: bool=?,
      ~hasShadowBottom: bool=?,
      ~hasShadowTop: bool=?,
      ~isFilled: bool=?,
      ~isWidthLimited: bool=?,
      ~padding: 'any=?,
      ~sticky: [@bs.string] [
                 | [@bs.as "top"] `Top
                 | [@bs.as "bottom"] `Bottom
               ]
                 =?,
      ~type_: [@bs.string] [
                | [@bs.as "default"] `Default
                | [@bs.as "nav"] `Nav
              ]
                =?,
      ~variant: [@bs.string] [
                  | [@bs.as "default"] `Default
                  | [@bs.as "light"] `Light
                  | [@bs.as "dark"] `Dark
                  | [@bs.as "darker"] `Darker
                ]
                  =?
    ) =>
    React.element =
    "PageSection";
};

module PageSidebar = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~isManagedSidebar: bool=?,
      ~isNavOpen: bool=?,
      ~nav: 'children=?,
      ~theme: [@bs.string] [ | [@bs.as "dark"] `Dark | [@bs.as "light"] `Light]
                =?
    ) =>
    React.element =
    "PageSidebar";
};
