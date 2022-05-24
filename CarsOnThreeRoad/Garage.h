#pragma once
#include "Vehicle.h"
class Garage
{
private:
	unsigned int capacity;
	unsigned int size;
	Vehicle** vehicles;
public:
	Garage(unsigned int capacity = 8)
	{
		this->capacity = capacity;
		this->size = 0;
		this->vehicles = new Vehicle*[capacity];
	}
	Garage(Garage& garage)
	{
		this->capacity = garage.capacity;
		this->size = garage.size;
		this->vehicles = new Vehicle * [capacity];
		for (int i = 0; i < size; i++)
		{
			this->vehicles[i] = garage.vehicles[i];
		}
	}
	Garage& operator=(Garage& garage)
	{
		if (this != &garage)
		{
			delete[] this->vehicles;
			this->capacity = garage.capacity;
			this->size = garage.size;
			this->vehicles = new Vehicle * [capacity];
			for (int i = 0; i < size; i++)
			{
				this->vehicles[i] = garage.vehicles[i];
			}
		}
	}
	~Garage()
	{
		delete[] this->vehicles;
	}
	void Add(Vehicle* vehicle)
	{
		if(this->size == capacity - 1)
		{ 
			std::cout << "Maximum capacity reached. GFDEFGBNMJHYTGHNJ" << std::endl;
		}
		else
		{
			this->vehicles[size] = vehicle;
			size++;
		}
	}

	void CheckHighway(double road_length, double hours)
	{
		bool something = false;
		for (int i = 0; i < size; i++)
		{
			if (this->vehicles[i]->CheckHighway(road_length, hours))
			{
				std::cout << "This vehicle can make it in time:" << this->vehicles[i]->GetModel() << '\n';
				something = true;
			}
		}
		if (!something)
		{
			std::cout << "None can make it in time." << std::endl;
		}
	}
	void CheckThirdClassRoad(double road_length, double hours)
	{
		bool something = false;
		for (int i = 0; i < size; i++)
		{
			if (this->vehicles[i]->CheckThirdClassRoad(road_length, hours))
			{
				std::cout << "This vehicle can make it in time:" << this->vehicles[i]->GetModel() << '\n';
				something = true;
			}
		}
		if (!something)
		{
			std::cout << "None can make it in time." << std::endl;
		}
	}
	void CheckSpeedRoad(double road_length, double hours)
	{
		bool something = false;
		for (int i = 0; i < size; i++)
		{
			if (this->vehicles[i]->CheckSpeedRoad(road_length, hours))
			{
				std::cout << "This vehicle can make it in time:" << this->vehicles[i]->GetModel() << '\n';
				something = true;
			}
		}
		if (!something)
		{
			std::cout << "None can make it in time." << std::endl;
		}
	}

};

