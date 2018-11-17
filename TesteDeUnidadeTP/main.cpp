#include <stdlib.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>

#include "UnitTestPDS.h"

using namespace std;
using namespace CppUnit;

CPPUNIT_TEST_SUITE_REGISTRATION(UnitTestsPDS);

int main(int argc, char** argv){
TextUi::TestRunner runner;
TestFactoryRegistry &registry = TestFactoryRegistry::getRegistry();
runner.addTest(registry.makeTest());
runner.run();
return (EXIT_SUCCESS);
}
