
#include "../headers/easyfind.hpp"

int main(void)
{
	int Temp[] = {4, 67, -456, 1};
	std::vector<int> VectorTest(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));

	std::cout << "Usage in a vector: " << NumbersGoogle(VectorTest, 1) << std::endl;

	std::deque<int> DequeTest(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));
	std::cout << "Usage in an deque: " << NumbersGoogle(DequeTest, 67) << std::endl;

	std::list<int> ListTest(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));
	std::cout << "Usage in a list: " << NumbersGoogle(ListTest, 67) << std::endl;

	std::set<int> SetTest(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));
	std::cout << "Usage in a set: " << NumbersGoogle(SetTest, 67) << std::endl;
}
