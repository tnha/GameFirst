#ifndef __TALA_SCENE_H__
#define __TALA_SCENE_H__
#include "waittingRoom.h"

#include "cocos2d.h"

class tala : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	// implement the "static create()" method manually
	CREATE_FUNC(tala);
};

#endif // __TALA_SCENE_H__
