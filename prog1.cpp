#include <iostream>

int main()
{
	
	/*
	std::cout << "Please enter two numbers";
	std::cout << std::endl;
	int n1 = 0, n2 = 0;
	std::cin >> n1;
	std::cin >> n2;
	std::cout << n1;
	std::cout << " * ";
	std::cout << n2;
	std::cout << " = ";
	std::cout << n1 * n2;
	std::cout << std::endl;
	*/


	/*
	int sum = 0, val = 0;
	std::cout << val;
	while(val<=10)
	{
		
		sum += val;
		std::cout << " + " << val;
		++val;
		
	}

	std::cout << " = " << sum << std::endl;
	*/
	//std::cout << "sum = " << sum << std::endl;
	
	/*
	int sum = 0, val = 50;
	while(val <= 100)
	{
		sum += val;
		val++;
	}

	std::cout << "sum = " << sum << std::endl;
	*/

/*
	int sum = 0 , val = 10;
	while(val >= 0)
	{
		sum += val;
		--val;

	}

	std::cout << sum << std::endl;
*/

/*
	std::cout << "Enter two numbers:" << std::endl;
	int n1 = 0, n2 = 0;
	std::cin >> n1 >> n2;
	if(n2 > n1)
	{
		while(n1 < n2)
		{
			++n1;
			std::cout << n1; 
		}
		std::cout << std::endl;
	
	}

	if(n1 > n2)
	{
		while(n2 < n1)
		{
			--n1;
			std::cout << n1;
		}
		std::cout << std::endl;
	}
	
*/	

	// int start = 0, end = 0;
    // std::cout << "Please input two num: ";
    // std::cin >> start >> end;
    // if (start <= end) {
    //     while (start <= end){
    //         std::cout << start << " ";
    //         ++start;
    //     }
    //     std::cout << std::endl;
    // }
    // else{
    //     std::cout << "start should be smaller than end !!!";
    // }


	// int sum = 0;
	// for(int val = 50 ;val <=100; ++val)
	// {
	// 	sum += val;
	// }

	// std::cout << "sum = " << sum << std::endl;

	// for(int val = 10; val >= 0;--val)
	// {
	// 	std::cout << val << std::endl;
	// }

	// std::cout << "Enter two numbers" << std::endl;
	// int n1 = 0, n2 = 0;
	// std::cin >> n1 >> n2;
	
	// if(n2-n1 < 0)
	// {
	// 	for(int count = -1;count > n2 - n1;--count)
	// 	{
	// 		std::cout << n1 + count << std::endl;
	// 	}
	// }
	// if(n2 - n1 > 0)
	// {
	// 	for(int count = 1;count < n2 - n1;++count)
	// 	{
	// 		std::cout << n1 + count << std::endl;
	// 	}
	// }
	// if(n1 == n2){
	// std::cout << "null" << std::endl;
	// }
	
	// int inum = 0, sum = 0;

	// while(std::cin >> inum)
	// {
	// 	sum += inum;
	// }

	// std::cout << sum << std::endl;
	// int sum = 0, value = 0;
	// while (std::cin >> value)
	// 	sum += value;
	// std::cout << "Sum is " << sum << std::endl;

	// int sum = 0;
	// for (int value = 0;std::cin >> value;)
	// {
	// 	sum += value;
	// }

	// std::cout << sum << std::endl;

	int currVal =0, val = 0;
	if (std::cin >> currVal){
		int cnt = 1;
		while (std::cin >> val){
			if (currVal == val) {
				++cnt;
			}else{
				std::cout << currVal << "occurse" << cnt << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "occurse" << cnt << std::endl; 
	}


	return 0;
}