let mat = [[1,2,3],
              [4,5,6],
              [7,8,9]];

//Linear Search
var linearsearch = function(mat) {
    let n=mat.length;let target=15;
    for(let i=0;i<n;i++){
        for(let j=0;j<n;j++){
            if(mat[i][j]=== target){
                return true;
            }
        }
    }
    return false;
};
console.log("linear search",linearsearch(mat));


//Linear Search Index
var linearsearchindex = function(mat) {
    let n=mat.length;let target=6;let ans=[];
    for(let i=0;i<n;i++){
        for(let j=0;j<n;j++){
            if(mat[i][j]=== target){
                ans.push(i);
                ans.push(j);
                return ans;
            }
        }
    }
    return -1;
};
console.log("linear search index",linearsearchindex(mat));



//Maximum Rows Sum
var maximumRowsSum = function(mat) {
    let n=mat.length;//for rows
    // let col=mat[i].length;//for column
    let maxSum=mat[0][0];
    for(let i=0;i<n;i++){
        let rowSum=0;
        for(let j=0;j<n;j++){//cols
            rowSum += mat[i][j];
            maxSum = Math.max(maxSum,rowSum);
        }
    }
   return maxSum;
};
console.log("Maximum Rows Sum",maximumRowsSum(mat));

//Maximum Rows Sum
var maximumColsSum = function(mat) {
    let n=mat.length;//for rows
    // let col=mat[i].length;//for column
    let maxSum=mat[0][0];
    for(let i=0;i<n;i++){
        let rowSum=0;
        for(let j=0;j<n;j++){//cols
            rowSum += mat[j][i];
            maxSum = Math.max(maxSum,rowSum);
        }
    }
   return maxSum;
};
console.log("Maximum Cols Sum",maximumColsSum(mat));


//diagonal sums

var diagonalSum = function(mat) {
    let n=mat.length;let totalSum=0;
    console.log("row length",n);
    for(let i=0;i<n;i++){
        for(let j=0;j<n;j++){
            if(i==j){
                totalSum += mat[i][j];
            }else if(j==n-1-i){
                totalSum += mat[i][j];
            }
        }
    }
    return totalSum;
};
console.log("diagonal sum",diagonalSum(mat));


//optimal sums diagonal

var diagonalSumOpt = function(mat){
    let n=mat.length;let diagonalSum=0;
    for(let i=0;i<n;i++){
       diagonalSum += mat[i][i];
       if(i != (n-1-i)){
        diagonalSum += mat[i][n-1-i];
       }
    }
    return diagonalSum;

}
console.log("diagoanl sum optimal", diagonalSumOpt(mat));