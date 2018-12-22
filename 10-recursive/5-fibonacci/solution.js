
// fibonacci using naive solution

var yourself = {
  fibonacci : function(n) {
      if (n === 0) {
          return 0;
      } else if (n === 1) {
          return 1;
      } else {
          return this.fibonacci(n - 1) +
              this.fibonacci(n - 2);
      }
  }
};

// @ fibonacci using dp solution

var yourself_ = {
  fibonacci : function(n) {
      let f = [];
      for (let i in n + 1) f.push(0);
      /* 0th and 1st number of the series are 0 and 1*/
      f[0] = 0;
      f[1] = 1;
      for (let i = 2; i <= n; i++) {
          /* Add the previous 2 numbers in the series and store it */
          f[i] = f[i-1] + f[i-2];
      }
      return f[n];
  }
};

console.log(yourself_.fibonacci(9));