# gauss-elimination
gauss-elimination for JavaScript

# Installing

```bash
$ npm install gauss-elimination
```

# Getting starter

```js

let gaussElimination = require( 'gauss-elimination' )
```
# Usage

Create

```js
var inv = gaussElimination( [
  [ 1, 2, 2 ],
  [ 2, 0, 2 ],
  [ 1, 1, 1 ]
] )

    assert.equal( inv[ 2 ][ 2 ], -2 )//
    // The inverse is:
    //[
    //  [ -1, 0, 2 ],
    //  [ -0, -0.5, 1 ],
    //  [ 1, 0.5, -2 ]
    // ]


} )
```

# Testing

Running the tests

```bash
npm test
```


## Contributing
In lieu of a formal style guide, take care to maintain the existing coding style. Add unit tests for any new or changed functionality. Lint and test your code.  For any bugs report please contact to me via e-mail: cereceres@ciencias.unam.mx.

## Licence
The MIT License (MIT)

Copyright (c) 2015 Jesús Edel Cereceres.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
