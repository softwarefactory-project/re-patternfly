module AlertGroup = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~isToast: bool=?, ~children: 'children=?, ~className: string=?) =>
    React.element =
    "AlertGroup";
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
module AlertActionLink = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make: (~className: string=?, ~children: string=?) => React.element =
    "AlertActionLink";
};
module AlertActionCloseButton = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~variantLabel: string=?, ~className: string=?) => React.element =
    "AlertActionCloseButton";
};
module Alert = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~tooltipPosition: [@bs.string] [
                          | [@bs.as "auto"] `Auto
                          | [@bs.as "top"] `Top
                          | [@bs.as "bottom"] `Bottom
                          | [@bs.as "left"] `Left
                          | [@bs.as "right"] `Right
                        ]
                          =?,
      ~truncateTitle: int=?,
      ~isLiveRegion: bool=?,
      ~variantLabel: string=?,
      ~className: string=?,
      ~children: 'children=?,
      ~actionLinks: 'children=?,
      ~actionClose: 'children=?,
      ~title: 'children,
      ~isInline: bool=?,
      ~variant: [@bs.string] [
                  | [@bs.as "success"] `Success
                  | [@bs.as "danger"] `Danger
                  | [@bs.as "warning"] `Warning
                  | [@bs.as "info"] `Info
                  | [@bs.as "default"] `Default
                ]
                  =?
    ) =>
    React.element =
    "Alert";
};
