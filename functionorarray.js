function isPrime(num){
    for(let i=2;i*i<=num;i++){
        if(num%i==0){
            return 0
        }
    }
    return 1;
}
console.log(isPrime(5))
console.log(isPrime(6))

function printprime(num){
    for(let i=2;i<=num;i++){
        if(isPrime(i)){
            console.log(i)
        }
    }
}

printprime(5);

// function fibonacci(nums){
//     for(let i=1;i<=nums;i++){
//         return i+(i+1);
//     }

// }
// console.log(fibonacci(4))


function fib(num){
    if(num<=1){
        return num;
    }
    // console.log(num)
    return fib(num-1)+fib(num-2);
}

// console.log(fib(7))
for(let i=0;i<10;i++){
    if(fib(i)){
        console.log("fib" ,fib(i))
    }
}

function smallest(){
    let arr =[34,13,-55,22,10];
    let index=0;
    let smallest=Infinity; //or arr[0]
    for(let i=0;i<arr.length;i++){
        // if(arr[i]<smallest){
        //     smallest = arr[i];
        //  }
        //  smallest = Math.min(arr[i],smallest);   
         if (Math.min(arr[i], smallest) !== smallest) {
            smallest = arr[i];
            index = i; // Update index whenever smallest changes
        }
    }
    console.log("smallest  index",index);
    return smallest;
}
console.log(smallest());
let arr =[34,13,55,22,10];
function largest(){
   
    let largest=arr[0]; // -Infinity
    for(let i=0;i<arr.length;i++){
        if(arr[i]>largest){
            largest = arr[i];
            console.log("index largest",i);
         }

    }
    return largest;
}
console.log(largest());

function reverseArr(arr){
    let reverse=[];
    for(let i=arr.length-1;i>=0;i--){
        reverse.push(arr[i]);
    }
    return reverse;
}
console.log(reverseArr(arr));

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
console.log(singleNum(single))

//another try
console.log("Another try");
function singleN(arr){
    let dup=[];
    let seen ={};
    for(let i=0;i<arr.length;i++){
        let abc= arr[i];
        if(seen[abc]==undefined){
            seen[abc] = 1;
        }else{
            seen[abc]++;
            dup.push(abc);
        }
    }
    console.log("duplicate arr value", dup);

    for(let char in seen){
      if(seen[char]==1){
        return Number(char);
      }
    }
    return -1;
   
}
console.log(singleN(single));
console.log("Another try end");

let obj = {1:"a",2:"b",c:"abc"};
let an=[], ba=[];
for(let s in obj){
   an.push(s);
   ba.push(obj[s])
}
console.log(an,ba);
// [ '1', '2', 'c' ] [ 'a', 'b', 'abc' ]
console.log("intersection start");
function arrayintersection(){
     let a =[1,2,3,4,5];
     let b =[6,7,3,1,4];
     for(let i=0;i<a.length;i++){
        b.push(a[i]);
     }
    let seen={};
    for(let i=0;i<b.length;i++){
        let abc=b[i];
        if(seen[abc]===undefined){
            seen[abc]=1;
        }else{
            seen[abc]++;
        }
    }
    let all=[];
    for(let ch in seen){
        if(seen[ch]!=1){
            all.push(ch);
        }
    }
    return all;
}
console.log(arrayintersection());
console.log("intersection end");
function swapmaxmin(arr){
    let small=arr[0]; let large= arr[0];
    let smIndex=0;let bigIndex=0; let array=[];
    for(let i=0;i<arr.length;i++){
        if(arr[i]<small){
           small = arr[i];
           smIndex = i;
        }
        if(arr[i]>large){
            large = arr[i];
            bigIndex = i;
        }   
    }

    return {small,large,smIndex,bigIndex}
}
console.log(swapmaxmin(arr));





