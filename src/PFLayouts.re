module Bullseye = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (~children: 'children=?, ~className: string=?) => React.element =
    "Bullseye";
};

module Grid = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~hasGutter: bool=?,
      ~lg: PFTypes.Column.t=?,
      ~md: PFTypes.Column.t=?,
      ~sm: PFTypes.Column.t=?,
      ~span: PFTypes.Column.t=?,
      ~xl: PFTypes.Column.t=?,
      ~xl2: PFTypes.Column.t=?
    ) =>
    React.element =
    "Grid";
};

module GridItem = {
  [@react.component] [@bs.module "@patternfly/react-core"]
  external make:
    (
      ~children: 'children=?,
      ~className: string=?,
      ~lg: PFTypes.Column.t=?,
      ~lgOffset: PFTypes.Column.t=?,
      ~lgRowSpan: PFTypes.Column.t=?,
      ~md: PFTypes.Column.t=?,
      ~mdOffset: PFTypes.Column.t=?,
      ~mdRowSpan: PFTypes.Column.t=?,
      ~offset: PFTypes.Column.t=?,
      ~rowSpan: PFTypes.Column.t=?,
      ~sm: PFTypes.Column.t=?,
      ~smOffset: PFTypes.Column.t=?,
      ~smRowSpan: PFTypes.Column.t=?,
      ~span: PFTypes.Column.t=?,
      ~xl: PFTypes.Column.t=?,
      ~xl2: PFTypes.Column.t=?,
      ~xl2Offset: PFTypes.Column.t=?,
      ~xl2RowSpan: PFTypes.Column.t=?,
      ~xlOffset: PFTypes.Column.t=?,
      ~xlRowSpan: PFTypes.Column.t=?
    ) =>
    React.element =
    "GridItem";
};
