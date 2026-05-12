#include <iostream>
using namespace std;

class weight {
    private:
        int kg, gram;
    
    public:
        void set_weight(int n1, int n2);
        int get_weight();
        bool is_heavy();
        void add_grams(int a);
};

void weight::set_weight(int n1, int n2)
{
    kg = n1 + n2 / 1000;
    gram = n2 % 1000;
}

int weight::get_weight()
{
    return kg * 1000 + gram;
}

bool weight::is_heavy()
{
    return get_weight() >= 10000;
}

void weight::add_grams(int a)
{
    gram += a;
    kg += gram / 1000;
    gram = gram % 1000;
}

weight add_weight(weight w1, weight w2)
{
    weight tmp;
    tmp.set_weight(0, w1.get_weight() + w2.get_weight());

    return tmp;
}

int main()
{
    weight w1, w2, w3;
    w1.set_weight(12, 800);
    if(w1.is_heavy())
        cout << "Heavy.\n";
    else
        cout << "Light.\n";
    w2.set_weight(2, 900);
    w2.add_grams(500);
    w3 = add_weight(w1, w2);
    cout << w3.get_weight() << " grams\n";
}