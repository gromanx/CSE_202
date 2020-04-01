Main: Faculty.o Person.o Staff.o Student.o Employee.o Main.o StaffST.o
	g++ Employee.o Main.o Person.o Staff.o Student.o Faculty.o StaffST.o

Person.o: Person.cpp
	g++ -c Person.cpp

Student.o: Student.cpp
	g++ -c Student.cpp

Employee.o: Employee.cpp
	g++ -c Employee.cpp

Faculty.o: Faculty.cpp
	g++ -c Faculty.cpp

Staff.o: Staff.cpp
	g++ -c Staff.cpp
StaffST.o: StaffST.cpp
	g++ -c StaffST.cpp
