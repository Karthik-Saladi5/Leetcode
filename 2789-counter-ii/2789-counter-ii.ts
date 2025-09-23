type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(n: number): Counter {
    let c: number = 0;
    let obj: Counter = {
        increment: () => {
            c++;
            return n + c;
        },
        decrement: () => {
            c--;
            return n + c;
        },
        reset: () => {
            c = 0;
            return n;
        }
    }
    return obj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */