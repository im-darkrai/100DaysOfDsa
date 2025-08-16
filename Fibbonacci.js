const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter n: ", function(n) {
  n = parseInt(n);

  let arr = [];
  arr[0] = 0;
  arr[1] = 1;

  for (let i = 2; i < n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  console.log("Fibonacci Series:", arr.join(" "));

  rl.close();
});
