function createHelloWorld() {
    let temp=(...args)=>{
        return "Hello World";
    }
    return temp;
};
/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */