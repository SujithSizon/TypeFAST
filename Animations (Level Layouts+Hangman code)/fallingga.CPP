#include <iostream.h>
#include <thread.h>

void cpp11()
{
	std::cout<<"C++11 MULTITHREADING\n";
}

int main()
{
	thread t(cpp11);
	t.join();
}