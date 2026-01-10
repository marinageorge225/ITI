/*
error object
functions
objects
*/

// document.getElementById('btn').onclick = function() {
// //syntax error
// console.log('msg'   //=>syntex error
// }

//document.getElementById('btn2').onclick = function() {
//range error
// "hello".repeat(-5); //=>RangeError 0 to above
//-----------------------
// var y =1.2;
// console.log(y.toFixed(200)); //=>RangeError 0 to 100
// }


// document.getElementById('btn3').onclick = function() {
//     //console.log(x); //=>ReferenceError x is not defined
//     w=1; //mosh haytweged 8er lma al function tetnada
// }

// document.getElementById('btn4').addEventListener('click', function() {
// console.logg('msg'); //=>TypeError console.logg is not a function
// });

// var err= new Error('wrong parameters'); //create error object
// function add(x,y){
//     if(isFinite(x)&&isFinite(y)){ //check if parameters are number or can be converted to number
//     return x+y;}
//     else{
//         // throw 'wrong parameters'
//         throw err;
//     }
// }
// console.log(add(1,2)); //3  //3
// console.log(add("str1",'str2')) //str1str2 //error
// console.log(add('str',5)) //str5 //error
// console.log(add(1)); //NaN 1+undefined=NaN //error 
// console.log(add(1,null)); //1 null will be 0 //1
// console.log(add({},{})); //[object Object][object Object] //error
// console.log(add(1,NaN)); //NaN //error

//------------------------------------------------

//lw 3nde try , catch lw 7sl error fl try hayro7 3l catch 3ltol w ykml b3dha ,
// lw ma7slsh error hykml 3ady b3d el try w msh hyro7 3l catch
//lw 7sl error fl catch haywa2f l code khales
//al a7sn ast5dm l try , catch fl hagat l kbera aly zay api,get database 
try{

}
catch(err){
    console.log('error happened '+ err.message);
    console.log(err.name);
    if(err instanceof RangeError){
        console.log('range error');
    }
    else if(err instanceof ReferenceError){
        console.log('reference error');
    }
    else if(err instanceof TypeError){
        console.log('type error');
    }
    else{
        console.log(e.message);
    }
}