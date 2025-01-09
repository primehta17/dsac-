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
