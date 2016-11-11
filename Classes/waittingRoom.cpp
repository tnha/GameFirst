#include "waittingRoom.h"
#include "SimpleAudioEngine.h"
#include "ui\CocosGUI.h"
USING_NS_CC;
using namespace ui;
Scene* waittingRoom::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = waittingRoom::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool waittingRoom::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    //Button back
	auto backButton = ui::Button::create("back.png");
	backButton->setPosition(Vec2(origin.x + backButton->getContentSize().width/2,
		                         origin.y + visibleSize.height - backButton->getContentSize().height/2));
	backButton->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:
			
			break;
		}
	});

	this->addChild(backButton, 100);
	//Button hỗ trợ
	auto callGm = ui::Button::create("dienthoai.png");
	callGm->setPosition(Vec2(origin.x + callGm->getContentSize().width / 2 + backButton->getContentSize().width + 10
		, origin.y + visibleSize.height - callGm->getContentSize().height / 2 + 10));
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
	//Button mail
	auto mail = ui::Button::create("homthu.png");
	mail->setPosition(Vec2(origin.x + visibleSize.width - mail->getContentSize().width / 2
		, origin.y + visibleSize.height - mail->getContentSize().height / 2));
	mail->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(mail, 100);
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
	friendlist->setPosition(Vec2(origin.x + visibleSize.width - friendlist->getContentSize().width / 2 - setting->getContentSize().width -55
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
	rank->setPosition(Vec2(origin.x + visibleSize.width - rank->getContentSize().width / 2 - setting->getContentSize().width - friendlist->getContentSize().width -85
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
	purchase->setPosition(Vec2(origin.x + visibleSize.width - purchase->getContentSize().width / 2 - setting->getContentSize().width - friendlist->getContentSize().width - rank->getContentSize().width -110
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
	exchange->setPosition(Vec2(origin.x +visibleSize.width/2,
		origin.y + exchange->getContentSize().height/2));
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
	avatar->setPosition(Vec2(origin.x + avatar->getContentSize().width/2,
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
	//Button Phỏm
	auto phom = ui::Button::create("phom.png");
	phom->setScale(0.7);
	phom->setPosition(Vec2(origin.x + visibleSize.width/2 -300, origin.x +visibleSize.height/2 +150));
	phom->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(phom, 100);
	//Button Xì Tố
	auto xito = ui::Button::create("xito.png");
	xito->setScale(0.7);
	xito->setPosition(Vec2(origin.x + visibleSize.width / 2, origin.x + visibleSize.height / 2 + 150));
	xito->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(xito, 100);
	//Button Tá lả
	auto tala = ui::Button::create("TA-LA.png");
	tala->setScale(0.7);
	tala->setPosition(Vec2(origin.x + visibleSize.width / 2 + 300, origin.x + visibleSize.height / 2 + 150));
	tala->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(tala, 100);
	//Button Tiến Lên Miền Nam
	auto tlmn = ui::Button::create("tien-len-mien-nam.png");
	tlmn->setScale(0.7);
	tlmn->setPosition(Vec2(origin.x + visibleSize.width / 2 -300, origin.x + visibleSize.height / 2 - 80));
	tlmn->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(tlmn, 100);
	//Button Sâm
	auto sam = ui::Button::create("sam.png");
	sam->setScale(0.7);
	sam->setPosition(Vec2(origin.x + visibleSize.width / 2, origin.x + visibleSize.height / 2 - 80));
	sam->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(sam, 100);
	//Button Xóc Đĩa
	auto xocdia = ui::Button::create("xocdia.png");
	xocdia->setScale(0.7);
	xocdia->setPosition(Vec2(origin.x + visibleSize.width/2 +300, origin.x + visibleSize.height / 2 - 80));
	xocdia->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(xocdia, 100);
	//Button Next page
	auto nextpage = ui::Button::create("next.png");
	nextpage->setRotation(180);
	nextpage->setPosition(Vec2(origin.x + visibleSize.width - nextpage->getContentSize().width / 2
		, origin.y + visibleSize.height - nextpage->getContentSize().height / 2));
	nextpage->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(nextpage, 100);
	//Button preview page
	auto previewpage = ui::Button::create("next.png");
	previewpage->setPosition(Vec2(origin.x + visibleSize.width - previewpage->getContentSize().width / 2
		, origin.y + visibleSize.height - previewpage->getContentSize().height / 2));
	previewpage->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType Type){
		switch (Type)
		{
		case ui::Widget::TouchEventType::BEGAN:

			break;
		case ui::Widget::TouchEventType::ENDED:

			break;
		}
	});
	this->addChild(previewpage, 100);
	//---------------------------------------------------------------------
	//thông báo
	auto notification = Sprite::create("chaomung.png");
	notification->setPosition(Vec2(origin.x +visibleSize.width / 2, origin.y + visibleSize.height - notification->getContentSize().height / 2 -20));
	this->addChild(notification, 100);
	//Loa
	auto loa = Sprite::create("thong-bao.png");
	loa->setPosition(Vec2(origin.x + visibleSize.width / 2 - 300, origin.y + visibleSize.height - notification->getContentSize().height / 2 - 20));
	this->addChild(loa, 100);
    // BackGround
    auto background = Sprite::create("background.png");
	background->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	this->addChild(background, 0);
	//Background menu
	auto backgroundMenu = Sprite::create("menu.png");
	backgroundMenu->setPosition(Vec2(visibleSize.width / 2 + origin.x, backgroundMenu->getContentSize().height/2 + origin.y));
	this->addChild(backgroundMenu, 1);
	//khung Ken
	auto khung1 = Sprite::create("xu.png");
	khung1->setPosition(Vec2(origin.x + visibleSize.width / 2 - exchange->getContentSize().width, origin.y + khung1->getContentSize().height+40));
	khung1->setScale(0.7);
	khung1->setScaleX(0.8);
	this->addChild(khung1, 50);
	//khung Xu
	auto khung2= Sprite::create("xu.png");
	khung2->setPosition(Vec2(origin.x + visibleSize.width / 2 - exchange->getContentSize().width, origin.y + khung2->getContentSize().height -khung1->getContentSize().height+30));
	khung2->setScale(0.7);
	khung2->setScaleX(0.8);
	this->addChild(khung2, 50);
	//Vip
	auto vip = Sprite::create("vip.png");
	vip->setPosition(Vec2(origin.x + avatar->getContentSize().width + 50, origin.y + 60));
	this->addChild(vip, 50);
	//tên người chơi
	auto gamer = Label::createWithTTF("TranHa", "fonts/Marker Felt.ttf", 24);
	gamer->setPosition(Vec2(origin.x + avatar->getContentSize().width +50, origin.y +100));
	this->addChild(gamer, 50);
	//ID người chơi
	auto ID = Label::createWithTTF("ID: 1234567", "fonts/Marker Felt.ttf", 24);
	ID->setPosition(Vec2(origin.x + ID->getContentSize().width + 90, origin.y + 20));
	this->addChild(ID, 50);
    return true;
}


void waittingRoom::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}
