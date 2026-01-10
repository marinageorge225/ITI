// var str = "Hello"; 
// console.log([].join.apply(str),['*']);

// console.log([].join.call(str, '-'));

// var fun = [].join.bind(str);
// console.log(fun('*'));

//-------------------------------
// var obj = {
//     username:"ahmed",
//     age:20,
//     display:function(){
//         return this.username;
// }
// };
// var obj2 = {
//     username:"aly",
//     age:25,
//     display:function(){
//         return this.username;
// }
// };
// var obj3 = {
//     username:"marina",
//     age:29,
//     display:function(){
//         return this.username;
// }
// };

// Factory Method
// Constructor Method

// 1)Factory Method
// function Employee(nm,age){
//     return { 
//         empName:nm,
//         empAge:age,
//         display:function(){
//             return this.empName;
//     }   
// }
// }

// var emp=Employee("ahmed",20);
// console.log(emp.display());

// 2)Constructor Method

function Employee(nm,age){  //same as class before es6
    var x=10; //private variable
    this.empName=nm; //public variable
    this.empAge=age; //public variable

    /*
    كل object 
    جديد بياخد نسخة جديدة من الدالة
    استهلاك ذاكرة أكبر ❌
    علشان كده نستخدم prototype
    */  
//     this.display=function(){ 
//         return this.empName;
// } 

this.getvar=function(){ //getter 
    return x;
}
this.setvar=function(val){ //setter
    x=val;
}

// --------------------------------------------

// prototype shared area between all objects
/* الدالة تتخزن مرة واحدة
كل الـ objects يشتركو فيها
أوفر في الذاكرة*/
Employee.prototype.display=function(){
    return this.empName;
}

//------------------------------------------
/* JavaScript مفيهاش Overloading حقيقي
فبنستخدم:
typeof param*/
Employee.prototype.display=function(param){
    //overloading
    if(typeof param == 'number'){
        return this.empAge;
    }
    return this.empName;    
}

Employee.count++;
};

Employee.staticFun = function(){
    return this.count;//static method
}

Employee.count=0; //static variable

var emp=new Employee("ahmed",20);
console.log(emp.display());

var emp2=new Employee("aly",25);
console.log(emp2.display()); 

var emp3=new Employee("marina",29);
console.log(emp3.display());

//----------------------------------------------- 

function User(nm,age,id){ //class user 
    Employee.call(this,nm,age); //inherit Employee constructor empName empAge بيتضافوا للـ User object
    // this.nm=nm;
    // this.age=age;
    this.id=id;
}
//prototype =>display 

//Inherit prototype methods , user needs to inherit display method also
User.prototype =Object.create(Employee.prototype); //inherit Employee prototype =>display employee
User.prototype.constructor = User; //name,age


User.prototype.displayUser = function(){ //function related to user
    return this.id;
}

var u1 = new User("sara",22,1001);
console.log(u1);