// main.js
// This file demonstrates the usage of function injection in a modular way.

import { injectFunction } from './injector.js';
import { add, multiply ,subtract} from './operations.js';

// Injecting the add function
const injectedAdd = injectFunction(add);
console.log('Injected Add:', injectedAdd(2, 3)); // Output: 5


const injectedSubtract = injectFunction(subtract);
console.log('Injected Subtract:', injectedSubtract(25, 2,5,7)); // Output: 3

// Injecting the multiply function
const injectedMultiply = injectFunction(multiply);

console.log('Injected Multiply:', injectedMultiply(1, 3)); // Output: 6