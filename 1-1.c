//20181126 �l�l�̍ő�l�����߂�֐�max4
#include <stdio.h>

//�l�l�̍ő�l�����߂�֐�
int max4 ( int a, int b, int c, int d )
{
	//���[�J���ϐ��̐錾
	int max;

	max = a;
	if ( b > max ) max = b;
	if ( c > max ) max = c;
	if ( d > max ) max = d;
	return max;
}

int main (void)
{
	//�O���[�o���ϐ��̐錾
	int w, x, y, z, Gmax;

	//�l�l�̓��͂𑣂�
	printf ( "�l�l�̍ő�l�����߂܂�\n" );
	printf ( "��ڂ̒l����͂��ĉ�����\n��" );
	scanf ( "%d", &w );
	printf ( "��ڂ̒l����͂��ĉ�����\n��" );
	scanf ( "%d", &x );
	printf ( "�O�ڂ̒l����͂��ĉ�����\n��" );
	scanf ( "%d", &y );
	printf ( "�l�ڂ̒l����͂��ĉ�����\n��" );
	scanf ( "%d", &z );
	
	//�֐����Ăяo��
	Gmax = max4 ( w, x, y, z );
	
	//���ʕ\��
	printf ( "�ő�l��%d�ł�", Gmax);
	
	return 0;
}