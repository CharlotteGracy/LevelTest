#include <iostream>
#include <vector>
#include <string>
using namespace std;


/*
n���� ������ ������

1 2 3�� ����� �ְ� ���1�� ������ ������
1���� n-1������ ������ ���2�� �ű� ��
n ������ 3�� �ű�� 1���� n-1������ ������ n ������ ���� �ű��

����Լ��� �Ǵ� ����
n������ �ű�� ����
n-1������ n ������ ��(���3)�� �ø���
1���� n-2 ���ݵ��� ���1�� �ű��.
�̶� Hanoi(n)�� Hanoi(n-1)�� �����ϰ� �ȴ�



*/ 

vector<int> hole1;
vector<int> hole2;
vector<int> hole3;


void move(int n, int stick1, int stick2) {
	//string explanation = n + "�� ������" + stick1 + "���� " + stick2 + "�� �̵�";

	cout << n << "�� ������ " << stick1 << "���� " << stick2 << "�� �̵� " << endl;

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
	cout << "���� ������ �Է��ϼ���: ";
	cin >> a;

	Hanoi(a, 1, 3, 2);
}
