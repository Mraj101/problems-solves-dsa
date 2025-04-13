// injector.js
// This file will act as the injector for dependency injection.

export function injectFunction(dependency) {
    return function (...args) {
        return dependency(...args);
    };
}