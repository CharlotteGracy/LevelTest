// Âü°í: https://ko.wikipedia.org/wiki/%ED%94%BC%EB%B3%B4%EB%82%98%EC%B9%98_%EC%88%98


#include <iostream>

using namespace std;


int Fibonacci(int index) {
	if (index == 0) {
		return 0;
	}
	else if (index == 1) {
		return 1;

	}
	else {
		return Fibonacci(index - 2) + Fibonacci(index - 1);
	}


}


int main() {
	cout << Fibonacci(5) << endl;
}

