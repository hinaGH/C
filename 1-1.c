//20181126 四値の最大値を求める関数max4
#include <stdio.h>

//四値の最大値を求める関数
int max4 ( int a, int b, int c, int d )
{
	//ローカル変数の宣言
	int max;

	max = a;
	if ( b > max ) max = b;
	if ( c > max ) max = c;
	if ( d > max ) max = d;
	return max;
}

int main (void)
{
	//グローバル変数の宣言
	int w, x, y, z, Gmax;

	//四値の入力を促す
	printf ( "四値の最大値を求めます\n" );
	printf ( "一つ目の値を入力して下さい\n＞" );
	scanf ( "%d", &w );
	printf ( "二つ目の値を入力して下さい\n＞" );
	scanf ( "%d", &x );
	printf ( "三つ目の値を入力して下さい\n＞" );
	scanf ( "%d", &y );
	printf ( "四つ目の値を入力して下さい\n＞" );
	scanf ( "%d", &z );
	
	//関数を呼び出し
	Gmax = max4 ( w, x, y, z );
	
	//結果表示
	printf ( "最大値は%dです", Gmax);
	
	return 0;
}