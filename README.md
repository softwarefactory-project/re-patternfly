# re-patternfly

ReasonML binding for [patternfly][patternfly]

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

See the [example](./example) directory for a starter project.

[patternfly]: https://www.patternfly.org/v4/
