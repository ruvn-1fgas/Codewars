function calculator(a,b,sign){
  if(typeof(a) != typeof(b))
    return "unknown value";
  
  switch(sign){
      case '+':return a + b;
      case '-':return a - b;
      case '*':return a * b;
      case '/':return a / b;
      default:return "unknown value";
  }
  
  return 0;
​
}