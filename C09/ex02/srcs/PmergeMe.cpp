
#include "../headers/PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv) {
	int tmp;

	argv++;
	while(*argv) {
		tmp = toInt(*argv);
		if (tmp < 0) {
			std::cout << RED << BLINK << "Unexpected negative values detected." << NRM << std::endl;
			return ;
		}
		vStorage.push_back(tmp);
		dStorage.push_back(tmp);
		argv++;
	}
	if (vStorage.size() <= 1)
		std::cout << RED << BLINK << "Insufficient data for sorting." << NRM << std::endl;;
}

void PmergeMe::mergeSTLS(void) {
	{
		system("clear");
		std::cout << CYAN << "Before Sorting: " << NRM << vStorage << std::endl;
		struct timeval start_time, end_time;
		gettimeofday(&start_time, NULL);
		vectorSort(vStorage);
		gettimeofday(&end_time, NULL);
		std::cout << CYAN << "After Sorting: " << NRM << vStorage << std::endl;
		long seconds = end_time.tv_sec - start_time.tv_sec;
		long microseconds = end_time.tv_usec - start_time.tv_usec;
		if (microseconds < 0) {
			microseconds += 1000000;
			seconds--;
		}
		double elapsedMicroseconds = (seconds * 1000000) + microseconds;
		std::cout << CYAN << "Elapsed time for Vector Sort: " << NRM << elapsedMicroseconds << " μs" << std::endl;
		//std::cout << CYAN << "Is the Vector Sorted? " << NRM << isSorted(vStorage) << std::endl;
	} {
		struct timeval start_time, end_time;
		gettimeofday(&start_time, NULL);
		dequeSort(dStorage);
		gettimeofday(&end_time, NULL);
		long seconds = end_time.tv_sec - start_time.tv_sec;
		long microseconds = end_time.tv_usec - start_time.tv_usec;
		if (microseconds < 0) {
			microseconds += 1000000;
			seconds--;
		}
		double elapsedMicroseconds = (seconds * 1000000) + microseconds;
		std::cout << CYAN << "Elapsed time for Deque Sort: " << NRM << elapsedMicroseconds << " μs" << std::endl;
		//std::cout << CYAN << "Is the Deque Sorted? " << NRM << isSorted(dStorage) << std::endl;
	}
}

void PmergeMe::vectorSort(std::vector<int>& data) {
	if(data.size() == 1)
		return ;
	int mid = data.size() / 2;
	std::vector<int> left(data.begin(), data.begin() + mid);
	std::vector<int> right(data.begin() + mid, data.end());
	vectorSort(left);
	vectorSort(right);
	mergeVectorSort(left, right, data);

}

void PmergeMe::mergeVectorSort(std::vector<int>& left, std::vector<int>& right, std::vector<int>& final) {
	size_t i = 0, iLeft = 0, iRight = 0;
	while(iLeft < left.size() && iRight < right.size()) {
		if (left[iLeft] < right[iRight])
			final[i++] = left[iLeft++];
		else
			final[i++] = right[iRight++];
	}
	while(iLeft < left.size())
		final[i++] = left[iLeft++];
	while(iRight < right.size())
		final[i++] = right[iRight++];
}

void PmergeMe::dequeSort(std::deque<int>& data) {
	if(data.size() == 1)
		return ;
	int mid = data.size() / 2;
	std::deque<int> left(data.begin(), data.begin() + mid);
	std::deque<int> right(data.begin() + mid, data.end());
	dequeSort(left);
	dequeSort(right);
	mergeDequeSort(left, right, data);

}

void PmergeMe::mergeDequeSort(std::deque<int>& left, std::deque<int>& right, std::deque<int>& final) {
	size_t i = 0, iLeft = 0, iRight = 0;
	while(iLeft < left.size() && iRight < right.size()) {
		if (left[iLeft] < right[iRight])
			final[i++] = left[iLeft++];
		else
			final[i++] = right[iRight++];
	}
	while(iLeft < left.size())
		final[i++] = left[iLeft++];
	while(iRight < right.size())
		final[i++] = right[iRight++];
}

int PmergeMe::toInt(const std::string& str) {
	std::stringstream ss(str);
	int num;
	ss >> num;
	return (num);
}

template <typename T> std::string PmergeMe::isSorted(T& container) {
	typename T::iterator current = container.begin();
	typename T::iterator next = container.begin();
	next++;
	while (next != container.end()) {
		if (*current > *next)
			return ("False");
		current++;
		next++;
	}
	return("True");
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& values) {
	os << "[";
	for (size_t i = 0; i < values.size(); ++i) {
		os << values[i];
		if (i < values.size() - 1) {
			os << ", ";
		}
	}
	os << "]";
	return (os);
}
