#include <iostream>
#include <string>

using namespace std;


int main() {
	std::string One = "3.1415923565798932384";
	std::string Two = "hello 4";
	std::string Three = "17";

	float numOne = std::stof(One);
	int numTwo = std::stoi(Two);
	double numThree = std::stod(Three);

	cout << numOne << endl;
	cout << numTwo << endl;
	cout << numThree << endl;
	return 0;
}
