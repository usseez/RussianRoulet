#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 20
#define HEIGHT 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//���׸��� : printf�� �ݺ��� ����ؼ� 5, 6, 7���� �ִ� ��

//�̷� Ż�� : �ֿܼ� 20*20map�� �׸��� -> ���� ���Ƿ� �����(�� ����� fix) -> 0.5s���� �� ĭ�� �������� Ż���ϵ���(�������� �������� Ż���ϵ���.............�Ф�) �������� �������
//��ĭ�� ��, ���ڰ� ��

int russianroulet(void);



//int* 
//void make_map(int wall[][WIDTH]) {//�迭�� S �������� ...��������Q 20*20���� �����ϰ� ����ϱ�

int main(int argc, char* argv[]) {
	russianroulet();

	return 0;

}


int russianroulet() {

	int num;

	char person1 = 'A';
	char person2 = 'B';

	char dead = person1;
	int stage = 1;
	int bullet;


	printf("put the number(5~10) : ");
	scanf_s("%d", &num);

	if ((num < 5) | (num > 10))
	{
		printf("Wrong number please try it again(5~10)");
		return -1;
	}

	bullet = time(NULL) % num;

	//int bullet = srand() % num;





	while (stage != bullet) {

		if (stage % 2 != 0) printf("stage : %d, %c alive\n", stage, person1);
		else printf("stage : %d, %c alive\n", stage, person2);

		stage++;


	}
	if (stage == bullet) {

		if (bullet % 2 != 0) dead = person1;
		else dead = person2;
		printf("stage : %d, %c dead\n", stage, dead);

	}
	printf("The bullet was in %d\n", bullet);


	return 0;
}
