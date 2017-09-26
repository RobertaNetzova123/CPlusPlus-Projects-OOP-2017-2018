#include<iostream>
#include<string>

using namespace std;

int main() {

	int sum = 0, value = 0;
	while (cin >> value) {
		if (cin.eof()) {
			cout << "Format error." << endl;
			break;
		}
		sum += value;
	}
	std::cout << "Sum is " << sum << endl;
	getchar();
	return 0;
}
