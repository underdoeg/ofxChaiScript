#include <chaiscript/utility/utility.hpp>
#include "ofxChaiScriptBindings.h"

using namespace chaiscript;

#define ADD_CLASS(Name) module->add(user_type<Name>(), #Name)
#define ADD_FUN(Name) module->add(chaiscript::fun(&Name), #Name )
#define ADD_CL_FUN(Class, Name) module->add(chaiscript::fun(&Class::Name), #Name )

std::shared_ptr<chaiscript::Module> ofxChaiScriptBindOf()
{
    auto module = std::make_shared<chaiscript::Module>();

    //
    ADD_FUN(ofGetFrameRate);

    //math
    {
        ModulePtr m = ModulePtr(new chaiscript::Module());
        chaiscript::utility::add_class<ofVec2f>(*m,
            "ofVec2f",
            {
                constructor<ofVec2f()>(),
                constructor<ofVec2f(float)>(),
                constructor<ofVec2f(float,float)>(),
                constructor<ofVec2f(const ofVec3f &)>(),
                constructor<ofVec2f(const ofVec4f &)>()
            },
            {
               //{fun(&ofVec2f::operator []), "[]"},
                {fun(&ofVec2f::operator ==), "=="},
                {fun(&ofVec2f::operator !=), "!="}
            }
        );
        module->add(m);
    }

    ADD_CLASS(ofVec3f);
    ADD_CLASS(ofPoint);

    //COLOR
    //ADD_CLASS(ofColor);

    //GRAPHICS
    ADD_FUN(ofPushStyle);
    ADD_FUN(ofPopStyle);

    module->add(fun<void,const ofColor&>(&ofSetColor), "ofSetColor");
    module->add(fun<void,const ofColor&,int>(&ofSetColor), "ofSetColor");
    module->add(fun<void,int,int,int>(&ofSetColor), "ofSetColor");
    module->add(fun<void,int,int,int,int>(&ofSetColor), "ofSetColor");
    module->add(fun<void,int>(&ofSetColor), "ofSetColor");
    module->add(fun(&ofSetHexColor), "ofSetHexColor");

    module->add(fun<void,const ofRectangle&>(&ofDrawRectangle), "ofDrawRectangle");
    module->add(fun<void,const ofPoint&,float,float>(&ofDrawRectangle), "ofDrawRectangle");
    module->add(fun<void,float,float,float,float>(&ofDrawRectangle), "ofDrawRectangle");
    module->add(fun<void,float,float,float,float, float>(&ofDrawRectangle), "ofDrawRectangle");

    return module;
}
