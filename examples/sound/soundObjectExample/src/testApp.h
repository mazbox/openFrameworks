#pragma once

#include "ofMain.h"

#include "NoiseGenerator.h"
#include "LowPassFilter.h"
#include "DigitalDelay.h"

class testApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	ofSoundStream soundStream;
	
	// to make a dsp chain, you need to create at least an ofSoundOutput object
	// and attach it to an ofSoundStream with soundStream.setOutput
	ofSoundInput input;
	ofSoundOutput output;
	
	
	NoiseGenerator noise;
	LowPassFilter filter;
	DigitalDelay delay;
	
	float filterCutoff;
	float delayFeedback;
	
	ofTrueTypeFont font;
};
