#include <iostream>
#include <string>

using namespace std;

class node {
    public:
        string name;
        double score;
        node *link;
        void set_data(string s, double n);
};

void node::set_data(string s, double n)
{
    name = s;
    score = n;
}

class my_list {
    node *head, *tail;

    public:
        my_list();
        void add_to_head(node t);
        void add_to_tail(node t);
        node delete_from_head();
        int num_nodes();
        double score_sum();
        double get_score(string tname);
        int remove_a_node(string tname);
};

my_list::my_list()
{
    head = NULL;
    tail = NULL;
}

void my_list::add_to_head(node t)
{
    node *p;
    p = new node;

    (*p) = t;

    p->link = head;
    head = p;

    if(tail == NULL){
        tail = p;
    }
}

void my_list::add_to_tail(node t)
{
    node *p;
    p = new node;

    (*p) = t;

    p->link = NULL;

    if(tail != NULL){
        tail->link = p;
    }
    else {
        head = p;
    }
    tail = p;
}

node my_list::delete_from_head()
{
    node temp;
    node *t;

    t = head;
    temp = *head;

    head = head->link;
    delete t;
    
    if(head == NULL)
        tail = NULL;

    return temp;
}

int my_list::num_nodes()
{
    int count = 0;
    node *t;

    for(t = head; t != NULL; t = t->link){
        count++;
    }

    return count;
}

double my_list::score_sum()
{
    double sum = 0;
    node *t;

    for(t = head; t != NULL; t = t->link){
        sum += t->score;
    }

    return sum;
}

double my_list::get_score(string tname)
{
    node *p;
    double s = -1.0;

    for(p = head; p != NULL; p = p->link){
        if(p->name == tname){
            s = p->score;
            break;
        }
    }

    return s;
}

int my_list::remove_a_node(string tname)
{
    node *target, *prev;
    prev = NULL;
    target = head;

    while((target != NULL) && (target->name != tname))
    {
        prev = target;
        target = target->link;
    }
    if(target == NULL)
    {
        return 0;
    }
    if(prev != NULL){
        prev->link = target->link;
    } else {
        head = target->link;
    }
    delete target;
    return 1;
} 

int main()
{
    my_list a;
    node tmp;

    tmp.set_data("Kim", 83.5);
    a.add_to_head(tmp);

    tmp.set_data("Lee", 78.2);
    a.add_to_head(tmp);      // head 위치로 2개의 원소 추가

    cout << a.num_nodes() << " : " << a.score_sum() << "\n";   // 1단계 점검

    tmp.set_data("Park", 91.3);
    a.add_to_tail(tmp);      // tail 위치로 1개의 원소 추가

    cout << a.num_nodes() << " : " << a.score_sum() << "\n";   // 2단계 점검

    tmp = a.delete_from_head();

    cout << tmp.name << " is deleted.\n";   // 3단계 점검

    tmp.set_data("Choi", 85.1);
    a.add_to_tail(tmp);

    tmp.set_data("Ryu", 94.3);
    a.add_to_head(tmp);      // 2개의 원소 추가

    cout << a.num_nodes() << " : " << a.score_sum() << "\n";

    cout << "Park's score : " << a.get_score("Park") << "\n";   // 4단계 점검

    if (a.remove_a_node("Kim") == 1)
        cout << "Kim is deleted from the list.\n";   // 5단계 점검

    cout << a.num_nodes() << " : " << a.score_sum() << "\n";   // 최종 점검

    return 0;
}