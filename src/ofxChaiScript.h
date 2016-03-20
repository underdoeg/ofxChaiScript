#ifndef OFX_CHAI_SCRIPT
#define OFX_CHAI_SCRIPT

#include "chaiscript/chaiscript.hpp"
#include "ofMain.h"

class ofxChaiScript: public chaiscript::ChaiScript{

public:
	ofxChaiScript();

	chaiscript::ModulePtr module;
};

#endif
