#include <iostream>
#include <fstream>
#include <string>
#include "person.h"
using namespace std;

//	�� ������ �ذ����� ������, �ش� �������� commit �� ��.
//	commit �޽����� �����Ӱ� �ص� �˴ϴ�.

int main()
{
	//	1��
	/*
	#include <iostream>
#include <ctime>
using namespace std;

void swap(int* a);

int main()
{
	srand(unsigned int(time(NULL)));
	
	
	int *a = new int [100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % 100;
	}
	swap(a);
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
void swap(int* a)
{
	int temp;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}

*/
	//	0~99 ������ ������ ���� 100���� �����ϰ�, ������������ �����Ͽ� ����Ͻÿ�.
	//	��, ��� ������ int�� �����͸� ����� ��.
	

	//	2��
	//	���(Person)�� ��Ÿ�� Ŭ������ �ۼ��Ͻÿ�. Person.h, Person.cpp ������ ����� ������ ��.
	//	��� ����, �Լ��� public���� �����ϰ� �� ��.
	//	�������
	//		�̸�(name)			: string
	//		����(age)			: int
	//		���翩��(isAlive)	: bool
	//	����Լ�
	//		���ϱ�(talk)			: "Hello, world!"�� ����Ѵ�.
	//		���ڱ�(sleep)		: "zzz"�� ����Ѵ�.
	/*
	person ahu;
	ahu.age = 20;
	ahu.talk();
	ahu.isAlive = 1;
	*/

	//  3��
	//	�� ���� ���� �ý���
    //  �л�(student)�� ���� ����ü�� ���ð���(item)�� ���� ����ü�� �����.
    //
    //  list.txt ������ �о�鿩 main���� student* �����͸� �̿��Ͽ� �ο����� �����Ҵ�
    //  ���� ���ð��񺰷� subject�� ���� �����Ҵ��� �����Ѵ�.
    //  ���Ͽ��� ��� �����͸� �о��ٸ�
    //  �� ������ "�� �����ο�: 00��" �� ǥ���ϰ�,
    //  �л��̸�: �̸� / ���ð����: 0�� / ����1: 00, ����2: 00, ����3: 00 ...
    //  �� ���� �÷� ����Ѵ�.
    //
    //  �߰��� ���� �����Ϳ� �Ѹ� ���� �ֿܼ��� �߰��Ͽ�
	//  �� �����ο��� ���ο� �л��� ���� ������ ����ϴ� �ڵ带 ������ ��!
	//

	ifstream fff;
	fff.open("list.txt");
	struct subject {
		string itemName;
		int score;
	};
	struct student {
		string name;		// �л��̸�
		int subjectCount;	// ���ð����
		subject* pItem;	// ���� ���
	};
	student sa[6];
	cout << "�� �����ο�: 6" << endl;
	for (int i = 0; !fff.eof() ; i++)
	{
		fff >> sa[i].name >> sa[i].subjectCount;
		sa[i].pItem = new subject[sa[i].subjectCount];
		cout << "�л��̸�: " << sa[i].name << " / ���ð����: " << sa[i].subjectCount << "�� / ";
		for (int j = 0; j < sa[i].subjectCount; j++)
		{
			fff >> sa[i].pItem[j].itemName >> sa[i].pItem[j].score;
			cout << sa[i].pItem[j].itemName << ' ' << sa[i].pItem[j].score << ' ';
		}
		cout << endl;
	}





	//	4��
	/*���� ���� ������ֽŰͿ� �������� ��~!*/
	//	�����ڿ��� �ϰ���� ���� �����ÿ�.
	//	
	return 0;
}