function vehicle(speed, color){
    this.speed = speed;
    this.color = color;
}

vehicle.prototype.turnLeft = function(){
    console.log("Vehicle Turned Left");
};
vehicle.prototype.turnRight = function(){
    console.log("Vehicle Turned Right");
};
vehicle.prototype.start = function(){
    console.log("Vehicle Started");
};
vehicle.prototype.stop = function(){
    console.log("Vehicle Stopped");
};
vehicle.prototype.goBackward = function(){
    console.log("Vehicle Go Backward");
};
vehicle.prototype.goForward = function(){
    console.log("Vehicle Go Forward");
};

//=================================
function bicycle(speed, color){
    vehicle.call(this, speed, color);
}

bicycle.prototype = Object.create(vehicle.prototype);
bicycle.prototype.constructor = bicycle;

bicycle.prototype.ringBell = function(){
    console.log("Bicycle Ring Bell");
};

//=================================
function motorvehicle(speed, color, sizeofengine, licenseplate){
    vehicle.call(this, speed, color);
    this.sizeofengine = sizeofengine;
    this.licenseplate = licenseplate;
}

motorvehicle.prototype = Object.create(vehicle.prototype);
motorvehicle.prototype.constructor = motorvehicle;

motorvehicle.prototype.getsizeofengine = function(){
    console.log("Motor vehicle get size of engine");
    return this.sizeofengine;
};
motorvehicle.prototype.getlicenseplate = function(){
    console.log("Motor vehicle get license plate");
    return this.licenseplate;
};

//=================================
function dumptruck(speed, color, sizeofengine, licenseplate, loadcapacity, numwheels, weight){
    motorvehicle.call(this, speed, color, sizeofengine, licenseplate);
    this.loadcapacity = loadcapacity;
    this.numwheels = numwheels;
    this.weight = weight;
}

dumptruck.prototype = Object.create(motorvehicle.prototype);
dumptruck.prototype.constructor = dumptruck;

dumptruck.prototype.lowerload = function(){
    console.log("DumpTruck lowered load");
};
dumptruck.prototype.raiseload = function(){
    console.log("DumpTruck raised load");
};

//==============================
function car(speed, color, sizeofengine, licenseplate, numdoors, numwheels, weight){
    motorvehicle.call(this, speed, color, sizeofengine, licenseplate);
    this.numdoors = numdoors;
    this.numwheels = numwheels;
    this.weight = weight;
}

car.prototype = Object.create(motorvehicle.prototype);
car.prototype.constructor = car;

car.prototype.switchOnAirCon = function(){
    console.log("Car switched on air con");
};
car.prototype.getNumberOfDoors = function(){
    console.log("Car gets number of doors");
    return this.numdoors;
};


//-----------------------------------------

function dumptruck(speed,color,sizeofengine,licenseplate,loadcapacity,numwheels,wight){
    motorvehicle.call(this,speed,color,sizeofengine,licenseplate);
    this.loadcapacity=loadcapacity;
    this.numwheels=numwheels;
    this.wight=wight;

}
dumptruck.prototype=Object.create(motorvehicle.prototype);
dumptruck.prototype.constructor = dumptruck;

dumptruck.prototype.lowerload = function(){
    console.log("DumpTruch lower loaded");
}
dumptruck.prototype.raiseload = function(){
    console.log("Dump Truck Raise loaded");
}
//--------------------------------


var b = new bicycle(20, "red");
b.start();
b.ringBell();

var c = new car(120, "black", 2000, "ABC-123", 4, 4, 1500);
c.start();
console.log(c.getNumberOfDoors());
c.switchOnAirCon();

var d = new dumptruck(80, "blue", 5000, "XYZ-789", 10000, 6, 7000);
d.start();
d.lowerload();
console.log(d.numwheels);

var v = new vehicle();
v.start();
v.turnRight();
v.stop();





