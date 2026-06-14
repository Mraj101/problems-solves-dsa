function isValid(str) {
    let stack = [];
    let openingBrackets = ["(", "{", "["];
    let closingBrackets = [")", "}", "]"];

    for (let i = 0; i < str.length; i++) {

        if (openingBrackets.includes(str[i])) {
            stack.push(str[i]);
        } 
        
        else if (closingBrackets.includes(str[i])) {
            let lastOpeningBracket = stack.pop();

            if (
                (str[i] == ")" && lastOpeningBracket != "(") ||
                (str[i] == "}" && lastOpeningBracket != "{") ||
                (str[i] == "]" && lastOpeningBracket != "[")
            ) {
                return false;
            }
        }
    }

    return stack.length === 0;
}