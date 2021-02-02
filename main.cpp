#include "LooongLong"
#include <iostream>

int main(){
	/*LooongLong l1("12345678909876543210123456789098765432101234567890987654321012345678909876543210");
	LooongLong l2((unsigned long long) 999999999);
	LooongLong l3((long long) -999999999);
	std::cout<<"12345678909876543210123456789098765432101234567890987654321012345678909876543210"<<std::endl
			 <<l1<<std::endl
			 <<l2<<std::endl
			 <<l3<<std::endl;
	*/
	std::string str;
	std::cin>>str;
	LooongLong l1(str);

	std::cin>>str;
	LooongLong l2(str);
	if(l1<l2)
		cout<<l1<<" < "<<l2<<std::endl;
	return 0;
}