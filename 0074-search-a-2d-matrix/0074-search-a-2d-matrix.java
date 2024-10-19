class Solution {
    private boolean binarySearch(int[][] matrix,int target,int row,int cStart,int cEnd){
        while(cStart<=cEnd){
            int mid=cStart+(cEnd-cStart)/2;
            if(matrix[row][mid]==target) return true;
            if(matrix[row][mid]<target) cStart=mid+1;
            else cEnd=mid-1;
        }
        return false;
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        int m=matrix.length;
        int n=matrix[0].length;
        if(m==1) return binarySearch(matrix,target,0,0,n-1);
        int rStart=0,rEnd=m-1;
        int cMid=(n-1)/2;
        while(rStart<(rEnd-1)){
            int mid= rStart+(rEnd-rStart)/2;
            if(matrix[mid][cMid]==target) return true;
            else if(matrix[mid][cMid]>target) rEnd=mid;
            else rStart=mid;
        }
        if(matrix[rStart][cMid]==target || matrix[rStart+1][cMid]==target) return true;
        if(cMid-1>=0 && target<=matrix[rStart][cMid-1])
            return binarySearch(matrix,target,rStart,0,cMid-1);
        if(cMid+1<n && target>=matrix[rStart][cMid+1] && target<=matrix[rStart][n-1])
            return binarySearch(matrix,target,rStart,cMid+1,n-1);
        // System.out.println("reached"+matrix[rStart][cMid]);
        if(cMid-1>=0 && target<=matrix[rStart+1][cMid-1]) 
            return binarySearch(matrix,target,rStart+1,0,cMid-1);
        if(cMid+1<n && target>=matrix[rStart+1][cMid+1] && target<=matrix[rStart+1][n-1])
            return binarySearch(matrix,target,rStart+1,cMid+1,n-1);
        return false;
    }
}