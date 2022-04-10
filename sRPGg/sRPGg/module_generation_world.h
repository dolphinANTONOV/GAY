#pragma once


class generation_world
{
private:
	int map_size;
	int count_object;
public:
	void generation();
	void load_object();
	void load_save_world();
	void arrangement_object();
	void load_world();
};