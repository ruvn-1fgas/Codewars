function findMultiples(a, b) {
  let arr = [];
  for(let i = a; i <= b; i++){
    if(i % a == 0)
      arr.push(i);
  }
  return arr;
}
​