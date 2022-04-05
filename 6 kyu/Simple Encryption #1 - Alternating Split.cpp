std::string encrypt(std::string text, int n)
{
  if (text.empty() || n <= 0)
    return text;
  std::string odd = "";
  std::string even = "";
  for (int i = 0; i < text.size(); i++)
    if (i % 2 == 0)
      even += text[i];
    else odd += text[i];

  return encrypt(odd + even, n - 1);
}


std::string decrypt(std::string encryptedText, int n)
{

  if (encryptedText == "" || n <= 0)
    return encryptedText;

  int mid = encryptedText.size() / 2;

  std::string odd = "";
  std::string even = "";
  for (int i = 0; i < encryptedText.size(); i++)
    if (i < mid)
      odd += encryptedText[i];
    else even += encryptedText[i];
  std::string s = "";
  int j = 0;
  for (int i = 0; i < even.size(); i++)
    {
      s += even[i];
      if (j < odd.size())
      s += odd[j];
      j++;
    }
  return decrypt(s, n - 1);
}
