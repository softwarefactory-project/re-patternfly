module AboutModal = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~backgroundImageSrc: string=?,
      ~brandImageAlt: string,
      ~brandImageSrc: string,
      ~className: string=?,
      ~closeButtonAriaLabel: string=?,
      ~isOpen: bool=?,
      ~noAboutModalBoxContentContainer: bool=?,
      ~productName: string=?,
      ~trademark: string=?
    ) =>
    React.element =
    "AboutModal";
};

module AboutModalBox = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "AboutModalBox";
};

module AboutModalBoxBrand = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~alt: string, ~className: string=?, ~src: string=?) => React.element =
    "AboutModalBoxBrand";
};

module AboutModalBoxCloseButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~className: string=?) => React.element =
    "AboutModalBoxCloseButton";
};

module AboutModalBoxContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~id: string,
      ~noAboutModalBoxContentContainer: bool=?,
      ~trademark: string
    ) =>
    React.element =
    "AboutModalBoxContent";
};

module AboutModalBoxHeader = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~className: string=?, ~id: string, ~productName: string=?) =>
    React.element =
    "AboutModalBoxHeader";
};

module AboutModalBoxHero = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~backgroundImageSrc: string=?, ~className: string=?) => React.element =
    "AboutModalBoxHero";
};

module AboutModalContainer = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~aboutModalBoxContentId: string,
      ~aboutModalBoxHeaderId: string,
      ~backgroundImageSrc: string=?,
      ~brandImageAlt: string,
      ~brandImageSrc: string,
      ~className: string=?,
      ~closeButtonAriaLabel: string=?,
      ~isOpen: bool=?,
      ~productName: string=?,
      ~trademark: string=?
    ) =>
    React.element =
    "AboutModalContainer";
};

module Accordion = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~asDefinitionList: bool=?,
      ~className: string=?,
      ~headingLevel: [@bs.string] [
                       | [@bs.as "h1"] `H1
                       | [@bs.as "h2"] `H2
                       | [@bs.as "h3"] `H3
                       | [@bs.as "h4"] `H4
                       | [@bs.as "h5"] `H5
                       | [@bs.as "h6"] `H6
                     ]
                       =?
    ) =>
    React.element =
    "Accordion";
};

module AccordionContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: React.element=?,
      ~id: string=?,
      ~isFixed: bool=?,
      ~isHidden: bool=?
    ) =>
    React.element =
    "AccordionContent";
};

module AccordionItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "AccordionItem";
};

module AccordionToggle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: React.element=?,
      ~id: string,
      ~isExpanded: bool=?
    ) =>
    React.element =
    "AccordionToggle";
};

module Alert = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~actionClose: 'children1=?,
      ~actionLinks: 'children2=?,
      ~className: string=?,
      ~customIcon: 'children3=?,
      ~isInline: bool=?,
      ~isLiveRegion: bool=?,
      ~title: 'children4,
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
      ~customIcon: 'children=?,
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

module ApplicationLauncher = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~favorites: array(string)=?,
      ~favoritesLabel: string=?,
      ~isDisabled: bool=?,
      ~isGrouped: bool=?,
      ~isOpen: bool=?,
      ~items: array('children)=?,
      ~searchNoResultsText: string=?,
      ~searchPlaceholderText: string=?,
      ~searchProps: 'any=?,
      ~toggleIcon: 'children1=?,
      ~toggleId: string=?
    ) =>
    React.element =
    "ApplicationLauncher";
};

module ApplicationLauncherContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children) => React.element =
    "ApplicationLauncherContent";
};

module ApplicationLauncherIcon = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "ApplicationLauncherIcon";
};

module ApplicationLauncherItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~ariaIsFavoriteLabel: string=?,
      ~ariaIsNotFavoriteLabel: string=?,
      ~component: 'children=?,
      ~customChild: 'children1=?,
      ~enterTriggersArrowDown: bool=?,
      ~icon: 'children2=?,
      ~id: string=?,
      ~isExternal: bool=?,
      ~isFavorite: bool=?,
      ~tooltip: 'children3=?,
      ~tooltipProps: 'any4=?
    ) =>
    React.element =
    "ApplicationLauncherItem";
};

module ApplicationLauncherText = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "ApplicationLauncherText";
};

