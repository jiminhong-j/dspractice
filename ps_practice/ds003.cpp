#include <iostream>
using namespace std;

int main(){
    int month, day;
    int count = 0;

    cin >> month >> day;
    
    for(int i = 1; i < month; i++){
        if(i == 2) count += 28;
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            count += 30;
        }
        else {
            count += 31;
        }
    }

    count += day;

    cout << count << endl;

    return 0;
}