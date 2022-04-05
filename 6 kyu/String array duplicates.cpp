std::vector<std::string> dup(std::vector<std::string> arr)
{
  for(int i = 0; i < arr.size(); i++)
  {
    std::string temp = std::string(1,arr[i][0]);

    for (int j = 1; j < arr[i].size(); j++)
      if (arr[i][j] != arr[i][j - 1])
        temp += arr[i][j];
    arr[i] = temp;
  }

  return arr;
}
