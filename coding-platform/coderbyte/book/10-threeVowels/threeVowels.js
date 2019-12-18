
// @problem: count string have min 3 continous vowels

function threeVowels(str) {
    let array = str.split(' ');
    let count = 0;
    const pattern = /[aeiou]{3,}/gi;
    for (let word of array) {
        if (word.match(pattern) !== null) {
            count += 1;
        }
    }
    return count;
}

console.log(threeVowels('This is aaa voweeels')); // 2
console.log(threeVowels('aaa iii uuu eee oooo')); // 5