#pragma once
#include<iostream>
class Vehicle
{
protected:
	char model[1024];
	unsigned int max_speed;
public:
	virtual bool CheckThirdClassRoad(double road_length, double hours) const =0;
	virtual bool CheckSpeedRoad(double road_length, double hours) const =0;
	virtual bool CheckHighway(double road_length, double hours) const =0;
	const char* GetModel() const
	{
		return this->model;
	}
	unsigned int GetSpeed() const
	{
		return this->max_speed;
	}
	void SetSpeed(unsigned int max_speed)
	{
		this->max_speed = max_speed;
	}
	friend std::istream& operator>>(std::istream& in, Vehicle& vehicle)
	{
		in >> vehicle.max_speed;
		in.ignore();
		in.getline(vehicle.model, 1024);
		return in;
	}
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


