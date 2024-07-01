
#include "../headers/Span.hpp"

Span::Span() : MaximumStorage(0) {}

Span::Span(unsigned int N) : MaximumStorage(N) {}

Span::Span(Span &copy) : MaximumStorage(copy.getMaximumStorage()), NumbersStorage(copy.NumbersStorage){}

Span &Span::operator=(const Span &values) {
	if(this != &values) {
		NumbersStorage = values.NumbersStorage;
		MaximumStorage = values.getMaximumStorage();
	}
	return (*this);
}

Span::~Span() {}

unsigned int Span::getMaximumStorage() const {
	return(MaximumStorage);
}

std::vector<int>& Span::getVector() {
	return (NumbersStorage);
}

void Span::addNumber(int num) {
	if(NumbersStorage.size() < MaximumStorage)
		NumbersStorage.push_back(num);
	else
		throw ExceededMaximumStorage();
}

int Span::shortestSpan() {
	int shortest =  std::max(NumbersStorage.at(0), NumbersStorage.at(1)) - std::min(NumbersStorage.at(0), NumbersStorage.at(1));
	int tmp = 0;
	if(NumbersStorage.size() <= 1) {
		throw NotEnoughNumbers();
	}
	std::sort(NumbersStorage.begin(), NumbersStorage.end());
	for (std::vector<int>::iterator it = NumbersStorage.begin(); it != NumbersStorage.end() - 1; ++it) {
			tmp = std::max(*it, *(++it)) - std::min(*--it, *++it);
			it--;
			if (tmp < shortest && tmp != 0) {
				std::cout << std::max(*it, *(++it)) << " - " << std::min(*--it, *++it) << " = " << tmp <<std::endl;
				shortest = tmp;
			}
	}
	return (shortest);
}

int Span::longestSpan() {
	return (*std::max_element(NumbersStorage.begin(), NumbersStorage.end()) - *std::min_element(NumbersStorage.begin(), NumbersStorage.end()));
}

void Span::randomNumbers(unsigned int quantity) {
	srand((unsigned) time(NULL));

	for (unsigned int i = 0; i < quantity; ++i) {
		if(NumbersStorage.size() >= MaximumStorage)
			throw ExceededMaximumStorage();
		addNumber(rand());
	}
}

std::ostream& operator<<(std::ostream& os, std::vector<int>& vector) {
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it) {
		os << *it << " ";
	}
	return (os);
}
