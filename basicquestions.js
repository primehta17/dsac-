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