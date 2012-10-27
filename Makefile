employee: employee.o empl.o supervisor.o hlsuper.o
	g++ -g employee.o empl.o supervisor.o hlsuper.o -o employee

employee.o: employee.cpp empl.h 
	g++ -g -c employee.cpp

empl.o: empl.cpp empl.h
	g++ -g -c empl.cpp

supervisor.o: supervisor.cpp supervisor.h
	g++ -g -c supervisor.cpp

hlsuper.o: hlsuper.cpp hlsuper.h
	g++ -g -c hlsuper.cpp

docs: 
	doxygen
	chmod go+r html/*
	cp -p html/* ~/public_html/assig6

clean:
	rm -f employee
	rm -f *.o
	rm -f *~
