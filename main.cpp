#include <stdio.h>
#include "Stack.h"

void prnMenu()
{
	cout << "*******************************************" << '\n';
	cout << "* 1. 삽입    2. 삭제    3. 출력   4. 종료 *" << '\n';
	cout << "*******************************************" << '\n';
	cout << '\n';
	cout << "원하시는 메뉴를 골라주세요: ";
}

int main()
{
	int mode, selectNumber;
	double tmpItem;
	LinkedList<double> *p;
	bool flag = false;

	cout << "자료구조 선택(1: Stack, Other: Linked List): ";
	cin >> mode;

	if (mode == 1)
		p = new Stack<double>(); // 정수를 저장하는 스택

	else
		p = new LinkedList<double>();

	do
	{
		prnMenu();
		cin >> selectNumber;

		switch (selectNumber)
		{
		case 1:
			cout << "원하시는 값을 입력해주세요: ";
			cin >> tmpItem;
			p->Insert(tmpItem);
			cout << tmpItem << "가 삽입되었습니다." << '\n';
			break;

		case 2:
			if (p->Delete(tmpItem) == true)
				cout << tmpItem << "가 삭제되었습니다." << '\n';

			else
				cout << "비어있습니다. 삭제 실패" << '\n';
			break;

		case 3:
			cout << "크기: " << p->GetSize() << '\n';
			p->Print();
			break;

		case 4:
			flag = true;
			break;

		default:
			cout << "잘못 입력하셨습니다." << '\n';
			break;
		}

		if (flag)
			break;

	} while (1);

	return 0;
}
