#pragma once
#include <array>
class TVRemote
{
	TVRemote():
		channelNum{ 0 },
		volume{ 0 },
		powerStatus{ false } {
	}

	void powerOn()
	{
		powerStatus = true;
	}
	void powerOff()
	{
		powerStatus = false;
	}
	bool channelUp()
	{
		if (powerStatus && channelNum < 100) {
			channelNum++;
			return true;
		}
		else {
			return false;
		}

	}
	bool channelDown()
	{
		if (powerStatus && channelNum > 0) {
			channelNum--;
			return true;
		}
		else {
			return false;
		}

	}

	bool volumeUp()
	{
		if (powerStatus && volume < 10) {
			volume++;
			return true;
		}
		else {
			return false;
		}
	}
	bool volumeDown()
	{
		if (powerStatus && volume > 0) {
			volume--;
			return true;
		}
		else {
			return false;
		}
	}
	int channelNum;
	int volume;
	bool powerStatus;
};


class Mouse {
public:
	Mouse(int a, int b) :
		xPos{ a },
		yPos{ b } {

	}
	bool moveup(int distance)
	{
		if (yPos - distance >= 0) {
			yPos -= distance;
		}
	}

	std::array<int,2> getPos()
	{
		std::array<int, 2> currentPos{};
		currentPos[0] = xPos;
		currentPos[1] = yPos;
		return currentPos;
 	}
private:
	int xPos;
	int yPos;
};
