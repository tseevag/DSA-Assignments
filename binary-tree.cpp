#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *left, *right;

    public:
    Node( int d): data(d)
    {
        left = NULL;
        right = NULL;
    }

    insert(int d)
    {
        if(d > data)
        {
            if(right == NULL)
            {
                Node *node = new Node(d);
                right = node;
            }
                

            else
                right->insert(d);
        }

        else
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
        {
        	cout <<"Left . . ." << endl;
            left->traverse();
		}
        
        cout << "\t Root : " << data << endl;

        if(right != NULL)
        {
        	cout << "\t\tRight . . ." << endl;
            right ->traverse();
		}
        	       
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
    Node tree(4);

    tree.insert(5);
    tree.insert(2);
    tree.insert(3);
    tree.insert(1);
    tree.insert(7);
    tree.insert(6);
    
    tree.traverse();
    
cout << tree.contains(9);

    return 0;
}
