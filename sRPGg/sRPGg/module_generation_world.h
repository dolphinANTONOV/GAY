#pragma once


class generation_world
{
private:
	int map_size;
	int count_object;
public:
	void generation();
	void load_object();
	int load_save_world(bool flag);
	void arrangement_object();
	void load_world();
};