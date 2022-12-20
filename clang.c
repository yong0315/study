#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int cnt = 1;
	while (cnt <= 10) {
		srand(time(NULL));
		int L = rand() % 20 + 1;
		int R = rand() % 20 + 1;
		int cal = rand() % 4;
		int ans, num;
		printf("[%d/10] ", cnt);
		if (cal == 0) {
			printf("%d + %d = ", L, R);
			ans = L + R;
		}
		else if (cal == 1) {
			printf("%d - %d = ", L, R);
			ans = L - R;
		}
		else if (cal == 2) {
			printf("%d * %d = ", L, R);
			ans = L * R;
		}
		else if (cal == 3) {
			printf("%d / %d = ", L, R);
			ans = L / R;
		}
		scanf("%d", &num);
		if (num == ans) {
			printf("Correct!\n\n");
			cnt++;
		}
		else printf("Wrong! Answer is %d\n\n", ans);
	}
	return 0;
}