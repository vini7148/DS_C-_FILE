#include <iostream>

using namespace std;

struct Node
{
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data)
{
   struct Node* new_node = new Node;
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display()
{
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL)
   {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main()
{
   int ch;

   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Display all the elements of queue"<<endl;
   cout<<"3) Exit"<<endl;

   do
   {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:{int n;cin>>n;insert(n);
                    break;}
            case 2: display();
                    break;
            case 3: cout<<"Exit"<<endl;
                    break;
            default: cout<<"Invalid choice"<<endl;
        }
   }while(ch<3 && ch>0);

   return 0;
}
