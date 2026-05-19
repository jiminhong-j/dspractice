#include <iostream>
using namespace std;

int value(char c){
    if(c == 'I') return 1;
    else if(c == 'V') return 5;
    else if(c == 'X') return 10;
    else if(c == 'L') return 50;
    else if(c == 'C') return 100;
    else if(c == 'D') return 500;
    else if (c == 'M') return 1000;

    return 0;
}

int main(){

    string str;
    int count = 0;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        count += value(str[i]);
    }

    cout << count << endl;

    return 0;
}