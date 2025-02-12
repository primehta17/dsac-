function bubblesort(arr){
    for(let i=0;i<arr.length-1;i++){
        let isSwapped = false;
        for(let j=0;j<arr.length-i-1;j++){
            if(arr[j]>arr[j+1]){
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwapped= true;
            }
        } 
        if(!isSwapped){
            return arr;
        }
    }return arr;
}
let arr=[3,2,4,5,1]
console.log(bubblesort(arr));


function selection(arr){
    for(let i=0;i<arr.length;i++){
        let smallestIndex=i;//unsorted array
        for(let j=i+1;j<arr.length;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex =j;
            }
        }
        let temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }
    return arr;
}
console.log(selection(arr))


function insertionsort(arr){
    for(let i=1;i<arr.length;i++){
          let curr=arr[i];
          let prev=i-1;
          while(prev>=0 && arr[prev]>curr){
                arr[prev+1] = arr[prev];
                prev--;
          }
          arr[prev+1]=curr;
    }
    return arr;
}
console.log(insertionsort(arr))