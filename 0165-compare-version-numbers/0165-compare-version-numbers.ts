function compareVersion(version1: string, version2: string): number {
    for(let i:number =0, j:number =0; i<version1.length || j<version2.length; i++,j++){
        let num1:number=0, num2:number=0;
        while(i<version1.length && version1[i]!=='.') num1=10*num1+(Number(version1[i++]));
        while(j<version2.length && version2[j]!=='.') num2=10*num2+(Number(version2[j++]));
        if(num1<num2) return -1;
        if(num1>num2) return 1;
    }
    return 0;
};