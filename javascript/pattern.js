//1234 square number pattern

let n=5;
let ans='';
function fun1234sq(num){
    for(let i=1;i<=num;i++){ //1 //2 (column) ||
        for(let j=1;j<=num;j++){ //12345 //12345 (row) =
            ans += j;
        }
       ans += "\n";
    }
    return ans
}
console.log(fun1234sq(n));
// for i //total lines
// 11111
// 22222
// 33333
// 44444
// 55555

//for j //what to print
// 12345
// 12345
// 12345
// 12345
// 12345

//for *
// *****
// *****
// *****
// *****
// *****

// function fun1234sq(num){
//     for(let i=0;i<num;i++){ //1 //2 (column) ||
//         for(let j=0;j<num;j++){ //12345 //12345 (row) =
//             ans += "*";
//         }
//        ans += "\n";
//     }
//     return ans
// }
// console.log(fun1234sq(n));


//charaters
// let a=65;
// console.log(String.fromCharCode(a))

let char='';
function fnsqabc(num){
   for(let i=0;i<num;i++){
    for(let j=0;j<num;j++){
        char += String.fromCharCode(65+j);
    }
    char += "\n";
   }
   return char;
}
console.log(fnsqabc(n))

// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE


function fn1to9(num){
    let next=1;let decimal ='';
    for(let i=0;i<num;i++){
        for(let j=0;j<num;j++){
            decimal += next++;
        }
        decimal += '\n';
    }
    return decimal;
}
console.log(fn1to9(3))

// 123
// 456
// 789

function fnatoz(num){
    let next=65;let decimal ='';
    for(let i=0;i<num;i++){
        for(let j=0;j<num;j++){
            decimal += String.fromCharCode(next++);
        }
        decimal += '\n';
    }
    return decimal;
}
console.log(fnatoz(3))

// ABC
// DEF
// GHI
function trianglepatt(num){
    let tri='';
   for(let i=0;i<num;i++){
    for(let j=0;j<i+1;j++){
       tri += "*";
    }
    tri += "\n";
   }
   return tri;
}
console.log(trianglepatt(n));

function trianglepatt1to4(num){
    let tri='';
   for(let i=0;i<num;i++){
    for(let j=0;j<i+1;j++){
       tri += (i+1);
    }
    tri += "\n";
   }
   return tri;
}
console.log(trianglepatt1to4(n));

// 1
// 22
// 333
// 4444
// 55555

function trianglepattatoz(num){
    let tri='';
   for(let i=0;i<num;i++){
   
    for(let j=0;j<i+1;j++){
       tri += String.fromCharCode(65+i);
    }
    tri += "\n";
   }
   return tri;
}
console.log(trianglepattatoz(n));

// A
// BB
// CCC
// DDDD
// EEEEE
function trianglestart1(num){
    let tri='';
    for(let i=0;i<num;i++){
        for(let j=1;j<=i+1;j++){
            tri += j;
        }
        tri += '\n';
    }
    return tri;
}
console.log( trianglestart1(n))

function revpatternend1(n){
    let rev='';
    for(let i=1;i<=n;i++){
        for(let j=i;j>0;j--){
            rev += j;
        }
        rev += '\n';
    }
    return rev;

}
console.log(revpatternend1(n));

// 1
// 21
// 321
// 4321
// 54321

function revchar(num){
    let write='';
   for(let i=0;i<num;i++){
    for(let j=i+1;j>0;j--){
        write += String.fromCharCode(64+j);
    }
    write += '\n';
   }
    return write;

}
// A
// BA
// CBA
// DCBA
// EDCBA
console.log(revchar(n))

for(let i=5;i>0;i--){
    console.log(i);
}
// 5
// 4
// 3
// 2
// 1

function floydtri(num){
    let fl='';let letter=1;
for(let i=0;i<num;i++){
    for(let j=0;j<i+1;j++){
        fl += letter++;
    }
    fl += '\n';
}
return fl;
}
console.log(floydtri(n))
// 1
// 23
// 456
// 78910
// 1112131415

function floydchar(num){
    let answe='',char=65;
    for(let i=0;i<num;i++){
        for(let j=i+1;j>0;j--){
          answe += String.fromCharCode(char++);
        }
        answe += '\n';
    }
    return answe;
}
console.log(floydchar(n));

// A
// BC
// DEF
// GHIJ
// KLMNO


function invertedtriangle(num){
    let invert ='';
 for(let i=0;i<num;i++){
    for(let j=0;j<i;j++){
        invert += ' ';
    }
    for(let j=i;j<num;j++){
        invert += i+1 ;
    }
    invert += '\n';
 }
 return invert;
}
console.log(invertedtriangle(5));
// 11111
//  2222
//   333
//    44
//     5

function invertalpha(num){
    let print='';
  for(let i=0;i<num;i++){
    for(let j=0;j<i+1;j++){
        print += ' ';
    }
    for(let j=0;j<num-i;j++){
        print += String.fromCharCode(65+i)
    }
    print+='\n';
  }
  return print;
}
console.log(invertalpha(n));

