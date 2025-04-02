// 1. Sum of Elements Write a program to take an array of integers as input and calculate the sum of all elements in the array. ➕💯✅

// 2. Find Maximum and Minimum Write a program to find the maximum and minimum values in an array of integers. 👍😊😎

// 3. Reverse an Array Write a program to reverse the elements of an array without using an additional array. 🔄️💡✨

// 4. Count Even and Odd Numbers Write a program to count the number of even and odd numbers in an array of integers. 🧮🔢🤓

// 5.Search an Element Write a program to search for an element in an array and return its, index. If the element is not found, display a message. 🔎📍❗

// 6. Frequency of Elements Write a program to count the frequency of each element in an array. Example: Input: [1, 2, 2, 3, 4, 4, 4] Output: 1: 1, 2: 2, 3: 1, 4: 3 📊📈✅

// 7. Second Largest Element Write a program to find the second largest element in an array. 🥈🏆🥇

// 8. Rotate an Array Write a program to rotate an array to the right by a given number of steps. Example: Input: [1, 2, 3, 4, 5], Rotate by 2 Output: [4,5, 1, 2, 3] 🔄️➡️🚀

// 9. Check Palindrome Array Write a program to check if an array is a palindrome. Example: Input: [1,2,3, 2, 1] Output: true 🪞 palindrome✅

// 10. Merge Two Arrays Write a program to merge two arrays into a single array. ➕➕🎉
let array=[2,22,3,22,2];

//10 merge 
function merge(arr){
    let arr2=[4,5,55];
    arr.push(...arr2);
    console.log(arr);
}
merge(array);
//9 palindrome
function palindrome(arr){
   let newar=[...arr].reverse();
   for(let i=0;i<arr.length;i++){
       if(newar[i]==arr[i]){
        return true;
       }
   }
   return false;
}
 console.log(palindrome(array))
//8 rotate array

function rotatearr(){
    let arr=[9,3,33,2,7];
    let place=3, n=arr.length;
    for(let i=0;i<place;i++){
       let first =arr[0];
       for(let j=0;j<n-1;j++){
        arr[j] = arr[j+1];
       }
       arr[n-1]=first;
    }
    return `rotate array ${arr} `;
}
console.log(rotatearr())

//7 second largest
function secondlargest(arr){
    let sorted = arr.sort((a,b)=>{return b-a;});
    console.log(sorted[1])
    let secmax=arr[0];
    for(let i=0;i<sorted.length;i++){
        if(arr[i]>secmax){
            secmax=arr[i];
        }  
    }
    return secmax;
}
console.log(secondlargest(array))

//6 frequecy
function frequency(arr){
    let seen={};
    for(let i=0;i<arr.length;i++){
        let a=arr[i];
         if(seen[a]==undefined){
            seen[a]=1;
         }else{
            seen[a]++;
         }
    }
    return seen;
}
console.log(frequency(array))

//5 find
function find(arr){
    let target =43;
    for(let i=0;i<arr.length;i++){
        if(arr[i]==target){
          return `target index : ${arr[i]}`;
        }
    }
    return "No. not found";
}
console.log(find(array))
//4 evenodd
function evenorodd(arr){
    let counteven=0,countodd=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]%2==0){
            counteven++;
        }else{
            countodd++;
        }
    }
    return `count even : ${counteven} , count odd : ${countodd}`;
}
console.log(evenorodd(array));

//3 reverse
function reverse(arr){
    for(let i= arr.length-1;i>=0;i--){
      console.log("reverse the array", arr[i]);
    }
}
reverse(array)

//2  max ,min

function max(arr){
    let max=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return `maximum number : ${max}`;
}
console.log(max(array))

function min(arr){
    let min=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return `minimum number : ${min}`;
}
console.log(min(array))


//1 .sum

function sumarray(arr){
   
    let sum = 0;
    for(let s of arr){
        sum+=s;
    }
    return `sum : ${sum}`;
}
console.log(sumarray(array));

