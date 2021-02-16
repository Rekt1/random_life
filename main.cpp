#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//srand (time(NULL));

string rnd_name()
{
	srand (time(NULL));
	int rnd = rand() % 6;
	string name[6] = {"Anton", "Vladimir", "Ilya", "William", "James", "Lucas"};
	return name[rnd];

}

int rnd_age()
{
	srand (time(NULL));
	return rand() % 100;
}

string rnd_city()
{
	srand (time(NULL));
	int rnd = rand() % 8;
	string city[8] = {"Minsk", "New York", "Moscow", "Helsinki", "Berlin", "Warsaw", "Bolgorad", "Zurich"};
	return city[rnd];
}
int main()
{
	cout<<"Hello, Your random name is.. " << rnd_name() << " And Your age is.. " << rnd_age() << ". From " << rnd_city() << endl;
}