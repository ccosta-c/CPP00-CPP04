
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>
# include "data.hpp"

class Serializer {
  private:
	Serializer();
	Serializer(Serializer &copy);
	~Serializer();
	Serializer &operator=(const Serializer &values);
  public:

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
