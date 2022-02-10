#pragma once
#include "Entity.h"

#include <string>

class Aircraft : public Entity
{

public:
	enum  Type
	{
		Eagle,
		Raptor,
	};

	Aircraft(Type type, Game* game);


private:
	virtual void		drawCurrent() const;
	virtual void		buildCurrent();

private:
	Type				mType;
	std::string			mSprite;
	RenderItem*			mRendererItem;
};

