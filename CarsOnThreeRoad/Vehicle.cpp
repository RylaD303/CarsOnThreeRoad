#include "Vehicle.h"


bool Car::CheckThirdClassRoad(double road_length, double hours) const
{
	return hours >= road_length / this->max_speed;
}
bool Car::CheckSpeedRoad(double road_length, double hours) const
{
	return hours >= road_length / this->max_speed;
}
bool Car::CheckHighway(double road_length, double hours) const
{
	return hours >= road_length / this->max_speed;
}
Vehicle* Car::Clone()
{
	return new Car(*this);
}
bool Lorry::CheckThirdClassRoad(double road_length, double hours) const
{
	return hours >= road_length / 10;
}
bool Lorry::CheckSpeedRoad(double road_length, double hours) const
{
	return hours >= (road_length / this->max_speed)*4;
}
bool Lorry::CheckHighway(double road_length, double hours) const
{
	return hours >= (road_length / this->max_speed)*2;
}
Vehicle* Lorry::Clone()
{
	return new Lorry(*this);
}

bool Minibus::CheckThirdClassRoad(double road_length, double hours) const
{
	return hours >= (road_length / this->max_speed) * 3;
}
bool Minibus::CheckSpeedRoad(double road_length, double hours) const
{
	return hours >= (road_length / this->max_speed) * 2;
}
bool Minibus::CheckHighway(double road_length, double hours) const
{
	return hours >= road_length / this->max_speed;
}
Vehicle* Minibus::Clone()
{
	return new Minibus(*this);
}
