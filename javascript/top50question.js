//reverse the number,string,array

function revString(str){
    let s='';
    for(let i=str.length-1;i>=0;i--){
        s+=str[i];
    }
    return s;
}
console.log(revString("string"));

function revNumber(num){
    let rev=0;
    while(num!=0){
       
        let digit = num%10;
        console.log(digit);
        // rev=rev*10+digit;
        num=Math.floor(num/10);
    }
    
}
revNumber(7123456);

function swapbyvar(a,b){
let temp=a;
a=b;
b=temp;
console.log(a,b);
}
swapbyvar(29,64);

function swapwithoutvar(a,b){
    a=a+b;//1+2 //3
    b=a-b;//2-3 //
     a=a-b;//3-1
    console.log(a,b)
}
swapwithoutvar(19,23);

function swapwitharray(a,b){
 [a,b]=[b,a];
 console.log(a,b)
}
swapwitharray(3,4);