//  AAAAA
//   BBBB
//    CCC
//     DD
//      E
function pyramid(num){
    let type='';
 for(let i=0;i<num;i++){
    for(let j=0;j<num-i-1;j++){
        type+='.';
    }
    for(let j=1;j<=i+1;j++){
        type += j;
    }
    for(let j=i;j>0;j--){
        type += j;
    }
    type += '\n';
 }
 return type;
}
console.log(pyramid(5));
// .....1
// ....121
// ...12321
// ..1234321
// .123454321

function pyramidalpha(num){
    let anspy='';
    for(let i=0;i<num;i++){
        for(let j=i;j<num;j++){
            anspy += '*';
        }
        for(let j=0;j<i+1;j++){
            anspy += String.fromCharCode(65+j);
        }
        for(let j=i;j>=1;j--){
            anspy += String.fromCharCode(64+j);
        }
        anspy += "\n";
    }
    return anspy
}
console.log(pyramidalpha(n))
// *****A
// ****ABA
// ***ABCBA
// **ABCDCBA
// *ABCDEDCBA


function squareparllel(num){
    let pall='';
    for(let i=0;i<num;i++){
        for(let j=0;j<num;j++){
            if( j==0 || j==num-1){
                pall += "* ";
            } 
            else{
                pall += "  ";
            }   
        }
        pall += "\n";
    }
    return pall;
}
console.log(squareparllel(n));
// *       * 
// *       * 
// *       * 
// *       * 
// *       * 

function pluspattern(num){
    let plus="";
   for(let i=1;i<=num;i++){
    for(let j=1;j<=num;j++){
        if(i==Math.ceil(num/2) || j==Math.ceil(num/2)){
            plus += "* ";
        }else{
            plus += "  ";
        }  
    }
    plus += '\n';
   }
   return plus;
}
console.log(pluspattern(n));
//     *     
//     *     
// * * * * *
//     *     
//     *  

function crossdiagonal(num){
   let cross="";
   for(let i=0;i<num;i++){
        for(let j=0;j<num;j++){
            if(i==j || i+j==n-1){
                cross += "*";
            }else{
                cross += " ";
            } 
        }
        cross += '\n';
   }
   return cross;
}
console.log(crossdiagonal(n))
// *   *
//  * * 
//   *  
//  * * 
// *   *

function hollowsqaure(num){
    let hallow="";
    for(let i=0;i<num;i++){
        for(let j=0;j<num;j++){
            if(i==0||j==0||i==num-1||j==num-1){
                hallow += "* ";
            }else{
                hallow += "  ";
            }
        }
        hallow += "\n";
    }
    return hallow;
}
console.log(hollowsqaure(n))
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

function hallowtriangle(num){
    let trai="";
    for(let i=0;i<num;i++){
        for(let j=0;j<i+1;j++){
            if(j==0 || i==j||i==n-1){
                trai += "* ";
            }else{
                trai += "  ";
            } 
        }
            trai += "\n";
    }
    return trai;
}
console.log(hallowtriangle(n));
// * 
// * * 
// *   * 
// *     * 
// * * * * *

function hallowdectriangle(num){
    let hello="";
  for(let i=1;i<=num;i++){
    for(let j=i;j<=num;j++){
        if(i==1 || j==i || j==num){
            hello += "* ";
        }else{
            hello += "  ";
        }
        
    }
    hello += "\n";
  }
  return hello;
}
console.log(hallowdectriangle(5))
// * * * * * 
// *     * 
// *   * 
// * * 
// * 


function hillhallow(num){
    let hill="";
    for(let i=1;i<=num;i++){
        for(let j=1;j<=num-i;j++){
            hill +=" ";        
        }
        for(let j=1;j<i;j++){
            if(j==1 || i==num){
                hill += "*"; 
            }else{
                hill += " "; 
            }
           
        }
        for(let j=1;j<=i;j++){
            if(i==j || i==num){
                hill += "*";  
            }else{
                hill += " ";
            }
            
        }
        hill+="\n";
    }

    return hill;
}
console.log(hillhallow(n));
//     *
//    * *
//   *   *
//  *     *
// *********


function hallowdiamond(num){
    let dia='';
   for(let i=0;i<num;i++){
    for(let j=0;j<num;j++){
        dia += "*";
    }
    for(let j=0;j<num;j++){
        dia += "*";
    }
    for(let j=0;j<num;j++){
        dia += "*";
    }
    dia += "\n";
   }
   for(let i=0;i<num;i++){
    for(let j=0;j<num;j++){
        dia += "*";
    }
    for(let j=0;j<num;j++){
        dia += "*";
    }
    for(let j=0;j<num;j++){
        dia += "*";
    }
    dia += "\n";
   }
   return dia;
}
console.log(hallowdiamond(n))