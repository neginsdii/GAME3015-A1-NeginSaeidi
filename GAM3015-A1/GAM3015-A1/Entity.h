/**
* @brief Entity class.
* Extends SceneNode class
*
*/
#pragma once
#include "SceneNode.h"
class Entity : public SceneNode
{
public:
	/// <summary>
	/// Entity class constructor
	/// </summary>
	/// <param name="game">pointer to instance of game class</param>
	Entity(Game* game);
	/// <summary>
	/// SetVelocity function
	/// </summary>
	/// <param name="velocity">new value for the velocity</param>
	void			SetVelocity(XMFLOAT3 velocity);
	/// <summary>
	/// SetVelocity function
	/// </summary>
	/// <param name="vx">x component of velocity</param>
	/// <param name="vy">y component of velocity</param>
	/// <param name="vz">z component of velocity</param>
	void			SetVelocity(float vx, float vy, float vz);
	/// <summary>
	/// GetVelocity
	/// </summary>
	/// <returns>the velocity of entity</returns>
	XMFLOAT3		GetVelocity() const;
	/// <summary>
	/// updateCurrent function.
	/// </summary>
	/// <param name="gt">Gametimer </param>
	virtual void	updateCurrent(const GameTimer& gt);

public:
	XMFLOAT3		mVelocity;
};
