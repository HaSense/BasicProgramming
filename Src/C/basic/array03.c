#include <stdio.h>
int main()
{
	int score[3];
	int total = 0;
	double avg = 0.0;
	//int math, kor, eng
	//score[0], score[1], score[2]
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &score[i]);
		total += score[i];
	}
	//total = score[0] + score[1] + score[2];
	printf("총점 : %d\n", total);
	printf("평균 : %.2lf\n", total / 3.0);

	return 0;
}
