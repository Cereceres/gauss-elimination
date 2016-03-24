'use strict'
var addon = require('bindings')('gauss');
var fn = addon();
console.log('antes de llamar el addon');
fn([
  [1, 2, 3],
  [2, 0, 1],
  [-2, 1, 2]
])
