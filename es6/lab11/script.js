//Question1:
let m = 100;
let n = 200;
[m, n] = [n, m];
console.log(m);
console.log(n); 

//Question2:
function minmax(...arr) { //rest "gathering numbers into array"
  const min = Math.min(...arr); //spread
  const max = Math.max(...arr); 
  return { min,max};  
}
const numbers = [10, 5, 20, 7, 15];
const { min, max} = minmax(...numbers);
console.log("Min:", min); 
console.log("Max:", max); 

//Question3:
var fruits = ["apple", "strawberry", "banana", "orange", "mango"];

//1:
const checkS = fruits.every(fruit => typeof fruit === "string");
console.log(checkS); 

//2:
const checkA = fruits.some(fruit => fruit.startsWith("a"));
console.log(checkA); 

//3:
const boS = fruits.filter(fruit => fruit.startsWith("b") || fruit.startsWith("s"));
console.log(boS); 

//4:
const likes= fruits.map(fruit => `I like ${fruit}`);
console.log(likes);

//5:
likes.forEach(lfruits => console.log(lfruits));






