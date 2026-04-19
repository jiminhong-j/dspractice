#include <iostream>
using namespace std;


class weight {
    private:
        int kg;
        int g;
    public:
        void set_weight(int n1, int n2);
        int get_weight();
};

weight add_weight(weight w1, weight w2);
bool less_than(weight w1, weight w2);

int main(){
    weight w1, w2, w3;
    w1.set_weight(3, 400);
    w2.set_weight(2, 700);
    w3 = add_weight(w1, w2);

    cout << w3.get_weight() << " grams\n";

    if(less_than(w1, w2))
        cout << "yes.\n";
    else
        cout << "no.\n";
}

void weight::set_weight(int n1, int n2){
    kg = n1 + n2 / 1000;
    g = n2 % 1000;
}

weight add_weight(weight w1, weight w2){
    weight tmp;
    tmp.set_weight(0, w1.get_weight() + w2.get_weight());
    return tmp;
}

int weight::get_weight(){
    return kg * 1000 + g;
}

bool less_than(weight w1, weight w2){
    return w1.get_weight() < w2.get_weight();
}