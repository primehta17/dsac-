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

//pairsum 0(n)
function pairsums(){
    let arr= [3,70,11,15,7,2],target =10,start=0,end=arr.length-1;
    let answer=[];
   while(start<end){
    let pairsum= arr[start]+arr[end];
   if(pairsum<target){
       start++;
   }else if(pairsum>target){
       end++;
   }else{
       answer.push(start);answer.push(end);
       return answer;
   }
};
}
console.log(pairsums())




//169 majority element(moore's voting algorithm)
function majority(){
    let arr=[1,2,2,1,1,1];
 
    let all = Math.floor(arr.length/2);
     for(let i=0;i<arr.length;i++){
         let count=0;
      for(let j=0;j<arr.length;j++){
          if(arr[i]==arr[j]){
             count++;
          }
      }if(count>all){
          return arr[i]
      }
     }return -1;
 }
 console.log(majority())

 function majorityoptimal(){
    let arr=[1,2,2,1,1,1];
  let sorted=  arr.sort((a,b)=>(a-b));ans=arr[0];
 
    let all = Math.floor(arr.length/2),count=1;
     for(let i=0;i<arr.length;i++){
       if(arr[i]==arr[i-1]){
           count++;
       }else{
           count=1;ans=arr[i];
       }if(count>all){
         return ans;
     };
     }
 }
 console.log(majorityoptimal())

 function mooremajorityvoting(){
    let arr=[1,2,2,1,1,1,2,2,2];let count=0;let ans=0;
  for(let i=0;i<arr.length;i++){
     if(count==0){
         ans= arr[i];
     }
     if(ans==arr[i]){
         count++
     }else{
         count--
     }
  }
  return ans
 }
 console.log(mooremajorityvoting())
 

//pow(x,n)
/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    let binForm=n;
    if(n< 0){
        x=1/x;
        binForm = - binForm;
    }
    let ans=1;
    while(binForm >0){
     if(binForm % 2== 1){
        ans *= x;
    }
    x *= x;
    binForm = Math.trunc(binForm/2);
    }
   return ans;
};            

// 33. Search in Rotated Sorted Array
var search = function(arr, target) {
    let start =0;
    let end = arr.length-1;

    while(start<=end){
        let mid= Math.floor(start+(end-start)/2);
        if(arr[mid]===target){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target <arr[mid]){
           end = mid-1;}
            else{
          start = mid+1
            }
        }else{
             if(arr[mid]<target && target <= arr[end]){
            start = mid+1;
                }else{
            end = mid-1;
            }
        }
    }
    return -1;
};

//852. Peak Index in a Mountain Array

let arr = [0,1,0]

//Output: 1
var peakIndexInMountainArray = function(arr) {
    let start=1;
    let end=arr.length-2;
    while(start<=end){
        let mid=Math.floor(start+(end-start)/2);
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
          start=mid+1;
        }else{
            end=mid-1;
        }
        
       
    } return -1;
};
