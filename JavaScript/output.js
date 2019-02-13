function window_alert(){
    window.alert(5+6);
}

function write(){
    document.write(Date());
}

function operate_html(id_name){
    document.getElementById(id_name).innerHTML = "我被修改了啊！";
}

function write_on_console(){
    a = 5;
    b = 6;
    console.log("a =", a, "b=", b, "c=", a+b);
}