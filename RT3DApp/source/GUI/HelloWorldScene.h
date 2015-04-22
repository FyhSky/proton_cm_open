#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

class HelloWorld : public cocos2d::CCLayer
{
public:
	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();  

	// there's no 'id' in cpp, so we recommand to return the exactly class pointer
	static CCScene* scene();

	static HelloWorld* create();
		
	virtual void onEnter();
	virtual void onExit();

	// a selector callback
	void menuCallback(CCObject* pSender);
		
	CCSprite*	m_grossini;
	int			m_runact;
};

#endif // __HELLOWORLD_SCENE_H__
