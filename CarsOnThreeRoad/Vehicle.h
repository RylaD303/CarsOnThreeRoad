#pragma once
class Vehicle
{
private:
	char* model;
	unsigned int max_speed;
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const =0;
	virtual bool CheckSpeedRoad(double road_length, double hours) const =0;
	virtual bool CheckHighway(double road_length, double hours) const =0;
};


class Car : public Vehicle
{
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const override;
	virtual bool CheckSpeedRoad(double road_length, double hours) const override;
	virtual bool CheckHighway(double road_length, double hours) const override;
};


class Lorry : public Vehicle
{
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const override;
	virtual bool CheckSpeedRoad(double road_length, double hours) const override;
	virtual bool CheckHighway(double road_length, double hours) const override;
};


class Minibus : public Vehicle
{
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const override;
	virtual bool CheckSpeedRoad(double road_length, double hours) const override;
	virtual bool CheckHighway(double road_length, double hours) const override;
};


