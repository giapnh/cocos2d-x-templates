//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef _____FILEBASENAMEASIDENTIFIER____SCENE_H__
#define _____FILEBASENAMEASIDENTIFIER____SCENE_H__

#include "cocos2d.h"

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::Layer
{
public:
    //there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(___FILEBASENAMEASIDENTIFIER___);

private:

};

#endif /* defined(_____FILEBASENAMEASIDENTIFIER____SCENE_H__) */
