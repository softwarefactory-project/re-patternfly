# re-patternfly

ReasonML binding for [patternfly][patternfly].

## Features

Components (generated from the typescript interfaces):

- Alert
- AlertGroup
- Avatar
- Badge
- Banner
- Brand
- Breadcrumb
- Button
- DescriptionList
- Divider
- Drawer
- Dropdown
- EmptyState
- Checkbox
- Card
- Form
- List
- LoginPage
- Nav
- Page
- Text
- TextArea
- TextInput

Table component supports this data definition:

```reason
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
```

## Install

Add to your `package.json`:

```
npm install @softwarefactory-project/re-patternfly
```

Or using yarn:

```
yarn add @softwarefactory-project/re-patternfly
```

Add to your `bsconfig.json`:

```diff
"bs-dependencies": [
+  "@softwarefactory-project/re-patternfly"
]
```

## Example

```reason
[@react.component]
let make = () => {
  <Patternfly.List>
    <Patternfly.ListItem>
      {"Hello patternfly!" |> React.string}
    </Patternfly.ListItem>
  </Patternfly.List>
};
```

See the [demo](./demo) directory for a starter project.

## Contribute

Contributions are most welcome, for example the project needs help to:

- bind more component.
- better documentation and demo project.

Get started by running:

```sh
git clone https://github.com/softwarefactory-project/re-patternfly
cd re-patternfly
npm install
npm start
```

Then build and run tests with `npm test`.

[patternfly]: https://www.patternfly.org/v4/
