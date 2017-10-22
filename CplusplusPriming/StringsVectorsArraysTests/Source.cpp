#include <system_error>
#include <iostream>
#include<string>
#include <vector>
void main(void) {
	std::string str;
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

	while (std::cin >> str)
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
	}



	exit(EXIT_SUCCESS);

}