//Functions is also a data type

//1) Function in Statement
// fun(1,2); //works because of hoisting
// function fun(x,y){
//     return x;
// }

//-------------------------------

//2) assign function to variable
//anonymous function

// myFun(1,2); //error created as a variable not a function yet
// var myFun=function(x,y){
//     return x+y;
// }
// myFun(1,2); //3

//-------------------------------


//3) function in array
// var arr =[1,2,3,function(){//anonymous function
// console.log("Hello World");},fun]
// console.log(arr[4]); //prints the function definition of fun
// console.log(arr[4](1,2)); //1
// arr[3](); //Hello World

//-------------------------------

//4) return function from function
// function outerfun(x,y){
//     function innerfunction(w,z){
//         return x+y+w+z;
//     }
//     return innerfunction; //hena rg3t pointer to function

// }

// var result = outerfun(1,2); 
// console.log(result); // will print the function body of innerfunction
// var result2 = outerfun(100,100) ;

//ay function by7slha execution al mfrod ttmsa7 mn l memory , hwa by7tfz b nos5a b kol haga feha 

// function outerfun(){
//     var arr=[]; //arr =[f,f,f] bydef feha lma yd5ol l for loop
//     for(let i=0;i<3;i++){
//         arr.push(function(){
//             console.log(i);
//     }
//     );}
//     return arr;
// }
// var res=outerfun();
// res[0](); //3
// res[1](); //3
// res[2](); //3
//3 functions created but all share the same closure that has i=3 at the end of the loop

//-------------------------------

//immediate invoked function expression IIFE pattern
//el ; mohema ablha 
// (function(){ //anonymous function created and executed once
//     console.log("Hello World");
// })();

//----------------------------------

//Closure with IIFE
/* tracing the code
arr=[]
i=0 i=1 i=2 i=3 break;
anonymous function execution(i=0=j)=> return innerfunction1
anonymous function execution(i=1=j)=> return innerfunction2
anonymous function execution(i=2=j)=> return innerfunction3
arr=[innerfunction1,innerfunction2,innerfunction3]
*/

// function outerfun(){ //different closure for each function
//     var arr=[]; //arr =[f,f,f] bydef feha lma yd5ol l for loop
//     for(let i=0;i<3;i++){
//         arr.push((function(j){ //anonymous function execution
//             return function(){
//                 console.log(j);
//             }
//     }
//     )(i));
// }
//     return arr;
// }
// var res=outerfun();
// res[0](); //0
// res[1](); //1
// res[2](); //2

// var arr =[1,2,3,4,5,6];
// console.log(arr.join("-")); //1-2-3-4-5-6 
// var str = "hello";
//console.log(str.join("-")); //error as str is not an array join m7taga array

//apply , call , bind
// console.log([].join.apply(str,["-"])); //bstelef l function w a3mlha execute 3la hagaa tania
// console.log(arr.reverse()); //6,5,4,3,2,1
//console.log([].reverse.apply(str)); //error as str cant be reversed 

