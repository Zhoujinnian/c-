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
	int show()
	{
		return a+b;
	}
};

int main()
{
	//unique_ptr<A> p1(new A(5,6));
	unique_ptr<A>p1 = make_unique<A>(5,6);
	cout << p1->show()<< endl;

}