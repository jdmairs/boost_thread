#include <boost/thread.hpp>
#include <iostream>

void countDownThread()
{
    for (int i=5; i>0; i--)
    {
        std::cout << "Counting down: " << i << "\n";
        boost::this_thread::sleep_for(boost::chrono::seconds(1));
    }
}
int main()
{
    std::cout << "Main thread: " <<  boost::this_thread::get_id() << "\n";
}