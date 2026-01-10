/*
default  parameters
map,set
iterator
symbol
generator
*/

// function fun(x=1,y=2){ //initial values
//     return x+y
// }
// console.log(fun()) //3
// console.log(fun(2)) //4
// console.log(fun(2,3)) //5
// console.log(fun(undefined,3)) //4
// console.log(fun(null,3)) //null =>0
//------------------------------------------------------

// function fun(x=1,y=2,obj ={nm:'ahmed',age:25}){ //initial values
//     return `${x+y} name ${obj.nm}  and age ${obj.age}`
// }
// console.log(fun()) //3
// console.log(fun(2)) //4
// console.log(fun(2,3)) //5
// console.log(fun(undefined,3)) //4
// console.log(fun(null,3)) //null =>0
// console.log(fun(1,2,{nm:'ahmed',age:20}))
// console.log(fun(1,2,{nm:'ahmed'})) 
// //fel object b replace al object kolo bl object kolo mosh ba7ot attribute l default ly fo2
// console.log(fun(1,2,{}))
// console.log(fun(1,2,"string"))
// console.log(fun(1,2,5))
// console.log(fun(1,2)) //error
// console.log(fun(1,2,null)) //error

//-----------------------------------------------

// function fun(x=1,y=2,obj){
//     var defaultObject= {nm:'mohamed',age:25}
//     var result = {...defaultObject,...obj} //lw ana b3at yab2a m3ya ly ana b3to fl arguments lw matbat3tetsh ya5od l default value
//     return `${x+y} name ${result.nm}  and age ${result.age}`
// }
// console.log(fun()) //3
// console.log(fun(2)) //4
// console.log(fun(2,3)) //5
// console.log(fun(undefined,3)) //4
// console.log(fun(null,3)) //null =>0
//onsole.log(fun(1,2,{nm:'ahmed',age:20}))
// console.log(fun(1,2,{nm:'ahmed'})) 
// console.log(fun(1,2,{}))
// console.log(fun(1,2,"string"))
// console.log(fun(1,2,5))
// console.log(fun(1,2)) //error
// console.log(fun(1,2,null)) //error
//----------------------------------------------
//set -->unique values
// var myset = new Set()
// myset.add(1)
// myset.add("str")
// myset.add([1,2,3])
// myset.add({})
// console.log(myset.has(1))
// console.log(myset.keys()) //return iterator
// console.log(myset.values()) //return iterator
// //if usinng for loop it will print undefined
// for(var elem of myset){ //iterate 3l values direct not keys
//     console.log(elem)
// }
// console.log(myset.clear())

//------------------------------------
// Map-->KeyboardEvent,Value
//unique keys
// var mymap = new Map()
// mymap.set(1,"hello")
// mymap.set('test',true)
// mymap.set([1,2,3],'hiiii')
// console.log(mymap.get(1)) //hello
// console.log(mymap.get([1,2,3])) //undefined

// so make 
// var arr=[1,2,3]
// mymap.set(arr,'hi')
// console.log(mymap.get(arr)) //hi
// mymap.delete(1)
// console.log(mymap)
// console.log(mymap.has(1))

// for(var elem of mymap){
//     console.log(elem)
// }
//-----------------------------------------
//for of is iterator for set,map
//but not used with objects
// var obj={
//     username :"Marina", //data
//     address:"123st",
//     display:function(){},
//     [Symbol.Iterator]:function(){ //function bt iterate 3l values b pointer w yrga3lk l current values
//         var objKeys=Objects.keys(obj) //'username','address,display (byrag3 kol l properties azkant data aw function)
//         var counter =0
//         return{
//             next:function(){ //next : return object(value,done)
//                 if(counter>=objKeys.length){
//                     return {value:undefined,done:true}//return 1 property then the next one
//                 }else{
//                 return{value:objKeys[counter++],done:false}
                
//             }
//         }

//     }
// }
//-----------------------------------
// var obj2 = {
//     nm:'xyz',
//     test:'abc'
// }
// //enumerable keys : masmo7 a3ml iteration 3leha
// for(var elem in obj2){
//     console.log(elem)
// }
// //data descriptor
// Object.defineProperty(obj2,'address',{
//     value:"1,2,3str",
//     writable:true, // yanf3 a3ml override 3leha wla la
//     enumerable:true,
//     conigurable:true
// })
// console.log(obj2)
// for(var elem in obj2){
//     console.log(elem)
// }
//--------------------------------------
//Symbol 
// var x = Symbol()
// var y = Symbol()
// var xx = Symbol.for('test')
// var yy =Symbol.for('test')
//kol ma b create symbol hayt3ml b new id , not enumerable

// var obj={
//     username :'xyz',
//     data:'test',
//     [Symbol('new data')]:'address'
// } // lw 3mlt for loop hyrag3 l username , data mosh l symbol 
//l symbol ka2no private data bwslo lma a3mlo variable
// var myprop = Symbol('new data') //unique variables "static properties"
// var obj={
//     username :'xyz',
//     data:'test',
//     [myprop]:'address',
//     [Symbol.for('hi')]:'nnnnnnn'
// }

// var str = "new string test"
// console.log(str.replace(' ','_'))//hyshel awel space w y7ot _
// console.log(str.replace(/ /g,'_'));

// String.prototype.replace=function(obj,char){
//     //obj[Symbol.replace](this,char) //main implementation
//     return 'hiiii......'
// }//maynf3sh a3dl fl function al aslia lw 3aiza a8ayr l implementation bs mmkn a inherit menha
// console.log(str.replace(' ','_')) //hi
// console.log(str.replace(/ /g,'_'));//hi

// var obj={
//     [Symbol.replace]:function(){
//         return 'hiiiiiiiiiii'
//     }
// }
// console.log(str.replace(' ','_')) //hi
// console.log(str.replace(/ /g,'_'));//hi
// console.log(str.replace(obj))











