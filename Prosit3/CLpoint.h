#pragma once
class CLpoint
{
public:
	CLpoint();
	CLpoint(int, int);
	CLpoint(CLpoint const& copie);

	/*int getY();
	void setY(int);
	int getX();
	void setX(int);*/

	virtual ~CLpoint();

protected:
	int x;
	int y;
	static int compteurPoint;
};