module Avatar = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~alt: string, ~className: string=?, ~src: string=?) => React.element =
    "Avatar";
};

module Backdrop = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "Backdrop";
};

module BackgroundImage = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~className: string=?, ~filter: React.element=?, ~src: string) =>
    React.element =
    "BackgroundImage";
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

module Breadcrumb = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "Breadcrumb";
};

module BreadcrumbHeading = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: 'children1=?,
      ~showDivider: bool=?,
      ~target: string=?,
      ~_to: string=?
    ) =>
    React.element =
    "BreadcrumbHeading";
};

module BreadcrumbItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: React.element=?,
      ~isActive: bool=?,
      ~showDivider: bool=?,
      ~target: string=?,
      ~_to: string=?
    ) =>
    React.element =
    "BreadcrumbItem";
};

module Button = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: React.element=?,
      ~icon: 'children1=?,
      ~iconPosition: [@bs.string] [
                       | [@bs.as "left"] `Left
                       | [@bs.as "right"] `Right
                     ]
                       =?,
      ~inoperableEvents: array(string)=?,
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
      ~_type: [@bs.string] [
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
      ~id: string=?,
      ~isCompact: bool=?,
      ~isExpanded: bool=?,
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

module CardExpandableContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "CardExpandableContent";
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
      ~id: string=?,
      ~style: ReactDOM.Style.t=?,
      ~toggleButtonProps: 'any1=?
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
      ~label: 'children1=?,
      ~onChange: (bool, ReactEvent.Mouse.t) => unit=?
    ) =>
    React.element =
    "Checkbox";
};

module ClipboardCopy = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~clickTip: string=?,
      ~entryDelay: int=?,
      ~exitDelay: int=?,
      ~hoverTip: string=?,
      ~isCode: bool=?,
      ~isExpanded: bool=?,
      ~isReadOnly: bool=?,
      ~maxWidth: string=?,
      ~switchDelay: int=?,
      ~textAriaLabel: string=?,
      ~toggleAriaLabel: string=?
    ) =>
    React.element =
    "ClipboardCopy";
};

module ClipboardCopyButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~entryDelay: int=?,
      ~exitDelay: int=?,
      ~id: string,
      ~maxWidth: string=?,
      ~position: [@bs.string] [
                   | [@bs.as "auto"] `Auto
                   | [@bs.as "top"] `Top
                   | [@bs.as "bottom"] `Bottom
                   | [@bs.as "left"] `Left
                   | [@bs.as "right"] `Right
                 ]
                   =?,
      ~textId: string
    ) =>
    React.element =
    "ClipboardCopyButton";
};

module ClipboardCopyExpanded = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~isCode: bool=?,
      ~isReadOnly: bool=?
    ) =>
    React.element =
    "ClipboardCopyExpanded";
};

module ClipboardCopyToggle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~contentId: string,
      ~id: string,
      ~isExpanded: bool=?,
      ~textId: string
    ) =>
    React.element =
    "ClipboardCopyToggle";
};

module DescriptionList = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~autoFitMinModifier: 'any1=?,
      ~className: string=?,
      ~columnModifier: 'any2=?,
      ~isAutoColumnWidths: bool=?,
      ~isAutoFit: bool=?,
      ~isHorizontal: bool=?,
      ~isInlineGrid: bool=?
    ) =>
    React.element =
    "DescriptionList";
};

module DescriptionListDescription = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "DescriptionListDescription";
};

module DescriptionListGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'any=?, ~className: string=?) => React.element =
    "DescriptionListGroup";
};

module DescriptionListTerm = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "DescriptionListTerm";
};

module Divider = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~component: [@bs.string] [
                    | [@bs.as "hr"] `Hr
                    | [@bs.as "li"] `Li
                    | [@bs.as "div"] `Div
                  ]
                    =?,
      ~inset: 'any=?,
      ~isVertical: bool=?
    ) =>
    React.element =
    "Divider";
};

module DrawerContext = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~isExpanded: bool, ~isStatic: bool, ~position: string=?) => React.element =
    "DrawerContext";
};

