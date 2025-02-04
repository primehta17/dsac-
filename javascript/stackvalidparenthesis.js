function isValid(s) {
    let stack = [];
    
    for (let char of s) {
        if (char === '(') {
            stack.push(char);  // Push opening parenthesis to stack
        } else if (char === ')') {
            // If stack is empty, no matching opening parenthesis
            if (stack.length === 0) {
                return false;
            }
            stack.pop();  // Pop the last opening parenthesis
        }
    }
    
    // If the stack is empty, all parentheses are matched
    return stack.length === 0;
}

console.log(isValid("()")); // true
console.log(isValid("()()")); // true
console.log(isValid("(())")); // true
console.log(isValid("(()")); // false
console.log(isValid("())")); // false
console.log(isValid(")(")); // false


function isValid(s) {
    const stack = [];
    const mapping = {
        ')': '(',
        '}': '{',
        ']': '['
    };

    for (let char of s) {
        if (char === '(' || char === '{' || char === '[') {
            stack.push(char); // Push opening brackets to stack
        } else if (char === ')' || char === '}' || char === ']') {
            if (stack.pop() !== mapping[char]) {
                return false; // If the top of stack doesn't match closing bracket
            }
        }
    }

    return stack.length === 0; // If stack is empty, parentheses are valid
}
console.log(isValid("()")); // true
console.log(isValid("()[]{}")); // true
console.log(isValid("(]")); // false
console.log(isValid("([)]")); // false
console.log(isValid("{[]}")); // true
