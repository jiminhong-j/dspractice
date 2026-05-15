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
    // 합계
    double avg;
    
}

int main(){



    return 0;
}