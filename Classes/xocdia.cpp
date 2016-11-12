#include "xocdia.h"
#include "SimpleAudioEngine.h"
#include "ui\CocosGUI.h"
USING_NS_CC;
using namespace ui;
Scene* xocdia::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = xocdia::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool xocdia::init()
{
	//////////////////////////////
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//------------button back
	auto backButton = ui::Button::create("icon-back.png");
	backButton->setPosition(Vec2(origin.x + backButton->getContentSize().width / 2,
		origin.y + visibleSize.height - backButton->getContentSize().height / 2));
	backButton->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:
			auto waittingRoom = waittingRoom::createScene();
			Director::getInstance()->replaceScene(TransitionFade::create(0.5, waittingRoom));
			break;
		}
	});
	this->addChild(backButton, 100);
	//Button hỗ trợ
	auto callGm = ui::Button::create("icon-phone.png");
	callGm->setPosition(Vec2(origin.x + callGm->getContentSize().width / 2 + backButton->getContentSize().width + 10
		, origin.y + visibleSize.height - callGm->getContentSize().height / 2));
	callGm->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(callGm, 100);
	//Button cài đặt
	auto setting = ui::Button::create("CAI-DAT.png");
	setting->setPosition(Vec2(origin.x + visibleSize.width - setting->getContentSize().width / 2 - 25
		, origin.y + setting->getContentSize().height / 2));
	setting->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(setting, 100);
	//Button bạn bè
	auto friendlist = ui::Button::create("banbe.png");
	friendlist->setPosition(Vec2(origin.x + visibleSize.width - friendlist->getContentSize().width / 2 - setting->getContentSize().width - 55
		, origin.y + friendlist->getContentSize().height / 2));
	friendlist->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(friendlist, 100);
	//Button xếp hạng
	auto rank = ui::Button::create("XEP-HANG.png");
	rank->setPosition(Vec2(origin.x + visibleSize.width - rank->getContentSize().width / 2 - setting->getContentSize().width - friendlist->getContentSize().width - 85
		, origin.y + rank->getContentSize().height / 2));
	rank->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(rank, 100);
	//Button nạp xu
	auto purchase = ui::Button::create("NAP-XU.png");
	purchase->setPosition(Vec2(origin.x + visibleSize.width - purchase->getContentSize().width / 2 - setting->getContentSize().width - friendlist->getContentSize().width - rank->getContentSize().width - 110
		, origin.y + purchase->getContentSize().height / 2));
	purchase->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(purchase, 100);
	//Button đổi thưởng
	auto exchange = ui::Button::create("DOI-THUONG.png");
	exchange->setPosition(Vec2(origin.x + visibleSize.width / 2,
		origin.y + exchange->getContentSize().height / 2));
	exchange->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(exchange, 100);
	//Button ảnh đại diện
	auto avatar = ui::Button::create("khungavatar.png");
	avatar->setPosition(Vec2(origin.x + avatar->getContentSize().width / 2,
		origin.y + avatar->getContentSize().height / 2));
	avatar->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(avatar, 100);
	//----------------------------------------------------
	// BackGround
	auto background = Sprite::create("background.png");
	background->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	this->addChild(background, 0);
	//Background menu
	auto backgroundMenu = Sprite::create("menu.png");
	backgroundMenu->setPosition(Vec2(visibleSize.width / 2 + origin.x, backgroundMenu->getContentSize().height / 2 + origin.y));
	this->addChild(backgroundMenu, 1);
	//khung Ken
	auto khung1 = Sprite::create("xu.png");
	khung1->setPosition(Vec2(origin.x + visibleSize.width / 2 - exchange->getContentSize().width, origin.y + khung1->getContentSize().height + 40));
	khung1->setScale(0.7);
	khung1->setScaleX(0.8);
	this->addChild(khung1, 50);
	//khung Xu
	auto khung2 = Sprite::create("xu.png");
	khung2->setPosition(Vec2(origin.x + visibleSize.width / 2 - exchange->getContentSize().width, origin.y + khung2->getContentSize().height - khung1->getContentSize().height + 30));
	khung2->setScale(0.7);
	khung2->setScaleX(0.8);
	this->addChild(khung2, 50);
	//Vip
	auto vip = Sprite::create("vip.png");
	vip->setPosition(Vec2(origin.x + avatar->getContentSize().width + 50, origin.y + 60));
	this->addChild(vip, 50);
	//tên người chơi
	auto gamer = Label::createWithTTF("TranHa", "fonts/Marker Felt.ttf", 24);
	gamer->setPosition(Vec2(origin.x + avatar->getContentSize().width + 50, origin.y + 100));
	this->addChild(gamer, 50);
	//ID người chơi
	auto ID = Label::createWithTTF("ID: 1234567", "fonts/Marker Felt.ttf", 24);
	ID->setPosition(Vec2(origin.x + ID->getContentSize().width + 90, origin.y + 20));
	this->addChild(ID, 50);

	return true;
}