module Drawer = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~isExpanded: bool=?,
      ~isInline: bool=?,
      ~isStatic: bool=?,
      ~position: [@bs.string] [
                   | [@bs.as "left"] `Left
                   | [@bs.as "right"] `Right
                   | [@bs.as "bottom"] `Bottom
                 ]
                   =?
    ) =>
    React.element =
    "Drawer";
};

module DrawerActions = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "DrawerActions";
};

module DrawerCloseButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~className: string=?) => React.element = "DrawerCloseButton";
};

module DrawerContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~panelContent: 'children1
    ) =>
    React.element =
    "DrawerContent";
};

module DrawerContentBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~hasPadding: bool=?) =>
    React.element =
    "DrawerContentBody";
};

module DrawerHead = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~hasNoPadding: bool=?) =>
    React.element =
    "DrawerHead";
};

module DrawerMain = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "DrawerMain";
};

module DrawerPanelBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~hasNoPadding: bool=?) =>
    React.element =
    "DrawerPanelBody";
};

module DrawerPanelContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasNoBorder: bool=?,
      ~increment: int=?,
      ~isResizable: bool=?,
      ~maxSize: int=?,
      ~minSize: int=?,
      ~resizeAriaDescribedBy: string=?,
      ~resizeAriaLabel: string=?,
      ~widths: 'any1=?
    ) =>
    React.element =
    "DrawerPanelContent";
};

module DrawerSection = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "DrawerSection";
};

module Dropdown = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~dropdownItems: 'any1=?,
      ~isGrouped: bool=?,
      ~isOpen: bool=?,
      ~isPlain: bool=?,
      ~toggle: React.element
    ) =>
    React.element =
    "Dropdown";
};

module DropdownGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~label: 'children1=?) =>
    React.element =
    "DropdownGroup";
};

module DropdownItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~additionalChild: 'children1=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~component: 'children2=?,
      ~customChild: 'children3=?,
      ~description: 'children4=?,
      ~href: string=?,
      ~icon: 'children5=?,
      ~isDisabled: bool=?,
      ~isHovered: bool=?,
      ~isPlainText: bool=?,
      ~listItemClassName: string=?,
      ~styleChildren: bool=?,
      ~tabIndex: int=?,
      ~tooltip: 'children6=?,
      ~tooltipProps: 'any7=?
    ) =>
    React.element =
    "DropdownItem";
};

module Separator = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~className: string=?) => React.element = "Separator";
};

module DropdownToggle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~icon: 'children1=?,
      ~id: string=?,
      ~isActive: bool=?,
      ~isDisabled: bool=?,
      ~isOpen: bool=?,
      ~isPlain: bool=?,
      ~isPrimary: bool=?,
      ~splitButtonItems: array('children)=?,
      ~splitButtonVariant: [@bs.string] [
                             | [@bs.as "action"] `Action
                             | [@bs.as "checkbox"] `Checkbox
                           ]
                             =?,
      ~toggleIndicator: React.element=?,
      ~_type: [@bs.string] [
                | [@bs.as "button"] `Button
                | [@bs.as "submit"] `Submit
                | [@bs.as "reset"] `Reset
              ]
                =?
    ) =>
    React.element =
    "DropdownToggle";
};

module DropdownToggleAction = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~id: string=?,
      ~isDisabled: bool=?
    ) =>
    React.element =
    "DropdownToggleAction";
};

module DropdownToggleCheckbox = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~checked: bool=?,
      ~className: string=?,
      ~id: string,
      ~isChecked: bool=?,
      ~isDisabled: bool=?,
      ~isValid: bool=?,
      ~onChange: (bool, ReactEvent.Mouse.t) => unit=?
    ) =>
    React.element =
    "DropdownToggleCheckbox";
};

module InternalDropdownItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~additionalChild: 'children1=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~component: 'children2=?,
      ~componentID: string=?,
      ~context: 'any3=?,
      ~customChild: 'children4=?,
      ~description: 'children5=?,
      ~enterTriggersArrowDown: bool=?,
      ~href: string=?,
      ~icon: 'children6=?,
      ~id: string=?,
      ~index: int=?,
      ~inoperableEvents: array(string)=?,
      ~isDisabled: bool=?,
      ~isHovered: bool=?,
      ~isPlainText: bool=?,
      ~listItemClassName: string=?,
      ~role: string=?,
      ~styleChildren: bool=?,
      ~tooltip: 'children7=?,
      ~tooltipProps: 'any8=?
    ) =>
    React.element =
    "InternalDropdownItem";
};

