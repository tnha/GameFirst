#ifndef __TLMN_SCENE_H__
#define __TLMN_SCENE_H__
#include "waittingRoom.h"
#include "TableView.h"
#include "cocos-ext.h"
using namespace cocos2d;
using namespace cocos2d::extension;
class TLMN : public Layer, public TableViewDataSource, public TableViewDelegate
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
	Node * _bgNode;
	Sprite *_bgSprite;
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
	virtual void scrollViewDidScroll(ScrollView * view);
	virtual void scrollViewDidZoom(ScrollView * view);
	virtual void tableCellTouched(TableView * table, TableViewCell * cell);
	virtual Size cellSizeForTable(TableView * table);
	virtual TableViewCell * tableCellAtIndex(TableView * table, unsigned int idx);
	virtual unsigned int numberOfCellsInTableView(TableView * table);
	virtual void tableCellHighlight(TableView * table, TableViewCell * cell);
	virtual void tableCellUnhighlight(TableView * table, TableViewCell * cell);
    // implement the "static create()" method manually
    CREATE_FUNC(TLMN);
public:
	virtual Size cellSizeForTable(TableView *table);
	return Size(300, 50);
	virtual TableViewCell* tableCellAtIndex(TableView *table, ssize_t idx);
	virtual ssize_t numberOfCellsInTableView(TableView *table);
};

#endif // __TLMN_SCENE_H__
