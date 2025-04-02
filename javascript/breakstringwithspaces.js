function breakBySpace(str) {
    let result = [];
    let word = '';

    for (let i = 0; i < str.length; i++) {
        if (str[i] === ' ') {
            if (word.length > 0) {
                result.push(word);
                word = '';
            }
        } else {
            word += str[i];
        }
    }

    if (word.length > 0) {
        result.push(word);
    }

    return result;
}

let input = "get into array break by space";
console.log(breakBySpace(input)); 
// Output: ["get", "into", "array", "break", "by", "space"]
