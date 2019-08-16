

#include<iostream>
using namespace std;

#define N 10



class array{
    int a[N] = {1, 2, 6, 98, 27, 53, 43, 64, 48, 24};

    public:
    //sort using constructor 
    array(){
        int t;

        for (int i = 0; i< N; i++)
            for(int j = i+1;j < N; j++)
                if(a[i]>a[j]){
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
    }

    bool search( int n){

        int s = 0, e = N-1, m , i = 0;

        while(s <= e)
        {
            m = (s+e)/2;

            //for understanding 
           cout << ++i << " s = "<< s<<" m = "<<m <<" e = "<<e <<  " cond = " << (int)(s <= e) << endl;

            if(a[m] == n) 
                return true;

            else if(n < a[m])
                e = m-1;
                

            else
                s = m+1;
        }
            

        return false;
    }

    void display(){

        for (int i = 0; i< N; i++)
            cout << a[i] << "\t";

        cout << endl;
    }

};

int main(){
    array s;
    int n;

    cout << "Enter the number to be searched :"; cin >> n;

    s.display();

    cout << "searching " << n << ". . ." << endl;
    s.search(n) ? cout << "Found !! " << endl: cout << "Not Found !!!" << endl;

    return 0;

}