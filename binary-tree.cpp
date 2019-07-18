// NOT FINISHED !!!

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    node *left = nullptr,
         *right = nullptr;
};

int main()
{
    char ch;
    int data;
    node *root = nullptr,
         *cpt; // pointer for next node

    do{
        // node to be insorted 
        node *ptr = (node *) malloc(sizeof(node));

        cout<<"Enter number:"; cin>>data;

        ptr->data = data;

        if(root){
            cpt = root;
            
        }


    }
}


