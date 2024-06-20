
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

template <typename T> void swap(T& one, T& two) {
	T temp;
	temp = one;
	one = two;
	two = temp;
}

template <typename T> T min(T& one, T& two) {
	if(one < two)
		return (one);
	if (one == two)
		return (two);
	else
		return (two);
}

template <typename T> T max(T& one, T& two) {
	if(one > two)
		return (one);
	if (one == two)
		return (two);
	else
		return (two);
}

#endif //WHATEVER_HPP
