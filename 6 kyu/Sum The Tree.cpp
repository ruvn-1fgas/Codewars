#include<queue>
int sumTheTreeValues(node* root) {
    int sum = 0;
    if (!root)
        return 0;
    std::queue<node*> q;
    q.push(root);
​
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if (temp->value)
            sum += temp->value;
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return sum;
}