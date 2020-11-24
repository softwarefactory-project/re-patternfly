# re-patternfly demo

Start your project by copying this example directory and change the location
of the `@softwarefactory-project/re-patternfly` dependency in the `package.json`.

This project uses:

- `parcel` to serve and bundle the code.
- `jest` to run ReactTestUtils.

Using yarn (this works better for cross project linking with path):

```
yarn install
yarn build
yarn test
yarn start & yarn serve
```

Or using npm (when using non local dependencies):

```
npm install
npm run build
npm run test
npm run start & npm run serve
```

Then open browser on `http://localhost:1234`

Distribute with:

```
npm run dist
# Open browser in dist/
```
