function createHelloWorld() {
    return function() {
        return "Hello World";
    };
}

const f1 = createHelloWorld();
console.log(f1()); 