module KebabToggle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~bubbleEvent: bool=?,
      ~className: string=?,
      ~id: string=?,
      ~isActive: bool=?,
      ~isDisabled: bool=?,
      ~isOpen: bool=?,
      ~isPlain: bool=?,
      ~parentRef: 'any1=?,
      ~_type: [@bs.string] [
                | [@bs.as "button"] `Button
                | [@bs.as "submit"] `Submit
                | [@bs.as "reset"] `Reset
              ]
                =?
    ) =>
    React.element =
    "KebabToggle";
};

module Toggle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~bubbleEvent: bool=?,
      ~className: string=?,
      ~id: string,
      ~isActive: bool=?,
      ~isDisabled: bool=?,
      ~isOpen: bool=?,
      ~isPlain: bool=?,
      ~isPrimary: bool=?,
      ~isSplitButton: bool=?,
      ~parentRef: 'any1=?,
      ~_type: [@bs.string] [
                | [@bs.as "button"] `Button
                | [@bs.as "submit"] `Submit
                | [@bs.as "reset"] `Reset
              ]
                =?
    ) =>
    React.element =
    "Toggle";
};

module EmptyState = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~className: string=?,
      ~isFullHeight: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "xs"] `Xs
                  | [@bs.as "small"] `Small
                  | [@bs.as "large"] `Large
                  | [@bs.as "xl"] `Xl
                  | [@bs.as "full"] `Full
                ]
                  =?
    ) =>
    React.element =
    "EmptyState";
};

module EmptyStateBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "EmptyStateBody";
};

module EmptyStateIcon = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~component: React.element=?,
      ~icon: React.element=?,
      ~variant: [@bs.string] [
                  | [@bs.as "icon"] `Icon
                  | [@bs.as "container"] `Container
                ]
                  =?
    ) =>
    React.element =
    "EmptyStateIcon";
};

module Icon = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~color: string=?) => React.element = "Icon";
};

module EmptyStatePrimary = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "EmptyStatePrimary";
};

module EmptyStateSecondaryActions = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "EmptyStateSecondaryActions";
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
      ~helperText: 'children1=?,
      ~helperTextIcon: 'children2=?,
      ~helperTextInvalid: 'children3=?,
      ~helperTextInvalidIcon: 'children4=?,
      ~isHelperTextBeforeField: bool=?,
      ~isInline: bool=?,
      ~isRequired: bool=?,
      ~label: 'children5=?,
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
      ~icon: 'children1=?,
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

module Hint = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~actions: 'children1=?, ~className: string=?) =>
    React.element =
    "Hint";
};

module HintBody = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "HintBody";
};

module HintFooter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "HintFooter";
};

module HintTitle = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "HintTitle";
};

module Label = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~closeBtn: 'children1=?,
      ~closeBtnProps: 'any2=?,
      ~color: [@bs.string] [
                | [@bs.as "blue"] `Blue
                | [@bs.as "cyan"] `Cyan
                | [@bs.as "green"] `Green
                | [@bs.as "orange"] `Orange
                | [@bs.as "purple"] `Purple
                | [@bs.as "red"] `Red
                | [@bs.as "grey"] `Grey
              ]
                =?,
      ~href: string=?,
      ~icon: 'children3=?,
      ~isOverflowLabel: bool=?,
      ~isTruncated: bool=?,
      ~tooltipPosition: [@bs.string] [
                          | [@bs.as "auto"] `Auto
                          | [@bs.as "top"] `Top
                          | [@bs.as "bottom"] `Bottom
                          | [@bs.as "left"] `Left
                          | [@bs.as "right"] `Right
                        ]
                          =?,
      ~variant: [@bs.string] [
                  | [@bs.as "outline"] `Outline
                  | [@bs.as "filled"] `Filled
                ]
                  =?
    ) =>
    React.element =
    "Label";
};

module LabelGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~categoryName: string=?,
      ~className: string=?,
      ~closeBtnAriaLabel: string=?,
      ~collapsedText: string=?,
      ~defaultIsOpen: bool=?,
      ~expandedText: string=?,
      ~isClosable: bool=?,
      ~isVertical: bool=?,
      ~numLabels: int=?,
      ~tooltipPosition: [@bs.string] [
                          | [@bs.as "auto"] `Auto
                          | [@bs.as "top"] `Top
                          | [@bs.as "bottom"] `Bottom
                          | [@bs.as "left"] `Left
                          | [@bs.as "right"] `Right
                        ]
                          =?
    ) =>
    React.element =
    "LabelGroup";
};

