#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *left, *right;

    public:
    Node():data(NULL), left(NULL), right(NULL)
    {}
	
    Node( int d): data(d), left(NULL), right(NULL)
    {}

    void insert(int d)
    {
    	if(data == NULL)
    		data = d;
    		
        else if(d > data)
        {
            if(right == NULL)
            {
                Node *node = new Node(d);
                right = node;
            }
                

            else
                right->insert(d);
        }

        else if(d < data)
        {
            if(left == NULL)
            {
                Node *node = new Node(d);
                left = node;
            }

            else
                left->insert(d);
        }
        
    }

    void traverse()
    {
        
        if(left != NULL)
            left->traverse();
        
        cout << data << "\t";

        if(right != NULL)
            right ->traverse();
    }
    
    bool contains(int d)
    {
    	if(d < data)
    	{
    		if(left == NULL)
    			return false;
    			
    		else
    			left->contains(d);
		}
		
		else if(d == data)
			return true;
			
		else 
		{
			if(right == NULL)
				return false;
				
			else
				right->contains(d);
		}
	}
};


int main()
{
    Node tree;
    
    tree.insert(4);

    tree.insert(5);
    tree.insert(2);
    tree.insert(3);
    tree.insert(1);
    tree.insert(7);
    tree.insert(6);
    tree.insert(5);
    
    tree.traverse();
    
 	if(tree.contains(6))   
		cout <<endl<< "tree contains 6";

    return 0;
}
