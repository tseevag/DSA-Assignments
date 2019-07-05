#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void display() {
   struct Node* ptr;
   ptr = head;

   cout<<"The linked list is: ";
   while (ptr != NULL) {
      cout<< ptr->data << "\t";
      ptr = ptr->next;
   }
   cout  << endl;
}


void insert(int new_data, int pos = 0) {

   Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   

   if (pos == 0){
      new_node->next = head;
      head = new_node;
   }

   else {
      struct Node* p = head;

      for (int i = 0; i < pos-1; i++) 
         p = p->next;

      new_node->next = p->next;
      p->next = new_node;

   }
   

   display();

}

int remove() {
    int x;
    struct Node *ptr = head;

    head = ptr->next;
    x = ptr->data;

    free(ptr);

    return x;
}


int main() {
   struct Node *n1 , *head, *n2;

   n2->data = 3;
   n2->next = NULL;

   n1->data = 2;
   n1->next = n2;

   head->data = 1;
   head->next = n1;

   display();
   

   char ch='y';
   int a, pos;

	do {
        cout<<"Enter element to add :"; cin>>a;
        cout << "Enter postion :"; cin >> pos;
        insert(a, pos);
        cout<<"wants to add more??(y/n)";
        cin>>ch;

	}while(ch=='y');

   display();


    return 0;

}

