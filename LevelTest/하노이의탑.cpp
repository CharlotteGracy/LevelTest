#include <iostream>
#include <vector>
#include <string>
using namespace std;


/*
n개의 원반이 있을때

1 2 3의 기둥이 있고 기둥1에 원반이 있으면
1부터 n-1까지의 원반을 기둥2에 옮긴 후
n 원반을 3에 옮기고 1부터 n-1까지의 원반을 n 원반의 위로 옮긴다

재귀함수가 되는 과정
n원반을 옮기고 나면
n-1원반을 n 원반의 위(기둥3)로 올리고
1부터 n-2 원반들을 기둥1로 옮긴다.
이때 Hanoi(n)은 Hanoi(n-1)을 참조하게 된다



*/ 

vector<int> hole1;
vector<int> hole2;
vector<int> hole3;


void move(int n, int stick1, int stick2) {
	//string explanation = n + "번 원반을" + stick1 + "에서 " + stick2 + "로 이동";

	cout << n << "번 원반을 " << stick1 << "에서 " << stick2 << "로 이동 " << endl;

}

void Hanoi(int n, int startStick, int aimedStick, int middlestick) {
	if (n == 1) {
		move(1, startStick, aimedStick);
		
	}
	else {
		Hanoi(n - 1, startStick, middlestick, aimedStick);
		move(n, startStick, aimedStick);
		Hanoi(n - 1, middlestick, aimedStick, startStick);
		return;
	}
}


int main() {
	int a;
	cout << "원반 개수를 입력하세요: ";
	cin >> a;

	Hanoi(a, 1, 3, 2);
}
