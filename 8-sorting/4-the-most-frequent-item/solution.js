
function sort (arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j][1] < arr[i][1]) {
        let temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  return arr;
}

function mostFrequentItem(arr){
  let tabel = {};
  for (let i of arr) {
    if (tabel[i] == undefined) {
      tabel[i] = 1;
    } else {
      tabel[i] += 1;
    }
  }
  let data = [];
  for (let i in tabel) {
    data.push([i, tabel[i]]);
  }
  let sortedData = sort(data);
  let result = '';
  for (let i of sortedData) {
    result += `${i[0]}(${i[1]}), `;
  }
  let newResult = '';
  for (let i = 0; i < result.length - 2; i++) {
    newResult += result[i];
  }
  return newResult;
}

console.log(mostFrequentItem(['asus', 'asus', 'samsung', 'iphone', 'iphone', 'asus', 'asus'])); // 'samsung(1), iphone(2) , asus(4)'
console.log(mostFrequentItem(['9', 'b', 'b', 'c', '9', '9', 'b', '9', '2', '2'])); // 'c(1) , 2(2) ,b(3) ,9(4)'
console.log(mostFrequentItem(['book', 'laptop', 'iPod'])); // 'book(1), laptop(1), iPod(1)'