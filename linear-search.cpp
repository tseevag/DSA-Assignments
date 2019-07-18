#include<iostream>
using namespace std;

#define N 10



class array{
    int a[N] = {1, 2, 6, 98, 27, 53, 43, 64, 48, 24};

    public:
    bool search( int n){
        
        for (int i = 0; i < N ; i++){
            cout << "loop " << i+1 <<endl;

            if(a[i] == n) 
                return true;
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

    s.search(n) ? cout << "Found !! " << endl: cout << "Not Found !!!" << endl;

    system("pause");
    return 0;

}