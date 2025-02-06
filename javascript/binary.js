function program(numb){
    let ans=0;let pow=1;
    while(numb>0){
    let lastDigit = numb%2;
    numb=Math.floor(numb/2);
    ans=ans +(lastDigit*pow);
    pow=pow*10;
}
return ans;
}
for(let i=1;i<=12;i++){
    console.log(program(i))
}

function digitpower(num){
    let ans=0;pow=1;
    while(num>0){
         let lastDigit = num %10;
         ans = ans+ (lastDigit*pow);
         num = Math.trunc(num/10);
         pow=pow*2;
    }
   return ans;
}
console.log(digitpower(111));

function bubblesort(arr){
    let temp =[];
    for(let i=0;i<arr.length;i++){
        for(let j=0;j<arr.length;j++){
            if(arr[i]>arr[j]){
                let temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
               
            }
        }
    }return arr;
}
console.log( bubblesort([6,2,4,33]))


// Convert -8 to binary and reverse
// //rules 2' complement for negetive number
// 1' is reverse to 0 to 1 and 1 to 0//10111( 1 st complement rule)
// 2' add this number by +1(2 nd complement rule)
// 1) convert to binary //1000
// 2) add 0 in front of binary number //01000
// 3) reverse to 0 to 1 and 1 to 0//10111
// //add 1+1=10(carry 1)
// 4) add this number by +1//11000
// 5) 10111
//   +00001
//    -----
//    11000
//    (-8)^10 = (11000)^2
   
//    ////reverse
//   11000
// 1)reverse this 0 to 1 and 1 to 0 //00111
// 2)+1 
//    00111
//   +00001
//   ------
//    01000 equals to 8