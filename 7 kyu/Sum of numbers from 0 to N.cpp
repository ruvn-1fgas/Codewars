using namespace std;
​
class SequenceSum{
  int count;
  public:
  SequenceSum (int n){
    this->count = n;
  }
  string showSequence(){
    if(this->count < 0)
      return std::to_string(this->count) + "<0";
    if(this-> count == 0)
      return "0=0";
    string s = "";
    for(int i = 0; i <= this->count; i++){
      s += std::to_string(i) + "+";
    }
    s = s.substr(0, s.size() - 1);
    s += " = ";
    s += std::to_string((int)((this->count / 2.0)*(this->count+1)));
    return s;
  }
  
};
​