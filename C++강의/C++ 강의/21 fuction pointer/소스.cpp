#include <stdio.h>	

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int main() {


	int(*pfunc[2])(int, int);
	pfunc[0] = add;
	pfunc[1] = sub;

	//int(*func)(int, int);// 敗呪 匂昔斗
	// 敗呪亀 五乞軒拭 煽舌吉陥.
	//int add虞澗 敗呪研 幻級檎 戚 敗呪税 坪球亜 五乞軒拭 旋仙吉陥.
	//戚 敗呪誤精 add敗呪亜 旋仙吉 五乞軒税 爽社 葵聖 握澗陥.
	/*
	* 五乞軒拭 旋仙鞠醸生艦 五乞軒拭 是帖廃 敗呪税 爽社 葵聖 戚遂拝 呪 赤走
	*/

	//int(*pfunc)(int, int);

	//// 軒渡 int 古鯵痕呪 int2 鯵昔 敗呪税 匂昔斗 痕呪. 戚 匂昔斗 痕呪拭 爽社葵聖 煽舌拝 呪 赤澗 依精 搾汁廃 莫殿税 敗呪幻 亜管馬陥. 
	//pfunc = add;

	//printf("%d", pfunc(20, 30));

	// 戚群暗檎 益撹 床澗惟 慨走 省焼????????????????????????
	//敗呪 匂昔斗研 床檎 敗呪研 古鯵痕呪稽 紫遂拝 呪 赤陥. 

	int inputvalue = 0;
	int a = 20;
	int b = 30;
	printf("機疾精 1, 錆疾精 2研 脊径馬室推 : ");
	scanf_s("%d", &inputvalue);
	printf("%d + %d = %d", a, b, pfunc[inputvalue](a,b));
	//せせせ 鯵走鍵陥. 惟績 辞獄 幻級凶 戚係惟 紫遂廃陥(鳶填....坦軒(1腰戚 巷崎 2腰戚 辰特 3腰戚 嬢澱背辞
	//糎蟹 切政稽酔檎辞 差説馬檎辞.せせせせせせ

	//switch (inputvalue) {
	//case 1:
	//{
	//	printf("%d + %d = %d", a, b, calculator(add, a, b));

	//}
	//break;

	//case 2:
	//{
	//	printf("%d - %d = %d", a, b, calculator(sub, a, b));
	//}
	//break;

	//default :
	//{

	//
	//}
	//break;


	//}
	/*
	* 敗呪研 古鯵痕呪稽 隔澗陥?
	* 
	* 
	* 
	* 陥掻 什傾球拭辞 馬蟹税 什傾球亜 拙穣戚 魁蟹檎 硝形含虞壱 馬澗 縦生稽 callback馬澗 敗呪研 敗呪 匂昔斗稽 穿含
	*/

	return 0;
}