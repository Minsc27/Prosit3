#pragma once
class CLpoint
{
public:
	CLpoint();
	CLpoint(float, float);
	CLpoint(CLpoint const& copie);

	virtual float getY() = 0;
	virtual void setY(float) = 0;
	virtual float getX() = 0;
	virtual void setX(float) = 0;
	virtual float getZ();
	virtual void setZ(float);

	static int getCompteurPoint();

	virtual ~CLpoint();

protected:
	float x;
	float y;
	static int compteurPoint;

	/*float afficherCoordo(CLpoint const& obj1);
	friend operator=(CLpoint const& obj1, CLpoint const& obj2);*/
}; 