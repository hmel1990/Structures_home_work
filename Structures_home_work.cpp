#include <iostream>
using namespace std;


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
	string color;//цвет
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
	string color;//цвет

};

// AUDI											# 3
struct AUDI
{
	Dimensions dimension; //габариты
	string color;//цвет
	string petrol;// тип топлива
	string complictation;// комплектация
	bool hybrid;// наличие електроустановки
	int petrol_volume; // объем бака
	string* equipment;//доп. функции
};

int main()
{
	Kettle kettle;
	cout << "kettle" << "\n";

	kettle.dimension.volume = 1.7;
	cout << kettle.dimension.volume <<"\n";

	kettle.filter = true;
	cout << kettle.filter << "\n";

	kettle.material = Materials::GLASS;
	cout << (Materials*) kettle.material << "\n";

	kettle.color = "white";
	cout << kettle.color << "\n";

	cout << "\n\n";


	Iphone iphone;
	cout << "iphone" << "\n";

	iphone.color = "black";
	cout << iphone.color << "\n";

	iphone.E_sim = 2;
	cout << iphone.E_sim << "\n";

	iphone.dimension.diagonal = 6.7;
	cout << iphone.dimension.diagonal << "\n";

	iphone.material = Materials::STEEL;
	cout << (Materials*)iphone.material << "\n";

	cout << "\n\n";

	AUDI Q5;
	cout << "Q5" << "\n";

	Q5.color = "gray";
	cout << Q5.color << "\n";

	Q5.hybrid = false;
	cout << Q5.hybrid << "\n";

	Q5.petrol_volume = 60;
	cout << Q5.petrol_volume << "\n";


	Q5.complictation = "Premium Plus";
	cout << Q5.complictation << "\n";


}