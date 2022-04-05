/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node* head)
{
  int count = 0;
  while(head != NULL)
  {
    count++;
    head = head->next;
  }
  return count;
}

int Count(Node* head, int data)
{
  int count = 0;
  while(head != NULL)
  {
    if (head->data == data)
      count++;
    head = head->next;
  }
  return count;
}
