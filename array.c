#include <stdio.h>

int arr[10] = {1, 2, 3, 4, 5};
int size = 5;

void add() {
    int n, p, i;
    printf("Number:");scanf("%d", &n);
    printf("Position:");scanf("%d", &p);

    for(i = size-1; i >= p; i-- )
        arr[i+1] = arr[i];

    arr[i+1] = n;
    size++;
}

void del(){
    int i, pos;

    printf("\nPosition of no. to be deleted:");scanf("%d", &pos);

    for (i = pos; i < size; i++ )
        arr[i] = arr[i+1];
        
    size--;

}

void print() {
    int i;
    printf("Resulting array is\n");
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}

int main(){
    add();
    print();
    del();
    print();
}