#include <iostream>
using namespace std;

void selection_sort(int list[], int n);

int main(){
    int list[100];
    int n;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    selection_sort(list, n);

    for(int i = 0; i < n; i++){
        cout << list[i] << " ";
    }
}

void selection_sort(int list[], int n){
    int i, j, min, t;

    for(i = 0; i < n; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        t = list[i];
        list[i] = list[min];
        list[min] = t;
    }
}