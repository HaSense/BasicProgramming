#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
	int total;
	double avg;
};

int main()
{
	struct score scores[3];
	scores[0] = {100, 100, 90};
	scores[1] = { 89, 70, 65 };
	scores[2] = { 100, 93, 75 };

	for (int i = 0; i < 3; i++) {
		scores[i].total = scores[i].kor + scores[i].eng + scores[i].math;
		scores[i].avg = scores[i].total / 3.0;
	}
   
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 국어성적:%d, 영어성적:%d, 수학성적:%d \n",
			i + 1, scores[i].kor, scores[i].eng, scores[i].math);
		printf("%d번재 학생의 총점:%d, 평균:%.2lf\n\n", i+1, scores[i].total, scores[i].avg);
	}

	return 0;
}

