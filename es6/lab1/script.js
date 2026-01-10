// function User(){
    // var Obj={
        // getSetGen : function(){
            // this.setName = function (value) {
            //     this.name=value;
            // };
            // this.getName= function(){
            //     return this.name;
            // };
            // this.setAge = function (value) {
            //     this.age=value;
            // };
            // this.getAge =function(){
            //     return this.age;
            // }
            // this.setid = function(value){
            //     this.id=value;
            // }
            // this.getid=function(){
            //     return this.id;
            // }
            // this.setLocation = function(value){
            //     this.location = value;
            // }
            // this.getlocation = function(){
            //     return this.location;
            // }
        // }
//------------------------------------------------------------
// var obj = {
//     getSetGen: function () {
//         for (let name in this) {              
//             if (typeof this[name] === "function") continue; 
//             let cap = name.charAt(0).toUpperCase() + name.slice(1);
//             this[`get${cap}`] = function () {
//                 return this[name];
//             };

//             this[`set${cap}`] = function (x) {
//                 this[name] = x;
//             };
//         }
//     }
// };

// var data = {
//     id: "100",
//     location: "saba basha",
//     addr: "1234str.",
//     getSetGen: obj.getSetGen
// };

// data.getSetGen();
// console.log(data.getId());          
// data.setLocation("ibrahmia");
// console.log(data.getLocation());    
// //------------------------------
// var user = {
//     name: "Marina",
//     age: 23
// };
// obj.getSetGen.call(user);
// console.log(user.getName());        
// user.setAge(20);
// console.log(user.getAge());   

//---------------------------------------------------------------

function NumberList(start, end, step) {
    var list = []; 
    function fillList() {
        for (var i = start; i <= end; i += step) {
            list.push(i);
        }
    }
    fillList();
    this.getList = function() {
        return list.slice();  //slice => btraga3 copy 
    };
    this.append = function(value) {     //fel akher khales
        if (list.indexOf(value) !== -1) throw "Duplicate value is not allowed!";
        var last = list[list.length - 1];
        if (value !== last + step) throw "Value is not sequential!";
        list.push(value);
    };
    this.prepend = function(value) {  //azawed fl awel
        if (list.indexOf(value) !== -1) throw "Duplicate value is not allowed!";
        var first = list[0];
        if (value !== first - step) throw "Value is not sequential!";
        list.unshift(value);
    };
    this.popValue = function() {
        if (list.length === 0) throw "List is empty!";
        return list.pop();
    };
    this.dequeue = function() {
        if (list.length === 0) throw "List is empty!";
        return list.shift();
    };
    this.toString = function() {
        return "NumberList: " + list.join(", ");
    };
}

var seq = new NumberList(1, 5, 1);
console.log(seq.toString());

seq.append(6);
seq.prepend(0);
console.log(seq.toString()); 

seq.popValue();
seq.dequeue();
console.log(seq.toString()); 
seq.append(5);
//seq.append(-5);
