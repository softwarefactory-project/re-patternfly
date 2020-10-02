# re-patternfly

ReasonML binding for [patternfly][patternfly]

## Install

Run

```
npm install @softwarefactory-project/re-patternfly
```

Add to your bsconfig.json:

```diff
"bs-dependencies": [
+  "@softwarefactory-project/re-patternfly"
]
```

Then ensure the css is loaded before your application,
for example using this `index.html`:

```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>My App</title>
</head>
<body>
  <div id="root"></div>
  <script src="./index.js"></script>
</body>
</html>
```

Along with this `index.js`:

```js
import '@patternfly/react-core/dist/styles/base.css';
import "./Index.bs.js";
```

## Example

Example `Index.re`:

```reason
switch (ReactDOM.querySelector("#root")) {
| Some(root) =>
  ReactDOM.render(
    <Patternfly.List>
      <Patternfly.ListItem>
        {"Hello patternfly!" |> React.string}
      </Patternfly.ListItem>
    </Patternfly.List>,
    root,
  )
| None => Js.log("oops!")
};
```

[patternfly]: https://www.patternfly.org/v4/
