
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class Area {
  public:
	int length;
	int width;
	int area;
};

template <typename T> void toUpper(T& text) {
	for (int i = 0; i < static_cast<int>(text.length()); ++i) {
		text[i] = toupper(text[i]);
	}
}

template <typename T> void multiply(T& num) {
	num *= 10;
}

template <typename T> void areanizer(T& object) {
	object.area = object.length * object.width;
}

template <typename T> void iteration(T *array, int length, void (*function)(T&)) {
	for (int i = 0; i < length; ++i) {
		function(array[i]);
	}
}

#endif //ITER_HPP
