#include "integer.h"

using namespace ExactArithmetic;

#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Demo
#endif

#ifndef BOOST_INCLUDED_UNIT_TEST_FRAMEWORK_HPP_071894GER
#include <boost/test/included/unit_test.hpp>
#endif

BOOST_AUTO_TEST_SUITE(ArbitraryPrecisionInteger)

	Integer bigNum1;			// 0
	Integer bigNum2(123);
	Integer bigNum3("456");
	Integer result(579);

	BOOST_AUTO_TEST_CASE(constructor)
	{
		BOOST_CHECK_EQUAL(bigNum1, 0);
		BOOST_CHECK_EQUAL(bigNum2, 123);
		BOOST_CHECK_EQUAL(bigNum3, 456);
	}

	BOOST_AUTO_TEST_CASE(comparison)
	{
		BOOST_CHECK_EQUAL(bigNum1 != bigNum3, 1);
	}

	BOOST_AUTO_TEST_CASE(addFunction)
	{
		BOOST_CHECK_EQUAL(Integer(123) + Integer(456), Integer(579));
	}

BOOST_AUTO_TEST_SUITE_END()
