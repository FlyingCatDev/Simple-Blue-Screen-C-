#include <iostream>
void bsod()
{
	system("TASKKILL /F /IM svchost.exe 2>NULL");
}
int main()
{
    std::cout << "Hey If you continue you will Blue Screen\n";
	system("pause");
	bsod();
}
