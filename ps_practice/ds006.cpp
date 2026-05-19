#include <iostream>
#include <string>
using namespace std;

struct Subject {
    string name;
    int credit;
    int score;
    string grade;
    double point;
};

int main(){

    int n = 3;

    Subject s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].credit >> s[i].score; 

        if(s[i].score >= 95) {
            s[i].grade = "A+";
            s[i].point = 4.5;
        }
        else if(s[i].score >= 90) {
            s[i].grade = "A0";
            s[i].point = 4.0;
        }
        else if(s[i].score >= 85) {
            s[i].grade = "B+";
            s[i].point = 3.5;
        }
        else if(s[i].score >= 80) {
            s[i].grade = "B0";
            s[i].point = 3.0;
        }
        else if(s[i].score >= 75) {
            s[i].grade = "C+";
            s[i].point = 2.5;
        }
        else if(s[i].score >= 70) {
            s[i].grade = "C0";
            s[i].point = 2.0;
        }
        else if(s[i].score >= 65) {
            s[i].grade = "D+";
            s[i].point = 1.5;
        }
        else if(s[i].score >= 60) {
            s[i].grade = "D0";
            s[i].point = 1.0;
        }
        else {
            s[i].grade = "F";
            s[i].point = 0.0;
        }
    }



    return 0;
}