#include <iostream>
#include <iterator>
#include <vector>

std::vector<int> countBits(int n) {
	std::vector<int> res(n);
	int i = 1;
	
	res.push_back(0);
	while (i <= n) {
		res[i] = res[i / 2] + i % 2;
		++i;
	}
	return res;
}

int main() {
	std::vector<int> arr = countBits(123);
	std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, "\n"));
}