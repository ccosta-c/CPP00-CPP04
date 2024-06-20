
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
  private:
	unsigned int _size;
	T *elements;
  public:
	Array();
	Array(unsigned int size);
	Array(Array<T>& copy);
	~Array();
	unsigned int size();
	T& operator[](unsigned int i);
	Array<T>& operator=(T& data);

	class OutOfBounds : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("INDEX OUT OF BONDS");
		}
	};
};

#endif //ARRAY_HPP
