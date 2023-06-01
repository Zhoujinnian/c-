#include<iostream>

using namespace std;

class A
{
	int a;
	int b;
public:
	A(int a,int b) {
		this->a = a;
		this->b = b;
	}
	~A()
	{
		cout << "½áÊø" << endl;
	}
	int show()
	{
		return a+b;
	}
};

int main()
{
	//unique_ptr ¶¨Òå£º
	
	//unique_ptr<A> p1(new A(5,6));
	unique_ptr<A>p1 = make_unique<A>(5, 6);
	//unique_ptr<A>p2 = make_unique<A>(5,0);

	cout << p1->show() << endl;
	//p2 = move(p1);
	////cout << p1->show() << endl;
	//cout << p2->show() << endl;
}