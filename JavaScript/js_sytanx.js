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

function displayDate() {
    document.getElementById('now').innerHTML=Date();
}

function add_str() {
    var a = 'hello';
    var b = 'world';

    document.write(a + b);
}

// 表单验证1
function validateForm() {
    var x = document.forms["form1"]["name"].value;
    if (x == null || x == "") {
        alert("需要输入名字。");
        return false;
    }
}

// 表单验证2
function validateForm2() {
    var x, text;

    // 获取 id="numb" 的值
    x = document.getElementById("numb").value;

    // 如果输入的值 x 不是数字或者小于 1 或者大于 10，则提示错误 Not a Number or less than one or greater than 10
    if (isNaN(x) || x < 1 || x > 10) {
        text = "输入错误";
    } else {
        text = "输入正确";
    }
    document.getElementById("demo").innerHTML = text;
}