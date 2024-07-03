
#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <algorithm>
# include <iostream>
# include <time.h>
# include <cstdlib>
# include <iterator>

class Span {
  private:
	unsigned int MaximumStorage;
	std::vector<int> NumbersStorage;
  public:
	Span();
	Span(unsigned int N);
	Span(Span &copy);
	Span &operator=(const Span &values);
	~Span();

	unsigned int getMaximumStorage() const;
	std::vector<int>& getVector() ;

	void addNumber(int num);

	template <typename Ite> void addNumbersBulk(Ite first, Ite last) {
		if ((unsigned int)std::distance(first, last) > MaximumStorage - (unsigned int)NumbersStorage.size())
			throw ExceededMaximumStorage();
		NumbersStorage.insert(NumbersStorage.begin(), first, last);
	}

	void randomNumbers(unsigned int quantity);
	int shortestSpan();
	int longestSpan();

	class ExceededMaximumStorage : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("There's no more space!");
		}
	};
	class NotEnoughNumbers : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("There's no sufficient numbers to perform that operation.");
		}
	};
};

std::ostream& operator<<(std::ostream& os, std::vector<int>& vector);

#endif
