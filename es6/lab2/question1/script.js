function shape(){ //abstract 
     if (this.constructor === shape) {
        throw "Cannot create object from abstract class shape";
    }

};

shape.prototype.area = function(){
    throw "No Area in Shape"
}
shape.prototype.perimeter = function(){
    throw "No perimeter in Shape"
}

//------------------------------------------------

function rectangle(l,w){
    shape.call(this);
    this.l=l;
    this.w=w;   
};
rectangle.prototype = Object.create(shape.prototype);
rectangle.prototype.constructor = rectangle;
rectangle.prototype.area = function(){
    return this.w*this.l;
}
rectangle.prototype.perimeter = function(){
    return (2*(this.l+this.w));
}

rectangle.prototype.toString = function () {
    return "Rectangle: length=" + this.l +
        ", width=" + this.w +
        ", area=" + this.area() +
        ", perimeter=" + this.perimeter();
};

rectangle.prototype.valueOf = function () {
    return this.area();
};
//------------------------------------------------------

function square(s){
    rectangle.call(this,s,s);
    square.count++;
}
square.count =0; //static 
square.staticFun = function(){ //static function
    return this.count;
}
square.prototype = Object.create(rectangle.prototype);
square.prototype.constructor = square;

square.prototype.toString = function () {
    return "Square: side=" + this.l +
        ", area=" + this.area() +
        ", perimeter=" + this.perimeter();
};

var r1 = new rectangle(10, 6); 
var r2 = new rectangle(10, 2); 

console.log(r1.toString());
console.log(r2.toString());

console.log(r1 + r2);  
console.log(r1 - r2); 

var s1 = new square(5);
var s2 = new square(10);
console.log(s1.toString());
console.log(s2.toString());

console.log(square.staticFun()); 

var s3=new shape();


// Bonus:
// rectangle.created = false;
// function rectangle(l,w){
//     if (rectangle.created) {
//         throw "Only one Rectangle object allowed";
//     }
//     rectangle.created = true;

//     shape.call(this);
//     this.l=l;
//     this.w=w;   
// };
// square.created = false;
// function square(s){
//     if (square.created) {
//         throw "Only one Square object allowed";
//     }
//     square.created = true;

//     rectangle.call(this,s,s);
//     square.count++;
// }
// var r1 = new rectangle(10,6);
//var r2 = new rectangle(5,5); 

// var s1 = new square(4);
// var s2 = new square(6); 





