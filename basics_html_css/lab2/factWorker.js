onmessage = function (e) {
  let n = e.data;
  let fact = 1;

  for (let i = 1; i <= n; i++) {
    fact *= i;
  }

  postMessage(fact);
};
