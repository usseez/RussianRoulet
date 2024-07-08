#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 20
#define HEIGHT 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//별그리기 : printf와 반복분 사용해서 5, 6, 7뿔이 있는 별

//미로 탈출 : 콘솔에 20*20map을 그린다 -> 길은 임의로 만든다(내 맘대로 fix) -> 0.5s마다 한 칸씩 움직여서 탈출하도록(랜덤으로 움직여서 탈출하도록.............ㅠㅠ) 움직임을 보여줘라
//빈칸이 길, 문자가 벽

int russianroulet(void);



//int* 
//void make_map(int wall[][WIDTH]) {//배열로 S ㅁㅁㅁㅁ ...ㅁㅁㅁㅁQ 20*20으로 제작하고 출력하기

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
