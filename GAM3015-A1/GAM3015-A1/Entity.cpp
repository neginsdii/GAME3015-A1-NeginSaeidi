#include "Entity.h"

Entity::Entity(Game* game)
	:SceneNode(game)
	, mVelocity(0, 0, 0)
{
}

void Entity::SetVelocity(XMFLOAT3 velocity)
{
	mVelocity = velocity;
}

void Entity::SetVelocity(float vx, float vy, float vz)
{
	mVelocity = XMFLOAT3(vx, vy, vz);
}

XMFLOAT3 Entity::GetVelocity() const
{
	return mVelocity;
}

void Entity::updateCurrent(const GameTimer& gt)
{
	XMFLOAT3 mV;
	mV.x = mVelocity.x * gt.DeltaTime();
	mV.y = mVelocity.y * gt.DeltaTime();
	mV.z = mVelocity.z * gt.DeltaTime();

	move(mV.x, mV.y, mV.z);

	renderer->World = getWorldTransform();
	renderer->NumFramesDirty++;
}
