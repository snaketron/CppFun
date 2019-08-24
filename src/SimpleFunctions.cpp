#include <iostream>
using namespace std;



int getIntegral(int min_x, int max_x) {
	if(min_x >= max_x) {
		return (0);
	}
	int integral_x;
	for(int i = min_x; i <= max_x; i++) {
		integral_x += integral_x + 1;
	}

	return (integral_x);
}


int main2() {
	int integral_x = getIntegral(1, 10);
	std::cout << integral_x << std::endl;
	return 0;
}
