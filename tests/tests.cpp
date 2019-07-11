#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE testModule

#include <boost/test/included/unit_test.hpp>
#include "../library/function1.h"
#include "../library/function2.h"
#include "../library/function3.h"
#include "../library/function4.h"

BOOST_AUTO_TEST_SUITE(testingABunchOfFunctions)

    BOOST_AUTO_TEST_CASE(return2ShouldReturn2)
    {
        BOOST_CHECK_EQUAL(return2(), 2.0);
    }

    BOOST_AUTO_TEST_CASE(returnTrueShouldReturnTrue)
    {
        BOOST_CHECK_EQUAL(returnTrue(), true);
    }

    BOOST_AUTO_TEST_CASE(returnFalseShouldReturnFalse)
    {
        BOOST_CHECK_EQUAL(returnFalse(), false);
    }

    BOOST_AUTO_TEST_CASE(returnBlablaShouldReturnBlabla)
    {
        BOOST_CHECK_EQUAL(returnBlabla(), "Blabla");
    }

    BOOST_AUTO_TEST_CASE(returnOneShouldReturnOne)
    {
        BOOST_CHECK_EQUAL(returnOne(), 1);
    }

BOOST_AUTO_TEST_SUITE_END()