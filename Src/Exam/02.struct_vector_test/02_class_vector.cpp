#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class Score
{
private:
    int kor;
    int eng;
    int math;
    int total;
    double avg;

public:
    Score() : kor(0), eng(0), math(0), total(0), avg(0.0) {}

    Score(int kor, int eng, int math) : kor(kor), eng(eng), math(math), total(0), avg(0.0) {}

    // Getter
    int getKor() 
    {
        return this->kor; 
    }
    int getEng() 
    { 
        return this->eng; 
    }
    int getMath() 
    { 
        return this->math; 
    }
    int getTotal() 
    { 
        return this->total; 
    }
    double getAvg() 
    { 
        return this->avg; 
    }

    // Setter
    void setKor(int kor) 
    { 
        this->kor = kor; 
    }
    void setEng(int eng) 
    { 
        this->eng = eng; 
    }
    void setMath(int math) 
    { 
        this->math = math; 
    }
    void setTotal(int total) 
    { 
        this->total = total; 
    }
    void setAvg(double avg) 
    { 
        this->avg = avg; 
    }
};


int main()
{
    vector<Score> scores;
    scores.push_back(Score(100, 100, 90));
    scores.push_back(Score(89, 70, 65));
    scores.push_back(Score(100, 93, 75));
   
    // 총점 및 평균 계산
    for (Score& s : scores) {
        int total = s.getKor() + s.getEng() + s.getMath();
        s.setTotal(total);
        s.setAvg(total / 3.0);
    }

    //출력부
    int i = 1;
    for (Score s : scores) {
        cout << i << "번째 학생의 국어성적: " << s.getKor()
            << ", 영어성적: " << s.getEng()
            << ", 수학성적: " << s.getMath() << endl;

        cout << i << "번째 학생의 총점: " << s.getTotal()
            << ", 평균: " << fixed << setprecision(2) << s.getAvg() << endl << endl;
        i++;
    }
    

	return 0;
}
