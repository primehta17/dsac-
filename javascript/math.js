////prime number
//space complexity is very high XX(no use);
let prime=71;
function primenum(num){
  for(let i=2;i*i<=num;i++){
    if(num%i===0)
        return false;
    
  }
  return true;
}
function tillprime(prime){
    for(let i=2;i<=prime;i++){
        if(primenum(i)){
            console.log(i)
        }
    }
}

//console.log(tillprime(prime));
// console.log(primenum(prime));


//// SIEVE OF ERATOSTHENES////(channah)

function sieve(num){
    const isPrime = new Array(num).fill(true);
    let count=0;
    for(let i=2;i<=num;i++){
        if(isPrime[i]){
            count++;
        for(let j=i*i;j<=num;j=j+i){
            isPrime[j]=false;
            }
        }
    }
    return count;
}
// console.log(sieve(10))


const digitcount=12345;//(shortcut)
const ansewerdigitCount=Math.floor(Math.log10(digitcount))+1;
console.log("count of ditits log10", ansewerdigitCount)
// digits in a Number(print,count,sum,reverse,palindrom)

//time complexity = O(log10n)
let digitnum=3211;
function digitWrite(num){
    while(num!=0){
      let digit=num%10;
      console.log(digit);
       num =  Math.floor(num /10); 
    }  
}
digitWrite(digitnum);

function countdigit(num){
    let count=0;
    while(num !=0){
        let lastDigit=num%10;
        count++;
        num=Math.floor(num /10);
    }
    return count;
}
console.log("digits count",countdigit(digitnum))

function digitSum(num){
    let sum=0;
    while(num !=0){
        let lastDig=num%10;
        sum+=lastDig;
        num=Math.floor(num/10);
    }
    return sum;
}
console.log("Sum digits", digitSum( digitnum));

// Armstrong Number => 
    // Armstrong number is a number that is equal to the sum of
//cobes of its digits
let cubesum=253;//2*3+5*3+3*3;
let cubesum2=153;//371,1 ,153 are armstrong number
function armstrongnum(num){
    let sumofcube=0,copy=num;
    while(num!=0){
        let lastDig = num%10;
        sumofcube += lastDig*lastDig*lastDig;
        num = Math.floor(num/10);
    }
  return sumofcube==copy?true:false;
}
console.log(armstrongnum(cubesum))



//HCF(Higest common factor)/GCD(greatest common divisor)
//a=20,b=28 answer =4; 
//time complexity(O(Math(min(a,b)))
let a=20,b=28;
function gcdhcf(a,b){
  let gcd=1;//start with 1 (because any number is divisible by 1)
  for(let i=0;i<Math.min(a,b);i++){
    if(a%i==0 && b%i==0){
        gcd=i;
    }
  }
  return gcd;
}
console.log("gcdhcf =>",gcdhcf(a,b));
//optimize solution //EUCLID's Algorithm (a modulo b if any smaller digit)
function lucid(a,b){
  while(a>0 && b>0){
    if(a>b){ 
        a=a%b;//we are assigning a%b to a
    }else{
        b=b%a;
    }
  }
  if(a==0) return b;
  return a;
}
console.log("lucid: ",lucid(6,12));
console.log("lucid: ",lucid(0,12));

//recursion 
//it start like that a is bigger than b is smaller
function recursionGcd(a,b){
 if(b==0) return a;
 return recursionGcd(b,a%b);
}
console.log(recursionGcd(20,28));


//LCM => lowest/least common multiple 


function lcm(a,b){
  let gcd = recursionGcd(a,b);
  return (a*b)/gcd;
}
console.log(lcm(20,28))

//reverse number 321 => 3*10^2+ 2*10^1 + 1*10^0
function reverse(num){
    let rev=0;
    const MIN = -(2 ** 31); // -2147483648
    const MAX = 2 ** 31 - 1; // 2147483647
  while(num !=0){
    let revNum= num%10;
  
    if(rev< MIN || rev> MAX){
        return 0;
    }
    rev = rev*10+revNum;
    num = Math.trunc(num/10);
  }
  return rev;
}
console.log("revers => ",reverse(123));


//palindrome (number and reverse number are same)
function palindrome(x){


    if(x<0) return false;
    let rev= reverse(x);
    return rev==x;
}
console.log("palindreme", palindrome(121))



