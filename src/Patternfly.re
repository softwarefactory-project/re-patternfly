// Most components are generated with https://softwarefactory-project.io/cgit/software-factory/re-cli/
// The list entrypoint is GeneratePatternflyComponentBindings.re
// Translation from typescript to reason is PatternflyBindings.re
// Typescript parser is Typescript.re
include PFComponents;

include PFTypes;

// https://www.patternfly.org/v4/guidelines/icons/
//   generated using re-cli
module Icons = {
  include PFIcons;
};

module Layout = {
  include PFLayouts;
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

type sortByDirection = [ | `asc | `desc];

type sortBy = {
  index: int,
  direction: sortByDirection,
};

module Table = {
  [@react.component] [@bs.module "@patternfly/react-table"]
  external make:
    (
      ~rows: pfrows,
      ~cells: pfcells,
      ~sortBy: sortBy,
      ~onSort: (ReactEvent.Mouse.t, int, sortByDirection) => unit=?,
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
