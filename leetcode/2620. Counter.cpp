/**
 * @param {number} n
 * @return {Function} counter
 */

let storedValue = 0

var createCounter = function (n) {
    if (n === storedValue) {
        return
    }
    else {
        storedValue = n
    }

    return function () {
        storedValue = storedValue + 1
        return storedValue - 1
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */