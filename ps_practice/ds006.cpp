#include <iostream>
#include <string>
using namespace std;

struct Subject {
    string name;
    int credit;
    int score;
    string grade;
};

int main(){

    int n = 3;

    Subject s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].credit >> s[i].score; 
    }



    return 0;
}