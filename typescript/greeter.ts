{
    function greeter(person: string) {
        return "Hello, " + person;
    }

    let user1 = "Jane User";

    document.body.innerHTML = greeter(user1);
}

{
    interface Person {
        firstName: string;
        lastName: string;
    }

    function greeter2(person: Person) {
        return "Hello, " + person.firstName + " " + person.lastName;
    }

    let user = { firstName: "Jane", lastName: "User" };

    document.body.innerHTML = greeter2(user)
}

{
    class Student {
        fullName: string;
        constructor(public firstName, public middleInitial, public lastName) {
            this.fullName = firstName + " " + middleInitial + " " + lastName;
        }
    }
    
    interface Person {
        firstName: string;
        lastName: string;
    }
    
    function greeter3(person : Person) {
        return "Hello, " + person.firstName + " " + person.lastName;
    }
    
    let user = new Student("Jane", "M.", "User");
    
    document.body.innerHTML = greeter3(user);
}