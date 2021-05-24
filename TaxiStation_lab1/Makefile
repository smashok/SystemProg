main: Car.o TaxiStationTest.o
	g++ -o main Car.o TaxiStationTest.o
Car.o: Car.cpp
	gcc -c Car.cpp
TaxiStationTest.o: TaxiStationTest.cpp
	gcc -c TaxiStationTest.cpp
clean:
	rm -f *.o main

