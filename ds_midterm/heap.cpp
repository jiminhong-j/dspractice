class element {
public:
	string name;
	double score; // Key
	void set_data(string n, double s);
};

void element::set_data(string n, double s)
{
	name = n;
	score = s;
}

#define HSIZE 100
class my_heap {
	element h[HSIZE];
	int csize; // 현재 원소의 개수
public:
	my_heap();
	int h_size();
	void insert_heap(element t);
	element delete_heap();
	bool heap_full();
	bool heap_empty();
};

my_heap::my_heap()
{
	csize = 0;
}

bool my_heap::heap_empty()
{
	// return (csize == 0);
	if(cisze == 0)
		return true;
	else
		return false;
}

bool my_heap::heap_full()
{
	// return (csize >= HSIZE - 1);
	if (csize >= HSIZE - 1)
		return true;
	else
		return false;
}

int my_heap::h_size()
{
	return csize;
}