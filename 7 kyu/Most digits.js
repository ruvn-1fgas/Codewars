function findLongest(arr){
  let maxNum = arr[0];
  let maxLength = arr[0].toString().length;
  
  for(let i = 1; i < arr.length; i++){
    if(arr[i].toString().length > maxLength){
      maxLength = arr[i].toString().length;
      maxNum = arr[i];
    }
  }
  return maxNum;
}