'use strict'
let assert = require('assert')
var addon = require('../index')
var inv = addon([
  [1, 2, 2],
  [2, 0, 2],
  [1, 1, 1]
])
describe('Test for Gauss Jordan Elimination', function() {
  it('should send a post', function() {
    assert.equal(inv[2][2], -2)
  })
})
