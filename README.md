# re-patternfly

ReasonML binding for [patternfly][patternfly].


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

```sh
git clone https://github.com/softwarefactory-project/re-patternfly
cd re-patternfly
npm install
npm start
```

Then build and run tests with `npm test`.


[patternfly]: https://www.patternfly.org/v4/
