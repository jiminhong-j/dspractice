#include <iostream>
using namespace std;

class Student {
    private:
        double getAvg() const;

    public:
        string name;
        string sid;
        int *score;
        void print() const {
            cout << "[" << sid << "] " << name << endl;
            printf("The Average score is %.1f\n", getAvg());
        }
};

double Student::getAvg() const{

    int n = 3;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += score[i];
    }

    return (double)sum / n;
}

int main(){

    Student s1;
    int n = 3;
    s1.score = new int[n];

    cin >> s1.sid;
    
    for(int i = 0; i < n; i++){
        cin >> s1.score[i];
    }

    cin.ignore();
    getline(cin, s1.name);

    s1.print();

    delete[] s1.score;
    return 0;
}