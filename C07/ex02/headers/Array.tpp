
#include "Array.hpp"

template <class T> Array<T>::Array() {
	_size = 0;
	elements = new T[_size];
}

template <class T> Array<T>::Array(unsigned int size) {
	_size = size;
	elements = new T[_size];
	for (unsigned int i = 0; i < size; ++i) {
		elements[i] = 0;
	}
}

template <> Array<std::string>::Array(unsigned int size)
{
	_size = size;
	elements = new std::string[size];
	for (unsigned int i = 0; i < size; ++i) {
		elements[i] = "NULL";
	}
}

template <class T> Array<T>::Array(Array<T>& copy) {
	_size = copy.size();
	elements = new T[_size];
	for (unsigned int i = 0; i < _size; ++i) {
		elements[i] = copy[i];
	}
}

template<typename T> Array<T>::~Array() {
	delete[] elements;
}

template <class T> unsigned int Array<T>::size() {
	return (_size);
}

template <class T> T& Array<T>::operator[](unsigned int i) {
	if (i >= _size)
		throw OutOfBounds();
	else
		return (elements[i]);
}

template <class T> Array<T>& Array<T>::operator=(T& data) {
	if(this != data) {
		delete[] elements;
		_size = data.size();
		elements = new T[_size];
		for (int i = 0; i < _size; ++i) {
			elements[i] = data[i];
		}
	}
	return (*this);
}
