Testing
=======



how to design test case

run in memory

acceptance test = functional = intefration

unit test have no effect at your system (file system, nerwork, database, or ather external resources


pass keyword in python {function, class}) return None


unit test framework like Jest
test case should have one reason to fail


PyDev

- WireMock
- MockServer

python3 -m unittest 
	- v = verbose
	- q <testcase_name> = run one test case
	-
@unittest.skip("WIP") work in progress


convintion:
test_file_name: test_<file_name>
test method -> test
_arrange setUp name
_act
_assert




xunit family same paattern(convintions) for defining test cases
unittest:
- belongs to xunit family
- in standerd python distribution(SPD)