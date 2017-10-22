#include <system_error>
#include <iostream>
#include<string>
#include <vector>

std::string str;
void foo();
void IStream();

void main(void) {

	int i[] = { 2,3,4,5 };
	auto ip(i);

	int *ip2 = ip + 1;

	int *ip3 = ip + 2;

	std::cout << *ip <<"  "<< *ip2 << "  "<< ip3 << std::endl;

	while (getline(std::cin, str))
	{
		int i = 0;
		for ( auto c : str)
		{
			if (isdigit(c))
				exit(EXIT_FAILURE);
			
				c = toupper(c);
			std::cout << c << std::endl;
			std::cout << str;
		}
		break;
	}
	std::vector<std::string> svec(2);
	std::vector<std::string> svec2{ 10,"10" };
	std::vector<std::string> svec3;

	for(auto c : svec)
		std::cout << c << std::endl; 

	std::cout << "size of svec = " << svec.size() << std::endl;
	std::cout << "size of svec2 = " << svec2.size() << std::endl;
	std::cout << "size of svec3 = " << svec3.size() << std::endl;


	// push only numbers to svec3
	while (std::cin >> str && str != "next")
	{
		std::string temp;
		
		//bool isDigit = false;

		//for (auto c : str)
		//{
		//	if (isdigit(c)) {
		//		temp.push_back(c);
		//		isDigit = true;
		//	}
		//}
		//	if(isDigit)
		//		svec3.push_back(temp);

		for (decltype(str.size()) index = 0; index != str.size(); ++index)
		{
			if (isdigit(str[index]))
				temp += str[index];
		}
		//if(temp.size() > 0)
		if (temp.begin() != temp.end())
			svec3.push_back(temp);
		
		for (auto c : svec3)
			std::cout << c << std::endl;

		std::cout << "size of svec = " << svec.size() << std::endl;
		std::cout << "size of svec2 = " << svec2.size() << std::endl;
		std::cout << "size of svec3 = " << svec3.size() << std::endl;

		std::cout << "write next to continue "<<std::endl;


	}

	foo(); 


	exit(EXIT_SUCCESS);

}

void IStream(void* function)
{
	while (std::cin >> str && str != "next")
	{
		function;
		std::cout << "write next to continue " << std::endl;


	}
}

void foo()
{
	IStream();

	while (getline(std::cin, str))
	{
		int i = 0;
		for (auto c : str)
		{
			if (isdigit(c))
				exit(EXIT_FAILURE);

			c = toupper(c);
			std::cout << c << std::endl;
			std::cout << str;
		}
		break;
	}
	std::vector<std::string> svec(2);
	std::vector<std::string> svec2{ 10,"10" };
	std::vector<std::string> svec3;

	for (auto c : svec)
		std::cout << c << std::endl;

	std::cout << "size of svec = " << svec.size() << std::endl;
	std::cout << "size of svec2 = " << svec2.size() << std::endl;
	std::cout << "size of svec3 = " << svec3.size() << std::endl;
}