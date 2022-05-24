#pragma once
class Vehicle
{
private:
	char* model;
	unsigned int max_speed;
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const;
	virtual bool CheckSpeedRoad(double road_length, double hours) const;
	virtual bool CheckHighway(double road_length, double hours) const;
};

