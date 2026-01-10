/*
Block scope means a variable is accessible only inside the { } block where it is declared
(such as if, for, while, or functions).
{
  let x = 10;
  const y = 20;
}
// x and y are NOT accessible here
Variables declared with let and const ARE hoisted,
but they are not initialized.
They exist in a Temporal Dead Zone (TDZ) until their declaration line is executed.
Accessing them before declaration causes an error.

* Hoisting allows variables and functions to be used before they are declared in the code.
(But this depends on how they are declared.)

*/
//variables: let , const
// console.log(x) //undefined
// var x=1;
// window.x => true

// console.log(y) 
// let y=1; //let make hoisting but not initialization
// by7otha f temporary dead zone(TDZ)
// window.y=> undefined

// var x=2; //true
// let y=2; //no 
// y=2; //true

// console.log(i)//undefined
// for(var i =0;i<3;i++){
//     console.log(i)
// }
// console.log(i);//3
//-------------------------------------

//console.log(i)//refrence error
// for(let i =0;i<3;i++){ //block scope
//     console.log(i)
// }
//console.log(i);//refrence error
//--------------------------------------

// function outerFun(){
//     var arr=[];
//     for(var i=0;i<3;i++){
//         arr.push(function(j){
//             return function(){
//                 console.log(i)
//             }
            
//         })
//     }
//     return arr;
// }
// var result=outerFun()//[f,f,f]
//----------------------------------------------
// function outerFun(){
//     var arr=[];
//     for(let i=0;i<3;i++){
//         arr.push(function(){
//                 console.log(i)
            
//         })
//     }
//     return arr;
// }
// var result=outerFun()
//------------------------------------------------
// let data=2;
// function func(){
//     let data="new fun" //local
//     var val="my value" //local
// }
// func()
// console.log(val)
// console.log(data) 
//----------------------------------------------
// {
//     var test ='scoope' //global scoope
//     let w ='scoope' //b;ock scoope
// }
//-------------------------------
// const myobj; //wrong as it needs initialization at the same time
// const myobj="Marina"
// myobj="mina" //wrong cant be reassign 
//same scoope as let (TDZ)
//----------------------------------
// function fun(x,y){
//     return x+y
// }
// var myfun = (x,y)=>x*y //arrow function

// var obj = {
//     username : "ahmed",
//     display:function(){
        // setTimeout(function(){
        //     alert(this.username)
        // },1000) //undefined 

//         setTimeout(()=>{ //ahmed lexecal binding
//             alert(this.username)
//         },1000)
//     }
// }
// obj.display() //undefined 3shan mosh shayfa l username
//--------------------------------------
/*
Rest parameter collects (gathers) the remaining arguments passed to a function into a real array.
Used only in function definition
Must be the last parameter
Creates a real Array (unlike arguments)
-----------------
spread Operator (...)
The spread operator expands an iterable (array, string, object) into individual elements.
*/
// function fun(x,y,z,...w){ // l w dy hta5od lw ar7at arguments zyada ka array
//     console.log(arguments) //rest parameters
//     return x+y+z
// }
// console.log(fun(1,2,3,4,5,6)) 

//spread operator
// var arr =[1,2,3]
// var arr2 = [9,8,7,... arr]

// var obj = {
//     usrname : "ahmed",
//     age:20
// }
// var obj2={
//     address :'123str',
//     ...obj
// }
// obj2.usrname="ali";
// function printUserName(firstN , lastN){
//     return 'welcome ${firstN} ${lastN}'
// }
// var fullname= ['ahmed','nour']
// printUserName(...fullname) //spread
//spread operator dont make deep copy
//deep copy vs shallow copy 

/*
Destructuring Assignment (ES6)
Destructuring allows unpacking values from arrays or properties from objects into variables easily.
Array Destructuring
let users = ["ali", "nour", "kareem"];
let [a, b, c] = users;

console.log(a, b, c);
Values are assigned by position (order matters)

a = "ali"

b = "nour"

c = "kareem"
*/