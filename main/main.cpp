#include <iostream>
#include <boost/beast.hpp>

int main(int argc, const char *argv[])
{
    std::cout << argc << argv[0] << BOOST_BEAST_VERSION_STRING;
    return 0;
}
