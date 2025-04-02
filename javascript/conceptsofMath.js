let a=11,b=22;//33+11+22+13+24
let c= a+b + a++ + b++ + ++a + ++b;
console.log(a,b,c)//13,24,103
let m=1;
m=m++ + ++m;
console.log("m=m++ + ++m;",m);
let s=true;//type convertion to 1
s++;
console.log(s);

// let mt=10++;//static value not allowed(error)
// console.log(m);

let n=10;
// let t=++(n++);//also error first solve bracket (10) ++10 is not allowed


//MATH METHODS

console.log("Math.abs : ",Math.abs(-10));//negative to positive value
console.log("Math.ceil : ",Math.ceil(10.5));//go up
console.log("Math.cbrt : ",Math.cbrt(10));//10*10*10
console.log("Math.floor : ",Math.floor(10.5));//come down

console.log("Math.max : ",Math.max(10,5,8));//return only max value
console.log("Math.min : ",Math.min(10.5));//return only min value
console.log("Math.pow : ",Math.pow(10,5));//10^5

console.log("Math.round : " ,Math.round(10.5));
console.log("Math.sqrt : " ,Math.sqrt(10));//10*10
console.log("Math.trunc : " ,Math.trunc(10.5));//simplly remove after decimal point
console.log("Math.sign : " ,Math.sign(10.5));
console.log("Math.random till 0-1: ",Math.random());//any random value //0-1 but never 1
console.log("Math.random till 0-1: ",Math.random()*10);//any random value //1-9
console.log("Math.random till 10-99: ",Math.random()*100);//any random value //10-99
console.log("Random value to otp: ",Math.trunc(Math.random()*9000)+1000);//any random value //0-8999//and (+1000 so it remove 1 to 999 under number)


let number= 21.9876543;
//remove decimal after decimal till 2 or 3 or 4...
console.log("toFixed(4) : ", number.toFixed(4)); //type converstion to string


let radius =12;

console.log("circumferance of circle", 2*Math.PI*radius);
console.log("circumferance of circle till decimal number", Number((2*Math.PI*radius).toFixed(2)));