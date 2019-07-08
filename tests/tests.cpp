#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE testModule

#include <boost/test/included/unit_test.hpp>
#include "../library/function1.h"
#include "../library/function2.h"
#include "../library/function3.h"

BOOST_AUTO_TEST_SUITE(testingABunchOfFunctions)

    BOOST_AUTO_TEST_CASE(return2ShouldReturn2)
    {
        BOOST_CHECK_EQUAL(return2(), 2.0);
    }

    BOOST_AUTO_TEST_CASE(returnTrueShouldReturnTrue)
    {
        BOOST_CHECK_EQUAL(returnTrue(), true);
    }

BOOST_AUTO_TEST_SUITE_END()