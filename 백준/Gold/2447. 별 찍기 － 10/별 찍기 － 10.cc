#include <stdio.h>
#include <math.h>
 
char arr[2500][2500];
void AllStar(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            arr[i][j] = '*';
    }
}
void Blank(int x, int y, int cnt) {
	int max = (int)pow(3, cnt);
    for (int i = x; i < x + max; i++) {
        for (int j = y; j < y + max; j++) {
            arr[i][j] = ' ';
        }
    }
}
void Pivot(int n, int cnt) {
	int m1 = (int)pow(3, cnt+1);
	int m0 = (int)pow(3, cnt);
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Blank(m0 + i * m1, 
                    m0 + j * m1, cnt);
            }
        }
        Pivot(n / 3, cnt + 1);
    }
}
 
int main() {
    int N;
    scanf("%d", &N);
    AllStar(N);
 
    Pivot(N / 3, 0);
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }
    return 0;
}
