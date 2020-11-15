/*
CODCHESS - Naya Shatranj (New Chess)
no tags 

A and B are playing a very interesting variant of the ancient Indian game 'shatranj(also known as chess)' on a 'maidaan'(chessboard) n×n in size.

They take turns to put game pieces called 'ghoda'(knight) so that no two 'ghodas'(knights) could threat each other.

A 'ghoda' located in square (a,b) can threat squares (a+1,b+2),(a-1,b+2),(a+1,b-2),(a-1,b-2),(a+2,b-1),(a+2,b+1),(a-2,b-1),(a-2,b+1).

The player who can't put a new 'ghoda' during his move loses. Find out which player wins considering that both players play optimally well and A starts.

Input

The first line contains integer T (1≤T≤10^4) — the number of 'maidaans' (boards), for which you should determine the winning player. Next T lines contain T integers ni (1≤ni≤10^5) — the sizes of the 'maidaans'(chessboards).

Output

For each ni×ni board print on a single line "0" if A wins considering both players play optimally well. Otherwise, print "1".

Example

Input:
2
2
1

Output:
1
0

26921379	2020-11-15 08:07:01	shashi	Naya Shatranj (New Chess)	accepted
edit    ideone it
0.01	4.7M	C
*/


#include <stdio.h>

int main(void) {
	// your code here
	int iter, iter1 = 0,data;
	char *inp, *tmp = NULL;
	scanf("%d", &iter);
	iter1 = iter;
	inp = calloc(iter, sizeof(int));
	tmp = inp;
	while(iter--) {
	   scanf("%d\n", inp++);
	}
	while (iter1--) {
		data = *tmp++;
		if ((data)%2 == 0) printf("1\n");
		else printf("0\n");
	}
	return 0;
}
