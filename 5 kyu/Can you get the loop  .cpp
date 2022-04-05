#include <vector>
bool includes(Node* node, std::vector<Node*> temp)
{
  for (auto i : temp)
    if (i == node)
      return true;
  return false;
}

int getLoopSize(Node* node)
{
  std::cout<<node<<'\n';
  std::vector<Node*> temp;
  
  while(!includes(node, temp))
  {
    temp.push_back(node);
    node = node->getNext();
  }

  int ind = 0;
  for(int i = 0; i < temp.size(); i++)
    if(temp[i] == node)
    {
      ind = i;
      break;
    }
  return temp.size() - ind;

}
