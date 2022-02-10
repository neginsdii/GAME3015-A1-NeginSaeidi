/**
* @brief Aircraft class.
* Creats Aircraft renderItem
*
*/
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
	/// <summary>
	/// Aircraft class constructor
	/// </summary>
	/// <param name="type">type of the aircraft</param>
	/// <param name="game">pointer to game</param>
	Aircraft(Type type, Game* game);


private:

	virtual void		drawCurrent() const;
	/// <summary>
	/// buildCurrent function.
	/// setting up renderItem for aircraft
	/// </summary>
	virtual void		buildCurrent();

private:
	Type				mType;
	std::string			mSprite;

};

