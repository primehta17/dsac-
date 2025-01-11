//[5,4,4,2,1,2,1,5] => 4 //leetcode =>136
let single=[5,5,4,4,3,2,1,2,1];
    function singleNum(array){
    let answer ='';
        for(let i=0;i<array.length;i++){//bitwise xor
            answer ^= array[i]; //it cancel out the duplicate
            // console.log("answer",answer);
        }
    return answer;
    }
console.log(singleNum(single));
//n^n=0 (same number cancel out) n^0 (it is equal to n(number))

// question no 136 //dyanmic programming question
console.log("kadane theorem/Maximum array");
let a=[1,2,-3,4,5];

function kadane(arr){
    let currArr=0;maxSum=arr[0];
    for(let i=0;i<arr.length;i++){
          currArr+=arr[i];
          maxSum = Math.max(currArr,maxSum)
        if(currArr<0){
            currArr=0;
        }
    }
    return maxSum;
}
console.log(kadane(a))

//169 majority element(moore's voting algorithm)