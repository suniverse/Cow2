#ifndef Timer_hpp
#define Timer_hpp

namespace Cow
{
    class Timer;
}




/**
A handy class for checking execution time using RAII.

    auto timer = Timer();
    someExpensiveFunction();
    std::cout << timer.age() << std::endl;
*/
class Cow::Timer
{
public:
    Timer();

    /**
    Return the time, in seconds, since the timer was instantiated.
    */
    double age() const;

    /**
    Return the age, formatted as e.g. "21.4 seconds".
    */
    std::string ageInSeconds() const;

private:
    std::clock_t timeInstantiated;
};

#endif
