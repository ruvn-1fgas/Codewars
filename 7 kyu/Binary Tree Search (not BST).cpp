#include <queue>
struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};

bool search(int n, Node* root) {

  if(!root)
    return false;
    std::queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if (temp->val == n)
            return true;
        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }
    return false;
}