module List = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: [@bs.string] [ | [@bs.as "ol"] `Ol | [@bs.as "ul"] `Ul]=?,
      ~variant: [@bs.string] [ | [@bs.as "inline"] `Inline]=?
    ) =>
    React.element =
    "List";
};

module ListItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children, ~style: ReactDOM.Style.t=?) => React.element =
    "ListItem";
};

module Login = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~footer: 'children1=?,
      ~header: 'children2=?
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
      ~helperTextIcon: 'children1=?,
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
      ~headerBrand: 'children1=?
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
      ~forgotCredentials: 'children1=?,
      ~signUpForAccountMessage: 'children2=?,
      ~socialMediaLoginContent: 'children3=?
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
      ~linkComponent: 'children1=?,
      ~linkComponentProps: 'any2=?,
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
      ~children: 'children=?,
      ~backgroundImgAlt: string=?,
      ~backgroundImgSrc: string=?,
      ~brandImgAlt: string=?,
      ~brandImgSrc: string=?,
      ~className: string=?,
      ~footerListItems: 'children1=?,
      ~footerListVariants: [@bs.string] [ | [@bs.as "inline"] `Inline]=?,
      ~forgotCredentials: 'children2=?,
      ~loginSubtitle: string=?,
      ~loginTitle: string,
      ~signUpForAccountMessage: 'children3=?,
      ~socialMediaLoginContent: 'children4=?,
      ~textContent: string=?
    ) =>
    React.element =
    "LoginPage";
};

module Menu = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~activeItemId: 'any1=?,
      ~className: string=?,
      ~containsFlyout: bool=?,
      ~hasSearchInput: bool=?
    ) =>
    React.element =
    "Menu";
};

module MenuContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "MenuContent";
};

module MenuGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~label: string=?,
      ~titleId: string=?
    ) =>
    React.element =
    "MenuGroup";
};

module MenuInput = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children=?) => React.element = "MenuInput";
};

module MenuItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~actions: 'children1=?,
      ~className: string=?,
      ~component: 'children2=?,
      ~description: 'children3=?,
      ~flyoutMenu: 'children4=?,
      ~icon: 'children5=?,
      ~isActive: bool=?,
      ~isDisabled: bool=?,
      ~isExternalLink: bool=?,
      ~isFavorited: bool=?,
      ~isSelected: bool=?,
      ~itemId: 'any6=?,
      ~_to: string=?
    ) =>
    React.element =
    "MenuItem";
};

module MenuList = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "MenuList";
};

