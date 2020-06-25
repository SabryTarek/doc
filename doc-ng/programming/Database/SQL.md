SQL ([S]tructure [Q]uary [L]anguage)
====================================
Breef:-
    - standerd for all RDBMS stands for ([R]elational [D]ata[B]ase [M]anagement [S]ystem)

Ref:-
    - [tutorialspoint](https://www.tutorialspoint.com/sql/sql-rdbms-concepts.htm)

--------------------------------------------------
Data Query Language (DQL) :-
	- SELECT - Retrieve data from table(s)

Data Manipulation Language (DML) :-
	- INSERT - Insert data into db table 
	- UPDATE - Update data in db table 
	- DELETE - Delete data from table


Data Definition Language (DDL) :- 
	- CREATE - Create db object (table, view, etc.) 
	- ALTER - Modify db object (table, view, etc.) -> alter table students add id int() 
	- DROP - Delete db object (table, view, etc.)

Data Control Language (DCL) :-
	- GRANT - Assign privilege 
	- REVOKE - remove privilege
--------------------------------------------------
CREATE :-
	- DATABASE
		- 
	- TABLE
		- CREATE TABLE <Table Name> ( Column1 DataType, Column2 DataType, Column3 DataType, …)
--------------------------------------------------
Datatypes:-
- INT
- TEXT
- CHAR
- VARCHAR
- BOOLEAN
-
--------------------------------------------------
keywords:-
- NOT NULL
- PRIMARY
- FORIGHN
- 
--------------------------------------------------
USE :-
	- DATABASE
	- TABLE
--------------------------------------------------
SHOW :-
	- DATABASE
	- TABLE
--------------------------------------------------
SELECT FROM
	- SELECT <Column List> FROM <Table Name> WHERE <Search Condition>
--------------------------------------------------
DROP
UPDATE <Table Name> SET <Column1> = <Value1>, <Column2> = <Value2>, … WHERE <Search Condition>
INSERT INTO <Table Name> (<Column List>) VALUES (<Values>)
DELETE FROM <Table Name> WHERE <Search Condition>
ALTER
WHERE
AS



DISTINCT
LIKE
REGEXP
order ASC - 
SELECT	
	- SELECT <Column List> FROM <Table Name> WHERE <Search Condition> ORDER BY <Column List>
GROUP BY
	- SELECT <Column List>, <Aggregate Function>(<Column Name>) FROM <Table Name> WHERE <Search Condition> GROUP BY <Column List>
--------------------------------------------------
> __Aggregate Functions__ :-
    - MIN
    - MAX
    - AVG
    - SUM
    - COUNT
    - BETWEEN IN
    - 
--------------------------------------------------
> __Mathematical Functions__ :-
	 - mod(x,y) Function
	 - ABS(x) Function
	 - SIGN(x) Function
	 - POWER(x,y) Function
	 - SQRT(x) Function
	 - ROUND(x) and ROUND(x,y) Function
	 - FLoor(x) Function
	 - CEILING(x) Function
	 - Trignometic Function [ Tan(x) , Cos(x) , Sin(x) ]
--------------------------------------------------
> __Realational__ :-
- UNION : 
	- SELECT <Column List> FROM <Table1> UNION SELECT <Column List> FROM <Table2>
- JOIN : 
	- SELECT <Column List> FROM <Table1> JOIN <Table2> ON <Table1>.<Column1> = <Table2>.<Column1>
--------------------------------------------------
- TRUNCATE TABLE students-> remove all data from the table
- describe student