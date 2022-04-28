#include <iostream>
using namespace std;

class Node{
public:
  int key;
  Node *next;
};


void pushFront(Node ** head_ref,int key)
{
  Node* new_node=new Node();
  new_node->key=key;
  new_node->next=(*head_ref);

  (*head_ref)=new_node;
  //std::cout <<"Head ponter address:"<< *head_ref<< '\n';
}

void pushBack(Node **tail_ref,int key)
{
  Node* new_node=new Node();
  new_node->key=key;
  new_node->next=NULL;
  (*tail_ref)->next=new_node;
  (*tail_ref)=new_node;
}

void printList(Node *node)
{
  while(node!=NULL)
  {
    std::cout << node->key << ' ';
    node=node->next;
  }
}
int main()
{
  Node *head=new Node();
  Node *tail=new Node();
  head->key=5;
  head->next=tail;
  tail->key=10;
  tail->next=NULL;

  //std::cout <<"Head ponter address:"<< head << '\n';

  pushFront(&head,20);
  pushBack(&tail,30);
  pushBack(&tail,40);

  printList(head);

}
