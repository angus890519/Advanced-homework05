/* �p������׹��-�i���m�ߧ@�~-�@�~5*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/20 15:31 */
/* 
ASCII�X 
�Q�i�� 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90
�ϧ�    A  B  C  D  E  F  G  H  I  J  K  L M   N  O  P  Q  R  S  T  U  V  W  X  Y  Z
�Q�i�� 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122
�ϧ�    a  b  c  d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z
*/ 
#include <stdio.h> //��ܮw 
#include <stdlib.h> //��ܮw
#include <math.h> //��ܮw 
int convertBinaryToDecimal(long long b); //%lld �O�榡�Ƭ����㫬
int main() 
{
	char input; //��ܭn���@���ഫ�Ҧ� 
	int number; //��J��
	printf("�p������׹��-�i���m�ߧ@�~-�@�~5)\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/20 20:00\n");
	printf("-----------------------------------\n"); 
	for (;;)
	{
		printf ("�п�ܤ@�ӼҦ��G(�Q�i��:d,�G�i��:b,�Q���i�쬰:h):");
		scanf ("%c",&input);//��J�n���@�ӼҦ� 
		if (input==100) //ASCII 100��d,���b���H�U�ʧ@ 
		{
			printf ("�п�J�@�ӤQ�i��ơG"); //��J�@�ӤQ�i��� 
			scanf ("%d",&number); //��J�@�ӤQ�i��� 
			char s[10];//�w�qs�}�C 
			//itoa()��Ʀ�3�ӰѼơG�Ĥ@�ӰѼƬO�n�ഫ���Ʀr�A�ĤG�ӰѼƬO�n�g�J�ഫ���G���ؼЦr�Ŧ�A�ĤT�ӰѼƬO�ಾ�Ʀr�ɩҥΪ���ơC
			itoa(number, s, 2); //�ഫ���G�i�� 
			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���G�i� %s�C\n",number,s);   //�ഫ���G�i�� 
			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���K�i� %o�C\n",number,number); //�ഫ���K�i��  
			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���Q���i� %x�C\n",number,number);//�ഫ���Q���i�� 
			break;
		}
		else if (input==98) //ASCII 98��b,���b���H�U�ʧ@ 
		{
			long long b;
			printf ("�п�J�@�ӤG�i��ơG"); //��J�@�ӤG�i��� 
			scanf ("%lld",&b); //��J�@�ӤG�i�� ,%lld �O�榡�Ƭ����㫬,%lld=long long; 
			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���Q�i� %d�C\n",b,convertBinaryToDecimal(b));//�ഫ���Q�i�� 
			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���K�i� %o�C\n",b,convertBinaryToDecimal(b));//�ഫ���K�i�� 
			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���Q���i� %x�C\n",b,convertBinaryToDecimal(b));//�ഫ���Q���i�� 
			break;
		}
		else if (input==104) //ASCII 104��h,���h���H�U�ʧ@
		{
			printf ("�п�J�@�ӤQ���i��ơG");//��J�@�ӤQ���i���
			scanf ("%x",&number);//��J�@�ӤQ���i���
			char s[10]; //�w�qs�}�C 
			//itoa()��Ʀ�3�ӰѼơG�Ĥ@�ӰѼƬO�n�ഫ���Ʀr�A�ĤG�ӰѼƬO�n�g�J�ഫ���G���ؼЦr�Ŧ�A�ĤT�ӰѼƬO�ಾ�Ʀr�ɩҥΪ���ơC 
			itoa(number, s, 2);//�ഫ���G�i�� 
			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���G�i� %s�C\n",number,s);//�ഫ���G�i��  
			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���K�i� %o�C\n",number,number);//�ഫ���K�i�� 
			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���Q�i� %d�C\n",number,number);//�ഫ���Q�i�� 
			break;
		}
		else
		printf ("��J���~�A�Э��s��J�C\n");
	}
	
	system ("pause");//�Ȱ� 
	return 0; //�^�ǭ� 0
}
//�G�i��ƱN�Ʀr�ন�Q�i��
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
