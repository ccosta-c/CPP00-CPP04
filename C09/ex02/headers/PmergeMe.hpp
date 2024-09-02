
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"
# define BLINK "\033[5m"

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <sys/time.h>
# include <vector>
# include <deque>
# include <iterator>
# include <limits>

class PmergeMe {
  private:
	std::vector<int> vStorage;
	std::deque<int> dStorage;
  public:
	PmergeMe(char **argv);
	PmergeMe(PmergeMe &copy);
	PmergeMe &operator=(const PmergeMe &values);
	//~PmergeMe();

	int toInt(const std::string& str);
	void mergeSTLS(void);
	void vectorSort(std::vector<int>& data);
	void mergeVectorSort(std::vector<int>& left, std::vector<int>& right, std::vector<int>& final);
	void dequeSort(std::deque<int>& data);
	void mergeDequeSort(std::deque<int>& left, std::deque<int>& right, std::deque<int>& final);
	template <typename T> std::string isSorted(T& container);
};

std::ostream& operator<<(std::ostream& os, const std::vector<int>& values);

#endif
