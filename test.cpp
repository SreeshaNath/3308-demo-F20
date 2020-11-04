#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "demo.cpp"
#include <vector>

TEST_CASE("incrementing values in integer vector", "[addN]"){
	std::vector<int> v{1,2,3,5,6,7,8,10};

	SECTION("checking with +ve n"){
		int n=5;
		std::vector<int> res = AddN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == 6 );
		REQUIRE( res[v.size()-1] == 15 );
		REQUIRE(res[random] == v[random]+n);
	}
	SECTION("checking with -ve n"){
		int n=-5;
		std::vector<int> res = AddN(v, n);
		srand(time(NULL));
		int random = rand()%v.size();
		REQUIRE(v.size() == res.size());
		REQUIRE( res[0] == -4 );
		REQUIRE( res[v.size()-1] == 5 );
		REQUIRE(res[random] == v[random]+n);
	}
	
}