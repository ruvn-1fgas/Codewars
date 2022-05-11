const getLength = (arr) => arr.length;
​
const getFirst = (arr) => arr[0];
​
const getLast = (arr) => arr[arr.length-1];
​
function pushElement(arr){
  arr.push(1);
  return arr;
}
function popElement(arr){
  arr.pop();
  return arr;
}