
function generateBorderBox (N) {
  for (let i = 1; i < N + 1; i++) {
    let line = ``;
    for (let j = 1; j < N + 1; j++) {
      if (i == 1 || i == N || j == 1 || j == N) {
        line += `I`;
      } else if (
        (i == 3 || i == N-2 || j == 3 || j == N-2) &&
        (i >= 3 && i <= N-2) &&
        (j >= 3 && j <= N-2)) {
        line += `I`;
      } else if (i == Math.ceil(N/2) && j == Math.ceil(N/2)) {
        line += `*`;
      } else {
        line += ` `;
      }
    }
    console.log(line);
  }
}

generateBorderBox(9);
/*
IIIIIIIII
I       I
I IIIII I
I I   I I
I I * I I
I I   I I
I IIIII I
I       I
IIIIIIIII
*/

generateBorderBox(13);
/*
IIIIIIIIIIIII
I           I
I IIIIIIIII I
I I       I I
I I       I I
I I       I I
I I   *   I I
I I       I I
I I       I I
I I       I I
I IIIIIIIII I
I           I
IIIIIIIIIIIII
*/

generateBorderBox(23);
/*
IIIIIIIIIIIIIIIIIIIIIII
I                     I
I IIIIIIIIIIIIIIIIIII I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I        *        I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I I                 I I
I IIIIIIIIIIIIIIIIIII I
I                     I
IIIIIIIIIIIIIIIIIIIIIII
*/