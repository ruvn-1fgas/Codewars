#include <functional>
#include <string>
#include <unordered_map>

class Cipher {

    std::unordered_map<char, char> toEncode;
    std::unordered_map<char, char> toDecode;


    using charFunc = std::function<char(char)>;
public:
    Cipher(charFunc encoder) {
        toEncode.clear();
        toDecode.clear();
        std::string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(char c : alph)
        {
            toEncode.insert(std::make_pair(c, encoder(c)));
            toDecode.insert(std::make_pair(encoder(c), c));
        }

    }

    std::string encode(std::string cleartext) {

        for (int i = 0; i < cleartext.size(); i++)
          if(isalpha(cleartext[i]))
          cleartext[i] = toEncode[cleartext[i]];
        return cleartext;
    }
  std::string decode(std::string ciphertext) {
    std::cout<<ciphertext<<'\n';
        for (int i = 0; i < ciphertext.size(); i++)
          if(ciphertext[i] != ' ')
            ciphertext[i] = toDecode[ciphertext[i]];
        return ciphertext;
    }

};
