function pattern(){
    for(let i=0;i<num;i++){
      for(let j=0;j<num;j++){
        console.log(" ");
      }
      for(let j=0;j<n-i;j++){
        console.log("* ");
      }
      console.log('\n');
    }
}

//kadane 
let array = [1,2,3,-4,5];
let currsum=0, maxSum=-Infinity;

for(let i=0;i<array.length;i++){
    currsum += array[i];
   maxSum = Math.max(currsum,maxSum);
   if(currsum<=0){
       currsum=0;
   }
}
console.log(maxSum)

//target sum
let arr = [1,2,3,4,5];
let target =9;let ans=[];
function targetSum(arr,target){
  let i=0,j=arr.length-1;
  while (i<j){
  let sum= arr[i]+arr[j];
    if(sum>target){
      j--;
    }else if(sum<target){
      i++;
    }else{
    ans.push(i);
    ans.push(j);
    return ans;
    }
  }
  return ans;
}
console.log(targetSum(arr,target))

//Majority elements
let nums = [2,2,1,1,1,2,2]
// Output: 2

function majority(nums){
    for(let i of nums){
       let frequency=0;
        for(let j of nums){
            if(i==j){
                frequency++;
            }
        }
        if(frequency>nums.length/2){
            return i;
        }
    }
    return -1;   
}
console.log(majority(nums))

function majorityElement(nums) {
  const n = nums.length;

  for (let i = 0; i < n; i++) {
      let freq = 0;

      for (let j = 0; j < n; j++) {
          if (nums[j] === nums[i]) {
              freq++;
          }
      }

      if (freq > Math.floor(n / 2)) {
          return nums[i];
      }
  }

  return -1; // No majority element
}

// Test case
// let nums = [3, 2, 3];
console.log(majorityElement(nums)); // Output: 3
console.log("break line");

let array1=[1,2,3,1,2]
function unique(array){
  let seen={};
  let duplicate=[];
  for(let i=0;i<array.length;i++){
    let abc = array[i];
    if(abc == undefined){
      seen[abc]=1;
    }else{
      seen[abc]++;
      duplicate.push(abc);
    }
  }
  return seen;
}
console.log(unique(array1))


