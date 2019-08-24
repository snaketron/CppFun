//============================================================================
// Name        : MatrixOperations.cpp
// Author      : SK
// Version     :
// Copyright   : GTK3
// Description : Matrix multiplication
//============================================================================

#include <iostream>
#include <limits>
//#include "Limits.cpp"
using namespace std;


void mylimit () {
	std::cout << "size of long " << sizeof(1L) << '\n';
	std::cout << "size of long long " << sizeof(1LL) << '\n';

	std::cout << "min int == " << std::numeric_limits<int>::min() << '\n';
	std::cout << "max int == " << std::numeric_limits<int>::max() << '\n';

	std::cout << "min float == " << std::numeric_limits<float>::min() << '\n';
	std::cout << "max float == " << std::numeric_limits<float>::max() << '\n';

	std::cout << "min double == " << std::numeric_limits<double>::min() << '\n';
	std::cout << "max double == " << std::numeric_limits<double>::max() << '\n';

	std::cout << "min char == " << std::numeric_limits<char>::min() << '\n';
	std::cout << "max char == " << std::numeric_limits<char>::max() << '\n';

	std::cout << "min long == " << std::numeric_limits<long>::min() << '\n';
	std::cout << "max long == " << std::numeric_limits<long>::max() << '\n';

	std::cout << "min long long == " << std::numeric_limits<long long>::min() << '\n';
	std::cout << "max long long == " << std::numeric_limits<long long>::max() << '\n';
}


int main() {
	char c = '0';
	cout << sizeof(int(c)) << endl; // prints !!!Hello World!!!

	mylimit();

	return 0;
}
