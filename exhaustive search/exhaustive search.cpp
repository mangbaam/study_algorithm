#include <iostream>
using namespace std;

int count_down(int second) {
	if (second == 0)
		return 0;
	else {
		cout << second << "�� ";
		count_down(second - 1);
	}
}

int main() {
	count_down(3);

	return 0;
}