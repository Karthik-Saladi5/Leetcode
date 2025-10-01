function numWaterBottles(numBottles: number, numExchange: number): number {
    let count:number=0;
    while(numBottles>=numExchange){
        count+=numExchange;
        numBottles-=numExchange;
        numBottles+=1;
    }
    return count+numBottles;
};