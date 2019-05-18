
// @problem: light bulbs

function lightBulbs(N) {
  let lightbulbs = [];
  for (let i = 1; i <= N; i++) {
    lightbulbs.push(false);
  }
  
  for (let i = 1; i <= N; i++) {
    let w = 1;
    let k = 2 * i;
    while (k <= N) {
      lightbulbs[k - 1] = !lightbulbs[k - 1];
      w += 1;
      k = w * i;
    }
  }
  return lightbulbs;
}

console.log(lightBulbs(10));