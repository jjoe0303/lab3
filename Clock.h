#include <ctime>

using namespace std;

class Clock{
	public:
		Clock();
		Clock(clock_t s);
		void start();
		void setStart(clock_t ts);
		clock_t getStart();
		double getElapsedtime();
	private:
		clock_t start_ts;
};

