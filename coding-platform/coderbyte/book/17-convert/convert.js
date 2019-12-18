
// @problem: convert string to object

function convert(string) {
    let obj = {};
    const poeple = string.split(' ');
    console.log(poeple);
    return '';
}

let s = "Daniel,me@test.com,56,Coder John,,,Teacher Michael,mike@test.com,,";
let poeple = convert(s);

console.log(poeple);

// console.log(people['Daniel']['age']); // => 56
// console.log(people['Michael']['occupation']); // => null