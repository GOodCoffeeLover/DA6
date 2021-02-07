#include "LooongLong"
#include <iostream>

int main(){
	std::string str;
	while(true){
		std::cin>>str;
		if(!std::cin.good())
			break;
		LooongLong l1(str);
		std::cin>>str;
		LooongLong l2(str);
		std::cin>>str;
		if(str == "+"){
			std::cout<<l1+l2<<std::endl;
		}
		if(str == "-"){
			if(l1<l2)
				std::cout<<"Error"<<std::endl;
			else
				std::cout<<l1-l2<<std::endl;

		}
		if(str == "*"){
			std::cout<<l1*l2<<std::endl;
		}
		if(str == "/"){
			try{
				std::cout<<l1/l2<<std::endl;
			}
			catch(...){
				std::cout<<"Error"<<std::endl;
			}
		}
		if(str == "^"){
			try{
				std::cout<<l1.pow(l2)<<std::endl;
			}
			catch(...){
				std::cout<<"Error"<<std::endl;
			}
		}
		if(str == "<"){
			if(l1<l2)
				std::cout<<"true"<<std::endl;
			else
				std::cout<<"false"<<std::endl;

		}
		if(str == ">"){
			if(l1>l2)
				std::cout<<"true"<<std::endl;
			else
				std::cout<<"false"<<std::endl;

		}
		if(str == "="){
			if(l1 == l2)
				std::cout<<"true"<<std::endl;
			else
				std::cout<<"false"<<std::endl;

		}

	}		
	return 0;
}