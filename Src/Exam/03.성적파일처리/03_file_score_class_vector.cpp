#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>

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
    //파일에서 읽어오기 때문에 필요없음
    //scores.push_back(Score(100, 100, 90));
    //scores.push_back(Score(89, 70, 65));
    //scores.push_back(Score(100, 93, 75));

    // 파일 입력 스트림
    ifstream fin("C:\\Temp\\input_score.txt");
    if (!fin) {
        cerr << "input_score.txt 파일을 열 수 없습니다." << endl;
        return 1;
    }

    int kor, eng, math;

    // 파일에서 데이터 읽기 → Score 객체로 저장
    while (fin >> kor >> eng >> math) {
        Score s(kor, eng, math);
        int total = kor + eng + math;
        double avg = total / 3.0;

        //총점 및 평균계산
        s.setTotal(total);
        s.setAvg(avg);
        scores.push_back(s); //kor, eng, math, total, avg 모두 삽입됨.
    }
    fin.close();

    // 파일 출력 스트림
    ofstream fout("C:\\Temp\\output_score.txt");
    if (!fout) {
        cerr << "output_score.txt 파일을 열 수 없습니다." << endl;
        return 1;
    }

    // 성적 파일 출력
    int i = 1;
    for (Score& s : scores) {
        fout << i << "번째 학생: 총점 = " << s.getTotal()
            << ", 평균 = " << fixed << setprecision(2) << s.getAvg() << endl;
        i++;
    }

    fout.close();
    cout << "성적 결과가 output_score.txt에 저장되었습니다." << endl<< endl;

    //화면 출력부, 화면에도 추가적으로 출력 보았다.
    i = 1;
    for (Score s : scores) {
        cout << i << "번째 학생의 총점: " << s.getTotal()
            << ", 평균: " << fixed << setprecision(2) << s.getAvg() << endl << endl;
        i++;
    }

    return 0;
}
