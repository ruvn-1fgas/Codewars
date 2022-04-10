template <class T>
int length(const Node<T> *head)
{
  if(!head)
    return 0;
  int count = 1;
  Node<T> *temp = head->next;
  while(temp->next)
  {
    temp = temp->next; 
    count++;
  }
  return temp ? count + 1 : count;
}