module Nav = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~onSelect: 'callback=?,
      ~onToggle: 'callback=?,
      ~theme: [@bs.string] [ | [@bs.as "dark"] `Dark | [@bs.as "light"] `Light]
                =?,
      ~variant: [@bs.string] [
                  | [@bs.as "default"] `Default
                  | [@bs.as "horizontal"] `Horizontal
                  | [@bs.as "tertiary"] `Tertiary
                ]
                  =?
    ) =>
    React.element =
    "Nav";
};

module NavExpandable = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~groupId: string=?,
      ~id: string=?,
      ~isActive: bool=?,
      ~isExpanded: bool=?,
      ~srText: string=?,
      ~title: string
    ) =>
    React.element =
    "NavExpandable";
};

module NavGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~id: string=?,
      ~title: string
    ) =>
    React.element =
    "NavGroup";
};

module NavItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: 'children1=?,
      ~groupId: string=?,
      ~isActive: bool=?,
      ~itemId: string=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~preventDefault: bool=?,
      ~style: ReactDOM.Style.t=?,
      ~styleChildren: bool=?,
      ~_to: string=?
    ) =>
    React.element =
    "NavItem";
};

module NavList = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~ariaLeftScroll: string=?,
      ~ariaRightScroll: string=?,
      ~className: string=?,
      ~style: ReactDOM.Style.t=?
    ) =>
    React.element =
    "NavList";
};

module Page = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~additionalGroupedContent: 'children1=?,
      ~breadcrumb: 'children2=?,
      ~className: string=?,
      ~defaultManagedSidebarIsOpen: bool=?,
      ~groupProps: 'any3=?,
      ~header: 'children4=?,
      ~isBreadcrumbGrouped: bool=?,
      ~isBreadcrumbWidthLimited: bool=?,
      ~isManagedSidebar: bool=?,
      ~isNotificationDrawerExpanded: bool=?,
      ~isTertiaryNavGrouped: bool=?,
      ~isTertiaryNavWidthLimited: bool=?,
      ~mainAriaLabel: string=?,
      ~mainContainerId: string=?,
      ~mainTabIndex: int=?,
      ~notificationDrawer: 'children5=?,
      ~role: string=?,
      ~sidebar: 'children6=?,
      ~skipToContent: React.element=?,
      ~style: ReactDOM.Style.t=?,
      ~tertiaryNav: 'children7=?
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
      ~logo: 'children1=?,
      ~logoComponent: 'children2=?,
      ~logoProps: 'any3=?,
      ~role: string=?,
      ~showNavToggle: bool=?,
      ~topNav: 'children4=?
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
    (~children: 'children, ~className: string=?, ~visibility: 'any1=?) =>
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
      ~visibility: 'any1=?
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
      ~padding: 'any1=?,
      ~sticky: [@bs.string] [
                 | [@bs.as "top"] `Top
                 | [@bs.as "bottom"] `Bottom
               ]
                 =?,
      ~_type: [@bs.string] [
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

module Radio = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~checked: bool=?,
      ~className: string=?,
      ~description: 'children=?,
      ~id: string,
      ~isChecked: bool=?,
      ~isDisabled: bool=?,
      ~isLabelBeforeButton: bool=?,
      ~isLabelWrapped: bool=?,
      ~isValid: bool=?,
      ~label: 'children1=?,
      ~name: string,
      ~onChange: (bool, ReactEvent.Mouse.t) => unit=?
    ) =>
    React.element =
    "Radio";
};

module Spinner = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~size: [@bs.string] [
               | [@bs.as "sm"] `Sm
               | [@bs.as "md"] `Md
               | [@bs.as "lg"] `Lg
               | [@bs.as "xl"] `Xl
             ]
               =?
    ) =>
    React.element =
    "Spinner";
};

module Tab = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~eventKey: string,
      ~href: string=?,
      ~isHidden: bool=?,
      ~tabContentId: string=?,
      ~title: 'children1
    ) =>
    React.element =
    "Tab";
};

module TabButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?, ~href: string=?) =>
    React.element =
    "TabButton";
};

module TabContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'any=?,
      ~activeKey: string=?,
      ~child: React.element=?,
      ~className: string=?,
      ~eventKey: string=?,
      ~id: string
    ) =>
    React.element =
    "TabContent";
};

module TabTitleIcon = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "TabTitleIcon";
};

module TabTitleText = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~children: 'children, ~className: string=?) => React.element =
    "TabTitleText";
};

module Tabs = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children,
      ~activeKey: string=?,
      ~className: string=?,
      ~component: [@bs.string] [ | [@bs.as "div"] `Div | [@bs.as "nav"] `Nav]=?,
      ~id: string=?,
      ~inset: 'any1=?,
      ~isBox: bool=?,
      ~isFilled: bool=?,
      ~isSecondary: bool=?,
      ~isVertical: bool=?,
      ~leftScrollAriaLabel: string=?,
      ~mountOnEnter: bool=?,
      ~rightScrollAriaLabel: string=?,
      ~unmountOnExit: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "default"] `Default
                  | [@bs.as "light300"] `Light300
                ]
                  =?
    ) =>
    React.element =
    "Tabs";
};

module Text = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: [@bs.string] [
                    | [@bs.as "h1"] `H1
                    | [@bs.as "h2"] `H2
                    | [@bs.as "h3"] `H3
                    | [@bs.as "h4"] `H4
                    | [@bs.as "h5"] `H5
                    | [@bs.as "h6"] `H6
                    | [@bs.as "p"] `P
                    | [@bs.as "a"] `A
                    | [@bs.as "small"] `Small
                    | [@bs.as "blockquote"] `Blockquote
                    | [@bs.as "pre"] `Pre
                  ]
                    =?
    ) =>
    React.element =
    "Text";
};

module TextContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "TextContent";
};

module TextList = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: [@bs.string] [
                    | [@bs.as "ul"] `Ul
                    | [@bs.as "ol"] `Ol
                    | [@bs.as "dl"] `Dl
                  ]
                    =?
    ) =>
    React.element =
    "TextList";
};

module TextListItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~component: [@bs.string] [
                    | [@bs.as "li"] `Li
                    | [@bs.as "dt"] `Dt
                    | [@bs.as "dd"] `Dd
                  ]
                    =?
    ) =>
    React.element =
    "TextListItem";
};

module TextArea = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~isDisabled: bool=?,
      ~isReadOnly: bool=?,
      ~isRequired: bool=?,
      ~resizeOrientation: [@bs.string] [
                            | [@bs.as "horizontal"] `Horizontal
                            | [@bs.as "vertical"] `Vertical
                            | [@bs.as "both"] `Both
                          ]
                            =?,
      ~validated: [@bs.string] [
                    | [@bs.as "success"] `Success
                    | [@bs.as "warning"] `Warning
                    | [@bs.as "error"] `Error
                    | [@bs.as "default"] `Default
                  ]
                    =?,
      ~value: string=?
    ) =>
    React.element =
    "TextArea";
};

module TextInput = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~customIconDimensions: string=?,
      ~customIconUrl: string=?,
      ~iconVariant: [@bs.string] [
                      | [@bs.as "calendar"] `Calendar
                      | [@bs.as "clock"] `Clock
                      | [@bs.as "search"] `Search
                    ]
                      =?,
      ~id: string,
      ~isDisabled: bool=?,
      ~isLeftTruncated: bool=?,
      ~isReadOnly: bool=?,
      ~isRequired: bool=?,
      ~onChange: (string, ReactEvent.Mouse.t) => unit=?,
      ~_type: [@bs.string] [
                | [@bs.as "text"] `Text
                | [@bs.as "date"] `Date
                | [@bs.as "datetime-local"] `Datetimelocal
                | [@bs.as "email"] `Email
                | [@bs.as "month"] `Month
                | [@bs.as "number"] `Number
                | [@bs.as "password"] `Password
                | [@bs.as "search"] `Search
                | [@bs.as "tel"] `Tel
                | [@bs.as "time"] `Time
                | [@bs.as "url"] `Url
              ]
                =?,
      ~validated: [@bs.string] [
                    | [@bs.as "success"] `Success
                    | [@bs.as "warning"] `Warning
                    | [@bs.as "error"] `Error
                    | [@bs.as "default"] `Default
                  ]
                    =?,
      ~value: string=?
    ) =>
    React.element =
    "TextInput";
};

module Tile = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~icon: 'children1=?,
      ~isDisabled: bool=?,
      ~isDisplayLarge: bool=?,
      ~isSelected: bool=?,
      ~isStacked: bool=?,
      ~title: string
    ) =>
    React.element =
    "Tile";
};

module Title = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~headingLevel: [@bs.string] [
                       | [@bs.as "h1"] `H1
                       | [@bs.as "h2"] `H2
                       | [@bs.as "h3"] `H3
                       | [@bs.as "h4"] `H4
                       | [@bs.as "h5"] `H5
                       | [@bs.as "h6"] `H6
                     ]
    ) =>
    React.element =
    "Title";
};

module ToolbarContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~alignment: 'any1=?,
      ~className: string=?,
      ~clearFiltersButtonText: string=?,
      ~isExpanded: bool=?,
      ~showClearFiltersButton: bool=?,
      ~toolbarId: string=?,
      ~visibility: 'any2=?,
      ~visiblity: 'any3=?
    ) =>
    React.element =
    "ToolbarContent";
};

module ToolbarExpandIconWrapper = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "ToolbarExpandIconWrapper";
};

module ToolbarExpandableContent = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~className: string=?,
      ~clearFiltersButtonText: string=?,
      ~isExpanded: bool=?,
      ~showClearFiltersButton: bool
    ) =>
    React.element =
    "ToolbarExpandableContent";
};

module ToolbarFilter = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children, ~showToolbarItem: bool=?) => React.element =
    "ToolbarFilter";
};
