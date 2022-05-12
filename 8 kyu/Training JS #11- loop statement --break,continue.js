function grabDoll(a){
  var bag=[];
  
  for(let i = 0; i < a.length; i++){
    if(bag.length == 3)
      break;
    if(a[i] == "Hello Kitty" || a[i] == "Barbie doll")
      bag.push(a[i]);
    else continue;
  }
  return bag;
}