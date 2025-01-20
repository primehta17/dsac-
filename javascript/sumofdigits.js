function digitSum(){
    let number="123";
    let digitSum=0;
    while(number>0){
       let reminder = number%10;
        number = number/10;
       digitSum+=reminder;
    }
    return Math.floor(digitSum);
}
console.log(digitSum());

function random(){
    let random = Math.floor(10000*Math.random(90000));
    console.log(random)
}
random();