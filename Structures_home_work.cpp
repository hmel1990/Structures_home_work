#include <iostream>
using namespace std;


enum class Colors { GRAY, WHITE, BLACK, ROSE };
enum class Materials { GLASS, IRON, STEEL, WOOD, CLAY, PLASTIC, CERAMICS };
struct Dimensions
{
	double height;
	double width;
	double depth;
	double volume;
	double diagonal;
};

// Электрочайник								# 1
struct Kettle 
{
	Materials material; // материал корпуса
	Dimensions dimension; //габариты
	double power; // мощность
	bool filter;//наличие фильтра
	string* equipment;//доп. функции
	string guarantee;// гарантийное обслуживание
	Colors color;//цвет
};


// Iphone										# 2
struct Iphone
{
	Materials material; // материал корпуса
	Dimensions dimension; //габариты
	int E_sim; // количество E-сим карт
	double battery_power; // мощность батареи
	bool Pro;//модель
	string* equipment;//доп. функции
	Colors color;//цвет

};

// AUDI											# 3
struct AUDI
{
	Dimensions dimension; //габариты
	Colors color;// цвет
	string petrol;// тип топлива
	string complictation;// комплектация
	bool hybrid;// наличие електроустановки
	int petrol_volume; // объем бака
	string* equipment;//доп. функции
};

int main()
{
	Kettle kettle;
	kettle.dimension.volume = 1.7;
	kettle.filter = true;
	kettle.material = Materials::GLASS;
	kettle.color = Colors::WHITE;

	Iphone iphone;
	iphone.color = Colors::BLACK;
	iphone.E_sim = 2;
	iphone.dimension.diagonal = 6.7;
	iphone.material = Materials::STEEL;

	AUDI Q5;
	Q5.color = Colors::GRAY;
	Q5.hybrid = false;
	Q5.petrol_volume = 60;
	Q5.complictation = "Premium Plus";
}