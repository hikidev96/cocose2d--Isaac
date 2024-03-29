#pragma once
#include "MonsterBase.h"

class Dip : public MonsterBase
{
private:

public:
	Dip(Scene* scene, Vec2 position);
	~Dip() {}

	void tick();
	void SetZorder();
	void ChangeTag();
	void MonsterSetTag();
	void MonsterEraseCall();
	void DoAttack();
};