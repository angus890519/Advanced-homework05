/* 計算機概論實務-進階練習作業-作業5*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/20 15:31 */
/* 
ASCII碼 
十進位 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90
圖形    A  B  C  D  E  F  G  H  I  J  K  L M   N  O  P  Q  R  S  T  U  V  W  X  Y  Z
十進位 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122
圖形    a  b  c  d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z
*/ 
#include <stdio.h> //函示庫 
#include <stdlib.h> //函示庫
#include <math.h> //函示庫 
int convertBinaryToDecimal(long long b); //%lld 是格式化為長整型
int main() 
{
	char input; //選擇要哪一個轉換模式 
	int number; //輸入值
	printf("計算機概論實務-進階練習作業-作業5)\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/04/20 20:00\n");
	printf("-----------------------------------\n"); 
	for (;;)
	{
		printf ("請選擇一個模式：(十進位:d,二進位:b,十六進位為:h):");
		scanf ("%c",&input);//輸入要哪一個模式 
		if (input==100) //ASCII 100為d,選擇b做以下動作 
		{
			printf ("請輸入一個十進位數："); //輸入一個十進位數 
			scanf ("%d",&number); //輸入一個十進位數 
			char s[10];//定義s陣列 
			//itoa()函數有3個參數：第一個參數是要轉換的數字，第二個參數是要寫入轉換結果的目標字符串，第三個參數是轉移數字時所用的基數。
			itoa(number, s, 2); //轉換成二進制 
			printf ("您所輸入的十進數為 %d，轉換成二進制為 %s。\n",number,s);   //轉換成二進制 
			printf ("您所輸入的十進數為 %d，轉換成八進制為 %o。\n",number,number); //轉換成八進制  
			printf ("您所輸入的十進數為 %d，轉換成十六進制為 %x。\n",number,number);//轉換成十六進制 
			break;
		}
		else if (input==98) //ASCII 98為b,選擇b做以下動作 
		{
			long long b;
			printf ("請輸入一個二進位數："); //輸入一個二進位數 
			scanf ("%lld",&b); //輸入一個二進數 ,%lld 是格式化為長整型,%lld=long long; 
			printf ("您所輸入的二進數為 %lld，轉換成十進制為 %d。\n",b,convertBinaryToDecimal(b));//轉換成十進制 
			printf ("您所輸入的二進數為 %lld，轉換成八進制為 %o。\n",b,convertBinaryToDecimal(b));//轉換成八進制 
			printf ("您所輸入的二進數為 %lld，轉換成十六進制為 %x。\n",b,convertBinaryToDecimal(b));//轉換成十六進制 
			break;
		}
		else if (input==104) //ASCII 104為h,選擇h做以下動作
		{
			printf ("請輸入一個十六進位數：");//輸入一個十六進位數
			scanf ("%x",&number);//輸入一個十六進位數
			char s[10]; //定義s陣列 
			//itoa()函數有3個參數：第一個參數是要轉換的數字，第二個參數是要寫入轉換結果的目標字符串，第三個參數是轉移數字時所用的基數。 
			itoa(number, s, 2);//轉換成二進制 
			printf ("您所輸入的十六進數為 %x，轉換成二進制為 %s。\n",number,s);//轉換成二進制  
			printf ("您所輸入的十六進數為 %x，轉換成八進制為 %o。\n",number,number);//轉換成八進制 
			printf ("您所輸入的十六進數為 %x，轉換成十進制為 %d。\n",number,number);//轉換成十進制 
			break;
		}
		else
		printf ("輸入錯誤，請重新輸入。\n");
	}
	
	system ("pause");//暫停 
	return 0; //回傳值 0
}
//二進位數將數字轉成十進位
int convertBinaryToDecimal(long long b)
{
    int decimalNumber = 0, i = 0, remainder;
    while (b!=0)
    {
        remainder = b%10;
        b /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
