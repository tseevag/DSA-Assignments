#include <iostream>

using namespace std;

class queue 
{
    int  q[50] = {1, 2, 3, 4, 5}; 
    
    public:
    int front = 0, rear= 4;
    
    void print()
    {
        cout << "Queue is : ";
        for (int i = 0; i <=  rear; i++)
            cout << q[i] << "\t";
            
        cout << endl;
    }
    
    void insert( int n)
    {
        q[++rear] = n;
        cout << n << " is inserted to the queue" << endl;
    }
    
    int remove()
    {
        if ( front > rear)
        {
            cout << "Queue Underflow" << endl;
            return 0;
        }
        
        else{
            
            int temp = q[0];
            
            for (int i = 0; i < rear; i++)
                q[i] = q[i+1];
                
            rear--;
                
            cout << temp << " is removed from queue" << endl;
            
            return temp;
        }
    }
};

int main()
{
    queue q;
    
    for( int i = 0; i < 6; i++)
    {
        q.print();
    
        q.remove();
        
    }
    
    
    return 0;
}
