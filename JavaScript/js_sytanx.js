function var_array() {
    var cars = new Array();
    cars[0] = "Saab";
    cars[1] = "Volvo";
    cars[2] = "BMW";

    var cars=new Array("Saab","Volvo","BMW");

    var cars=["Saab","Volvo","BMW"];

    for (i=0;i<cars.length;i++){
        document.write(cars[i] + "<br>");
    }
}

function var_object() {
    var car = {type:"Fiat", model:500, color:"white"};

    document.write("type=" + car.type + "<br>");
    document.write("model=" + car["model"] + "<br>");
    document.write("color=" + car.color + "<br>");

    car.now = function() {
        return Date();
    }

    document.write(car.now())
}