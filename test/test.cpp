#include "../catch/testing.hpp"
#include "../TRPO_Calculator/TRPO_Functions.h"

struct test_FirstAndTrivial : TestCase {

	void run() override {
			//Testing function sum
			ASSERT_TRUE(sum(2, 3) == 5);
			ASSERT_TRUE(sum(2, 3) == 5);
			ASSERT_TRUE(sum(-2, -3) == -5);
			ASSERT_TRUE(sum(0, 0) == 0);
			ASSERT_TRUE(sum(-8, 3) == -5);
			ASSERT_TRUE(sum(0, -3) == -3);
			ASSERT_TRUE(sum(2, -3) == -1);

			//Testing function mynus
			ASSERT_TRUE(mynus(2, -3) == 5);
			ASSERT_TRUE(mynus(-2, -3) == 1);
			ASSERT_TRUE(mynus(0, -8) == 8);
			ASSERT_TRUE(mynus(2, 9) == -7);
		
			//Testing function multiply
			ASSERT_TRUE(multiply(2, -3) == -6);
			ASSERT_TRUE(multiply(0, -3) == 0);
			ASSERT_TRUE(multiply(-2, -3) == 6);
			ASSERT_TRUE(multiply(2, -3) == -6);

			//Testing function share
			ASSERT_TRUE(share(8, -2) == -4);
			ASSERT_TRUE(share(0, -3) == 0);
			ASSERT_TRUE(share(-3, -3) == 1);
			ASSERT_TRUE(share(-3, -3) == 1);
			ASSERT_TRUE(share(27, 3) == 9);

			//Testing function elevate
			ASSERT_TRUE(elevate(2, 2) == 4);
			ASSERT_TRUE(elevate(2, 0) == 1);
			ASSERT_TRUE(elevate(2, 1) == 2);
			ASSERT_TRUE(elevate(2, 5) == 32);

			//Testing function LengthOfCircle
			ASSERT_TRUE(LengthOfCircle(40) == 251.327412);

			//Testing function factorial		
			ASSERT_TRUE(factorial(3) == 6);
			ASSERT_TRUE(factorial(6) == 720);
			ASSERT_TRUE(factorial(15) == 1307674368000);

			//Testing function Stirling	
			ASSERT_TRUE(Stirling(5, 2) == 15);
			ASSERT_TRUE(Stirling(6, 1) == 1);

			//Testing function Triangle
			ASSERT_FALSE(Triangle(6, 5, 4) == 9.998725);
			ASSERT_FALSE(Triangle(7, 5, 5) == 12.412124);

		system("pause");
	}
};

REGISTER_TEST(test_FirstAndTrivial, "Arithmetic operations success");