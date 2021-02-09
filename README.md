# re-patternfly

ReasonML/ReScript binding for [patternfly][patternfly].

## Features

Components (generated from the typescript interfaces):

- AboutModal
- Accordion
- Alert
- AlertGroup
- ApplicationLauncher
- Avatar
- Backdrop
- BackgroundImage
- Badge
- Banner
- Brand
- Breadcrumb
- Button
- Card
- Checkbox
- ClipboardCopy
- DescriptionList
- Divider
- Drawer
- Drawer
- Dropdown
- EmptyState
- Form
- Hint
- Label
- LabelGroup
- List
- LoginPage
- Menu
- Nav
- Page
- Radio
- Spinner
- Tabs
- Text
- TextArea
- TextInput
- Tile
- Title
- Toolbar

Layouts:

- Bullseye
- Gallery
- Grid
- Level
- Split
- Stack

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
pnpm add @softwarefactory-project/re-patternfly
```

Add to your `bsconfig.json`:

```diff
"bs-dependencies": [
+  "@softwarefactory-project/re-patternfly"
]
```

## Example

```rescript
@react.component
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
pnpm install
pnpm start
```

Then build and run tests with `pnpm test`.

Make sure to read about [React][reason-react] and [ReScript][rescript-lang] too.

## Changes

### 2.0.0

- Replace reason-react with rescript/react
- Replace yarn package manager with pnpm

### 1.0.0

- Initial release

[patternfly]: https://www.patternfly.org/v4/
[reason-react]: https://reasonml.github.io/reason-react/docs/en/components
[rescript-lang]: https://rescript-lang.org/docs/manual/v8.0.0/overview
