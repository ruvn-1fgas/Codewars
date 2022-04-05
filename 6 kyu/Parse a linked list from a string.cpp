#include <iostream>
#include <string>
std::vector<int> split(std::string s)
{
    std::string temp = "";
    for (char c : s)
        if (c != ' ' && c != '>')
            temp += c;
    s = temp;
    temp = "";
    std::vector<int> res;
    for(char c : s)
    {
        if (isdigit(c))
            temp += c;
        else
        {
            if (c == 'n')
                return res;
            res.push_back(stoi(temp));
            temp = "";
        }
    }
    
    return res;
}

Node* parse(const std::string& s) {

    std::vector<int> a = split(s);
    if (a.empty())
        return nullptr;
    Node* node = new Node(a[0], NULL);
    if (a.size() == 1)
        return node;
    for(int i = 1; i < a.size(); i++)
    {
        Node* p = new Node(a[i], NULL);
        auto temp = node;
        while (node->next != nullptr)
            node = node->next;
        node->next = p;
        node = temp;
    }

    auto t = node;
    while(t->next != nullptr)
    {
        std::cout << t->data << ' ';
        t = t->next;
    }
    std::cout << '\n';
  return node;
}
