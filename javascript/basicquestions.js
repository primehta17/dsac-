let nums=[3,7,8,9];let target=11;

function pairSum(nums,target){
    let index=[];
for(let i=0;i<nums.length;i++){
   for(let j=i+1;j<nums.length;j++){
       if(nums[i]+nums[j]==target){
           index.push(i);
           index.push(j);
       }
   }
}
return index;
}

console.log(pairSum(nums,target))

function pairsumoptimal(nums,target){
    let index=[];
let i=0,j=nums.length-1;
while(i<j){
    let pairsum= nums[i]+nums[j];
    if(pairsum>target){
        j--;
    }else if(pairsum<target){
        i++;
    }else{
        index.push(i);
        index.push(j);return index;
    }
}
}

console.log(pairsumoptimal(nums,target));


//product of array except itself
function productself(){
    let array=[1,2,3,4];let ans=new Array(array.length).fill(1);
    for(let i=0;i<array.length;i++){
        for(let j=0;j<array.length;j++){
            if(i != j){
                 ans[i] *= array[j];
            }
        } 
    }
   return ans;
}
console.log(productself());

let arr1 = [1,2,3,4];
function productselfoptimum(arr){
    let n=arr.length;
    let answer=new Array(n).fill(1);
    let prefix=new Array(n).fill(1);
    let suffix=new Array(n).fill(1);
    for(let i=1;i<n;i++){
        prefix[i] = prefix[i-1] * arr[i-1];
    }
    for(let j=n-2;j>=0;j--){
        suffix[j] = suffix[j+1] * arr[j+1]
    }
    for(let k=0;k<n;k++){
        answer[k] = prefix[k] * suffix[k];
    }
    return answer;
}
console.log(productselfoptimum(arr1))

let arr = [1, 2, 3, 4];
function productselfoptimumm(arr) {
    let n = arr.length;
    let ans = new Array(n).fill(1);
    let prefix = new Array(n).fill(1);
    let suffix = new Array(n).fill(1);

    // Calculate prefix products
    for (let i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    // Calculate suffix products
    for (let i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    // Calculate the final result
    for (let i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}
console.log(productselfoptimumm(arr));


//space complexity
let arra=[1,2,3,4];

function productselfspace(arr) {
    let n = arr.length;
    let ans = new Array(n).fill(1);
    let suffix = 1; // Suffix starts as 1 for multiplication

    // Calculate the prefix product and store in ans
    for (let i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * arr[i - 1];
    }

    // Calculate the suffix product on the fly and update ans
    for (let i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= arr[i];
    }

    return ans;
}

console.log(productselfspace(arra));



