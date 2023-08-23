#include<iostream>

class Counter
{
private:
	int count = 0;
	int incrementBy = 0;

public:
	void setIncrementStep(int step_val)
	{
		incrementBy = step_val;
	}

	int getCount()
	{
		return count;
	}

	void increment()
	{
		count = count + incrementBy;
	}

	void resetCount()
	{
		count = 0;
	}
};

int main()
{
	Counter myCounter;

	myCounter.setIncrementStep(2);

	std::cout << "Before Increment: " << myCounter.getCount() << "\n";

	myCounter.increment();

	std::cout << "After Increment: " << myCounter.getCount() << "\n";

	myCounter.resetCount();

	std::cout << "After Reset: " << myCounter.getCount() << "\n";

}