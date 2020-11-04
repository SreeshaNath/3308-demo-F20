#include <iostream>
#include <vector>

// takes an int, n, and returns the factorial of that int (n!)
int Factorial(int n){
	if(n>1)
		return n*Factorial(n-1);
	else
		return 1;
}



// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n)
{
	for(int i=0;i<(int)v.size();i++){
		v[i]+=n;
	}
	return v;
}


/*int main(){
	//Testing Factorial()
	std::cout << Factorial (5) <<std::endl;

	//Testing AddN()
	std::vector<int> v{1,2,3};
	std::cout<< "Vector before calling AddN()"<<std::endl;
	for(int i=0;i<v.size();i++){
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl;

	std::vector<int> res = AddN(v, 5);
	
	std::cout<< "Vector after calling AddN() with increment 5"<<std::endl;
	for(int i=0;i<res.size();i++){
		std::cout<<res[i]<<" ";
	}
	std::cout<<std::endl;
}*/
