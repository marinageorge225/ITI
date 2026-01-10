// class User{
//     usrnm
//     age
//     constructor(nm,age){
//         if(this.constructor ==User){ //abstract class
//             throw 'Abstract class'
//         }
//         this.usrnm=nm
//         this.age=age
//     }
//     toString(){
//         return `this is ${this.usrnm}`
//     }
// }
// class Employee extends User{ //inheritance
//     // usrnm = 'ahmed'
//         id
//         #address
    
//     constructor(nm='',age=0,id=0){
//         super(nm,age)
//         Employee.counter++;
//         // this.nm=nm;
//         // this.age=age;
//         this.id=id;
//         this.#address="123st"
//         this.fun=function(){}
//         Object.defineProperties(this,'id',{
//             value: id,
//             writable: false,
//             enumerable: true
//         })
//     }
//     display(){
//         return  `this is ${this.username} ${this.#address}`
//     }
//     //getter and setters as a properties 
//     get Address(){
//         return this.#address
//     }
//     set Address(val){
//         this.#address=val
//     }

//     //static:
//     static counter =0;
//     static newfun(obj){
//         //return this.counter; //this is the class name
//         return `${obj.usrnm}`
//     }
// }
// // Employee.prototype.testfun=function{
// //     return this.#address //will cause error because prototype dont have access on private members
// // }

// var emp=new Employee("Marina",23,1)
// var emp2=new Employee()

//------------------------------------
//Generators : bt7awl l function l parts w t2ol hay3ml execute l anho part w anho line

// function *fun(){ 
//     var x=1;
//     var y =2;
//     var z = x+y
//     yield z //hatrg3 l z w ka2no kda khls awl part execution
//     console.log(z)
//     var arr =[1,2,3,4]
//     console.log("2nd step")
//     yield arr
//     arr.push(z)
//     console.log('any msg')
//     yield 2
//     console.log('done');
    
//     // return z
// }
// // var gen = fun()
// for(var elem of fun()){
//     console.log(`values = ${elem}`)
// }
//-----------------------------------
// function* evenGen(arr) {
//   for (let item of arr) {
//     if (item % 2 === 0) {
//       yield item;
//     }
//   }
// }
// var gen = evenGen([1,2,3,4,5,6,7,8,9,10])
// console.log(gen.next())
// console.log(gen.next())
// console.log(gen.next())
// console.log(gen.next())
// console.log(gen.next())
// console.log(gen.next())
// console.log(gen.next())
//---------------------------------------
// Modules:
// console.log(add(1,2))
// console.log(sub(3,2))
// import * as myModule from "./lib.js";
// console.log(myModule.add(2,3))
// console.log(myModule.sub(2,3))
// import {add as myAdd} from "./lib.js"; //import add function only
// console.log(myAdd(2,3))
//----------------------------------------------
//Proxy
// var obj = {
//     x:20,
//     y:10
// }
// obj.z =1
// console.log(obj.w) //undefined
// obj.x=2
// var handler = { //reflect api
//   get(target, prop) {
//     if (target.hasOwnProperty(prop)) {
//       return target[prop];
//     } else {
//       throw 'undefined property';
//     }
//   },
//   set(target,prop,value){
//     if(target.hasOwnProperty(prop)){
//         if(value>=10 && valuelue<=30){
//             target[prop] = value
//         }else{
//             throw 'wrong value'
//         }

//     }else{
//           throw 'undefined property';
//     }
//   }
// };

//  var myProxy = new Proxy(obj,handler) // l proxy aly hayrbot l obj bel handler 
//  console.log(myProxy.x)
//  console.log(myProxy.w); //error not undefined
 
//---------------------------------------------




