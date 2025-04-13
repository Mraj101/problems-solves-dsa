// operations.js
// This file contains the actual functions to be injected.

export function add(...numbersToAdd) {
    return numbersToAdd.reduce((totalSum, number) => totalSum + number, 0);
}

export function multiply(...numbersToMultiply) {
    if (numbersToMultiply.length === 0) {
        return 0;
    }
    return numbersToMultiply.reduce((totalProduct, number) => totalProduct * number, 1);
}

export function subtract(...numbersToSubtract) {
    return numbersToSubtract.reduce((totalDifference, number) => totalDifference - number);
}