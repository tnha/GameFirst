#ifndef __WAITTINGROOM_SCENE_H__
#define __WAITTINGROOM_SCENE_H__
#include "TLMN.h"
#include "phom.h"
#include "sam.h"
#include "tala.h"
#include "xito.h"
#include "xocdia.h"
#include "cocos2d.h"

class waittingRoom : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(waittingRoom);
};

#endif // __WAITTINGROOM_SCENE_H__
