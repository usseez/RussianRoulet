#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 20
#define HEIGHT 20
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//紺益軒奄 : printf人 鋼差歳 紫遂背辞 5, 6, 7市戚 赤澗 紺

//耕稽 纏窒 : 嬬車拭 20*20map聖 益鍵陥 -> 掩精 績税稽 幻窮陥(鎧 絃企稽 fix) -> 0.5s原陥 廃 牒梢 崇送食辞 纏窒馬亀系(沓棋生稽 崇送食辞 纏窒馬亀系.............ばば) 崇送績聖 左食操虞
//朔牒戚 掩, 庚切亜 混

int russianroulet(void);



//int* 
//void make_map(int wall[][WIDTH]) {//壕伸稽 S けけけけ ...けけけけQ 20*20生稽 薦拙馬壱 窒径馬奄

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
