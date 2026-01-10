//Question1:
// function fun(obj = {}) {
//   const defaultObject = {courseName: "ES6",courseDuration: "3days",courseOwner: "JavaScript"};

//   const allowedKeys = Object.keys(defaultObject);
//   for (let key in obj) {
//     if (!allowedKeys.includes(key)) {
//       throw new Error(`Invalid property`);
//     } }
//   const result = { ...defaultObject, ...obj };
//   return `courseName ${result.courseName} , courseDuration ${result.courseDuration} , courseOwner ${result.courseOwner}`;
// }
// console.log(fun({ courseName: "C++" }));
// console.log(fun({courseName: "Data Structures",courseDuration: "5days",courseOwner: "datastructures"}));
// console.log(fun())
// console.log(fun({hours:200}))

//Question2:
// function* fibonacci(n) {
//   let a = 0, b = 1;

//   for (let i = 0; i < n; i++) {
//     yield a;
//     [a, b] = [b, a + b];
//   }
// }
// const gen = fibonacci(5);
// console.log(gen.next()); 
// console.log(gen.next()); 
// console.log(gen.next()); 
// console.log(gen.next());
// console.log(gen.next());
// console.log(gen.next());
// console.log(gen.next());

//------------------------------

// function* fibonacci(max) {
//   let a = 0, b = 1;

//   while (a <= max) {
//     yield a;
//     [a, b] = [b, a + b];
//   }
// }
// for (let num of fibonacci(20)) {
//   console.log(num);
// }
//----------------------------------------------
//Question3:
// const short = {
//   [Symbol.replace](str) {
//     if (str.length > 15) {
//       return str.slice(0, 15) + "…";
//     }
//     return str;
//   }
// };
// let text = "Hello My name is Marina ";

// console.log(text.replace(short));
//-----------------------------------------

//Question4:
// const myObject = {
//   name: "Marina",
//   age: 23,
//   course: "JavaScript",

//   *[Symbol.iterator]() {
//     for (const [key, value] of Object.entries(this)) {
//       yield { key, value };
//     }
//   }
// };
// for (const prop of myObject) {
//   console.log(`${prop.key} = ${prop.value}`);
// }







