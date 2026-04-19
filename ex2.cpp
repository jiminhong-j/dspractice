#include <iostream>
using namespace std;

#define SIZE 100

void my_sort(int list[], int n);

int main(){
    int list[10] = {23, 11, 15, 8, 17, 33, 7, 14, 19, 21};
    int i;

    my_sort(list, 10);
    for(i = 0; i < 10; i++){
        cout << list[i] << "\n";
    }
    return 0;
}


void my_sort(int list[], int n){

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(list[j] > list[j+1]){
                int tmp;
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
}