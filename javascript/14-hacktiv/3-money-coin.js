function convertToCoin(money) {
  let coins = [1, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000]
  let result = []
  for (let i = coins.length; i >= 0; i--) {
    while(money >= coins[i]) {
      result.push(coins[i])
      money -= coins[i]
    }
  }
  return result
}

console.log(convertToCoin(543))
// output : [ 500, 20, 20, 1, 1, 1 ]

console.log(convertToCoin(7752))
// output : [ 5000, 2000, 500, 200, 50, 1, 1 ]

console.log(convertToCoin(37454))
// [ 10000, 10000, 10000, 5000, 2000, 200, 200, 50, 1, 1, 1, 1 ]