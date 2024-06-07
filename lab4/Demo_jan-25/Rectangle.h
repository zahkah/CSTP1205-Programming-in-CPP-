#pragma once
class Rectangle
{
public:
	Rectangle(const int heightIn, const int widthIn):
		height{ heightIn },
		width{ widthIn }
	{
	}
	int area() {
		return height * width;
	}
		
private:
	int height;
	int width;
};

