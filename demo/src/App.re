open Patternfly;

module SortableTable = {
  [@react.component]
  let make = () => {
    let columns = [|
      {title: "job", transforms: [|sortable|]},
      {title: "result", transforms: [|sortable|]},
    |];
    let (rows, setRows) =
      React.useState(_ =>
        [|
          {cells: [|"rpmbuild", "success"|]},
          {cells: [|"rpmtest", "failure"|]},
        |]
      );
    let onSort = _ => setRows(_ => Belt.Array.reverse(rows));

    <Table caption="Sortable Table" rows cells=columns onSort>
      <TableHeader />
      <TableBody />
    </Table>;
  };
};

[@react.component]
let make = () => {
  <Patternfly.List>
    <Patternfly.ListItem> <Icons.Topology /> </Patternfly.ListItem>
    <Patternfly.ListItem>
      {"Hello patternfly!" |> React.string}
    </Patternfly.ListItem>
    <Patternfly.ListItem> <SortableTable /> </Patternfly.ListItem>
  </Patternfly.List>;
};
