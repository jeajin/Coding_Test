#include <stdio.h>
#include <stdlib.h>


long long cnt[1001];

int main()
{
	int N, M;
	long long result;
	long long tmp;
	long long* arr;
	scanf("%d %d", &N, &M);

	arr = (long long*)calloc(N+1, sizeof(long long));

	for (int i = 1; i <= N; i++) {
		scanf("%lld", &arr[i]);
		arr[i] += arr[i - 1];
		arr[i] %= M;
		cnt[arr[i]]++;
	}

	result = cnt[0];
	
	for (int i = 0; i < M; i++) {
		tmp = cnt[i];
		result += tmp * (tmp - 1) / 2;
	}

	printf("%lld", result);

	free(arr);

	return 0;
}