{
    function greeter(person) {
        return "Hello, " + person;
    }
    var user1 = "Jane User";
    document.body.innerHTML = greeter(user1);
}
{
    function greeter2(person) {
        return "Hello, " + person.firstName + " " + person.lastName;
    }
    var user = { firstName: "Jane", lastName: "User" };
    document.body.innerHTML = greeter2(user);
}
{
    var Student = /** @class */ (function () {
        function Student(firstName, middleInitial, lastName) {
            this.firstName = firstName;
            this.middleInitial = middleInitial;
            this.lastName = lastName;
            this.fullName = firstName + " " + middleInitial + " " + lastName;
        }
        return Student;
    }());
    function greeter3(person) {
        return "Hello, " + person.firstName + " " + person.lastName;
    }
    var user = new Student("Jane", "M.", "User");
    document.body.innerHTML = greeter3(user);
}
