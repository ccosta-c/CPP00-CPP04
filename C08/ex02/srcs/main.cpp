
#include "../headers/MutantStack.hpp"

//int main(void)
//{
//	int Temp[] = {4, 67, -456, 1};
//	std::vector<int> VectorTest(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));
//
//	MutantStack<int, std::vector<int> > test(VectorTest);
//	//std::cout << VectorTest.front();
//}

#include <list>

int main() {
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	//std::stack<int> s(mstack);
}
