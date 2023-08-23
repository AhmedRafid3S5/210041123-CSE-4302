#include<iostream>

class Time
{
private:
	int sec;
	int min;
	int hour;

public:

	int hours()
	{
		return hour;
	}

	int minutes()
	{
		return min;
	}

	int seconds()
	{
		return sec;
	}

	void reset(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void advance(int h, int m, int s)
	{
	    sec = sec + s;
		if (sec >= 60)
		{
			min += sec/60;
			sec = sec % 60;
		}


		min = min + m;
		if (min >= 60)
		{
			hour += min/60;
			min = min%60;
		}


		hour = hour + h;
		if (hour > 24)
			hour = hour % 24;

     }

	void print()
	{
		std::cout << "Hour:" << hour << " Min:" << min << " Sec:" << sec << "\n";
	}
};

int main()
{
	Time myTime;

	myTime.reset(23, 55, 55);

	std::cout << "After Reset:";
	myTime.print();

	myTime.advance(5, 55, 60);

	std::cout << "New Hour:" << myTime.hours() << " New Min: " << myTime.minutes() << " New Sec:" << myTime.seconds() << "\n";


}
