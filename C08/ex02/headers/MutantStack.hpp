
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <vector>
# include <list>

template < typename T, typename Container = std::deque<T> > class MutantStack : public std::stack<T, Container> {
  public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator constIterator;

	MutantStack() : std::stack<T, Container>() {};
	MutantStack(Container& copy) : std::stack<T, Container>() {
		*this = copy;
	}
	MutantStack& operator=(Container& data) {
		if(this != &data)
			std::stack<T, Container>::operator=(data);
		return (this);
	}
	~MutantStack(){}

	iterator begin() {
		return this->c.begin();
	};
	iterator end() {
		return this->c.end();
	};
	constIterator cbegin() const {
		return this->c.cbegin();
	};
	constIterator cend() const {
		return this->c.cend();
	};
};

#endif
