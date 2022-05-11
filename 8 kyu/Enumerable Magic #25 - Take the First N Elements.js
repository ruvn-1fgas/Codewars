function take(arr, n) {
  let res = [];
  n = n <= arr.length ? n : arr.length;
  for(let i = 0; i < n; i++)
    res.push(arr[i]);
  return res;
}