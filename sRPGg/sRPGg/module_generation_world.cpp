#include <iostream>
#include "module_generation_world.h"

void generation_world::generation()
{
	/*Код генерации игрового мира*/
}

void generation_world::load_object()
{
	/*Код загрузки объектов игрового мира*/
}

void generation_world::load_world()
{
	/*Код загрузки игрового мира*/
	if (load_save_world(false) == true)
	{
		/*Грузим сохраненный мир игрока*/
	
	}

}
int generation_world::load_save_world(bool flag)
{
	
	/*Код загрузки измененного/сохраненного игрового мира игроком*/
	return flag;
}
