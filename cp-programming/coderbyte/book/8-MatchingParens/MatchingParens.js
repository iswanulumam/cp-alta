
// @problem: check string is matching or not

function MatchingParens(s) {
    let counter = 0;
    for (let i of s) {
        if (i === ')') counter += 1;
        if (i === '(') counter -= 1;
    }
    return (counter === 0) ? true : false;
}

console.log(MatchingParens("()"));      // true
console.log(MatchingParens("(())"));    // true
console.log(MatchingParens("()()()"));  // true
console.log(MatchingParens("((()()))"));// true

console.log(MatchingParens("(()"));     // false
console.log(MatchingParens("(((("));    // false
console.log(MatchingParens("())()"));   // false
console.log(MatchingParens("()()())")); // false
