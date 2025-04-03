CREATE TABLE "Person" (
	"no"	INTEGER NOT NULL,
	"name"	TEXT NOT NULL,
	"pnumber"	TEXT NOT NULL,
	PRIMARY KEY("no")
);

SELECT * FROM Person;

INSERT INTO Person (no, name, pnumber)
VALUES (1, 'Hong Gil-Dong', '010-1111-1111');
