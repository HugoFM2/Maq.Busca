#ifndef MYFIRSTTESTCASE_H
#define MYFIRSTTESTCASE_H

#include <cppunit/extensions/HelperMacros.h>

using namespace CppUnit;

class UnitTestsPDS : public TestCase{
    CPPUNIT_TEST_SUITE(UnitTestsPDS);
    CPPUNIT_TEST(testNoFile);
    CPPUNIT_TEST(testWithFile);
    CPPUNIT_TEST(testAlteracaoString);
    CPPUNIT_TEST(testSubstSet);
    CPPUNIT_TEST(testSetToMap);
    CPPUNIT_TEST_SUITE_END();
    public:
        UnitTestsPDS();
        virtual ~UnitTestsPDS();
        void testNoFile();
        void testWithFile();
        void testAlteracaoString();
        void testSubstSet();
        void testSetToMap();
};

#endif // MYFIRSTTESTCASE_H
