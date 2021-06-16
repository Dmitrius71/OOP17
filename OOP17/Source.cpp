#include <iostream>
#include"Queue.h"
#include"Stack.h"

using namespace std;
using namespace stack;
using namespace queue;


class First
{
protected:
	int value;
	typedef int ValueType;
public:
	virtual void func(int) { std::cout << "First::func\n"; }
	void func2(char) { std::cout << "First::func2\n"; }
	void func3(int) { std::cout << "First::func3\n"; }
};

class Second :public First
{

public:

	using First::value;
	void func(int) { std::cout << "Second::func\n"; }

	using First::func2;
	void func2(int) { std::cout << "Second::func2\n"; }

	void func3(int) { std::cout << "Second::func3\n"; }
};


int main()
{

	Second second;
	First& first = second; // полиморфизм
	//First first = second;
	first.func(1);
	second.func(1);
	
	second.func2(1);
	second.func2('1');

	first.func3(1);
	second.func3(1);

	second.value = 10;



	pprint();
	show();
	queue::push();

	return 0;
}