#include <boost/thread.hpp>
#include <iostream>

int main()
{
    std::cout << "Main thread: " <<  boost::this_thread::get_id() << "\n";
}