#pragma once
class Linux;
class Windows
{
	int value{};
public:
	Windows(int&);
	Windows operator + (Windows&);
	Windows operator + (Linux&);
	operator int();
	operator Linux();
};

class Linux
{
	int value{};
public:
	Linux(int);
	Linux operator + (Linux&);
	Linux operator + (Windows&);
	operator Windows();
};
