open Patternfly

module SortableTable = {
  @react.component
  let make = () => {
    let columns = [
      {title: "job", transforms: [sortable]},
      {title: "result", transforms: [sortable]},
    ]
    let (sortBy, setSortBy) = React.useState(_ => {index: 0, direction: #desc})
    let (rows, setRows) = React.useState(_ => [
      {cells: ["rpmbuild", "success"]},
      {cells: ["rpmtest", "failure"]},
      {cells: ["noop", "error"]},
    ])
    let doSort = (index, direction) => {
      setRows(_ =>
        rows |> Js.Array.sortInPlaceWith((a, b) => {
          let (first, second) = switch direction {
          | #desc => (a.cells[index], b.cells[index])
          | #asc => (b.cells[index], a.cells[index])
          }
          first < second ? -1 : first == second ? 0 : 1
        })
      )
    }
    let onSort = (_, index, direction) => {
      setSortBy(_ => {index: index, direction: direction})
      doSort(index, direction)
    }
    React.useEffect0(() => {
      doSort(0, #desc)
      None
    })
    <Table caption="Sortable Table" rows cells=columns sortBy onSort>
      <TableHeader /> <TableBody />
    </Table>
  }
}

@react.component
let make = () => <>
  <Breadcrumb>
    <BreadcrumbItem _to="#"> {"Home" |> React.string} </BreadcrumbItem>
    <BreadcrumbHeading _to="#"> {"Project" |> React.string} </BreadcrumbHeading>
  </Breadcrumb>
  <Patternfly.List>
    <Patternfly.ListItem> <Icons.Topology /> </Patternfly.ListItem>
    <Patternfly.ListItem> {"Hello patternfly!" |> React.string} </Patternfly.ListItem>
    <Patternfly.ListItem> <SortableTable /> </Patternfly.ListItem>
  </Patternfly.List>
</>
