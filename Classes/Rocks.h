#pragma once
#include "ObjectBase.h"

class Rocks : public ObjectBase
{
private:
	
public:
	Rocks() {}
	~Rocks() {}

	void tick();
	void CreateObject(Scene* scene, Vec2 position, int index);
};