#ifndef __XITO_SCENE_H__
#define __XITO_SCENE_H__
#include "waittingRoom.h"

#include "cocos2d.h"

class xito : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	// implement the "static create()" method manually
	CREATE_FUNC(xito);
};

#endif // __XITO_SCENE_H__
