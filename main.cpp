#include <boost/thread.hpp>
#include <iostream>

void countDownThread()
{
    for (int i=5; i>0; i--)
    {
        std::cout << "Test thread: Counting down: " << i << "     " << boost::this_thread::get_id() << "\n";
        boost::this_thread::sleep_for(boost::chrono::seconds(1));
    }
}
int main()
{
    std::cout << "Main thread: " <<  boost::this_thread::get_id() << "\n";
    boost::thread t1{countDownThread};
    std::cout << "Main thread: joining\t\t\t" <<  boost::this_thread::get_id() << "\n";
    t1.join();
    std::cout << "Main thread: joined\t\t\t" << boost::this_thread::get_id() << "\n";
}