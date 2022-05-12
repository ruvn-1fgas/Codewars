function padIt(str,n){
  let i = 1;
  while(n--){
    if(i % 2 == 0)
      str += '*';
    else str = '*' + str;
      i++;
    }
  return str;
}