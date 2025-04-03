CREATE TABLE "Person" (
	"no"	INTEGER NOT NULL,
	"name"	TEXT NOT NULL,
	"pnumber"	TEXT NOT NULL,
	PRIMARY KEY("no")
);

SELECT * FROM Person;

INSERT INTO Person (no, name, pnumber)
VALUES (1, 'Hong Gil-Dong', '010-1111-1111');

////////////////////////////////////////////////////////////////////
-- 테이블 생성
CREATE TABLE Student (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER
);

-- 생성 (Create)
INSERT INTO Student (name, age) VALUES ('김철수', 18);
INSERT INTO Student (name, age) VALUES ('이영희', 17);

-- 읽기 (Read) - 전체 조회
SELECT id, name, age FROM Student;

-- 읽기 (Read) - 특정 조건 조회 (id가 1인 학생 조회)
SELECT id, name, age FROM Student WHERE id = 1;

-- 수정 (Update) - id가 2인 학생의 나이를 18세로 변경
UPDATE Student SET age = 18 WHERE id = 2;

-- 삭제 (Delete) - id가 1인 학생 삭제
DELETE FROM Student WHERE id = 1;
