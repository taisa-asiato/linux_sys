// fopen の失敗時を見てみたい
// close はどうすれば失敗するのか気になる
#include <stdio.h>

FILE * fp;

int main() {
	if ( ( fp = fopen( "./a.txt", "r" ) ) == NULL ) {
		perror ( "fopen" );	
	}

	if ( close( fp ) == -1 ) {
		perror( "close" );
	}

	return 0;
}
