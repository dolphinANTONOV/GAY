#pragma once


class generation_npc
{
private:
	int count_npc;
	int id_npc;
public:
	void NPC_generation();
	void load_model_NPC();
	void load_item_NPC();
	void load_location_spawn_NPC();
	void spawn_NPC();

};