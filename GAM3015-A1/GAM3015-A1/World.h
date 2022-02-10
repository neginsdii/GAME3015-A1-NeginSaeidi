#pragma once
#include "SceneNode.h"
#include "SpriteNode.h"
#include "Aircraft.h"
class World
{
public:
	explicit							World(Game* window);
	void								update(const GameTimer& gt);
	void								draw();

	void								buildScene();

private:
	enum Layer
	{
		Background,
		Air,
		LayerCount
	};

private:
	Game* mGame;
	SceneNode* mSceneGraph;
	std::array<SceneNode*, 3>                         mSceneLayers;
	XMFLOAT4                                          mWorldBounds;
	XMFLOAT2                                          mSpawnPostion;
	float                                             mScrollSpeed;
	Aircraft*                                         mPlayerAircraft;
	Aircraft*										  mLeftEscort;
	Aircraft*										  mRightEscort;
	SpriteNode*										  mBackground;



};

