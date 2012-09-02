//Quick and dirty RGBDtoolkit .png sequence to blender-meshfoot compatible .obj sequence. 
//requires ofxRGBDepth available at (https://github.com/obviousjim/ofxRGBDepth/ ),  and the blender-meshfoot script for blender, available here: http://blenderartists.org/forum/showthread.php?252844-Script-Meshfoot-OBJ-Sequence-Manager-%28For-Blender-2.6.2%29 )
// (c) colin wright 2012, MIT licence. 

#pragma once

#include "ofMain.h"
#include "ofxUI.h"
#include "ofxDepthImageCompressor.h"
#include <cmath>

class testApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
    void mouseReleased(int x, int y, int button);
    void dragEvent(ofDragInfo dragInfo);
    void keyPressed(int key);
    
    ofxDepthImageCompressor kinect;
    ofShortPixels spix;
    int depthThreshhold;
    float fdepth;
    ofPoint fov;
    int simpl;
    float fsimpl;
    string statusText;
    vector<string> fileq;
    list<string> doneFiles;
    int filecounter;
    int filecount;
    
    //UI stuff
    ofxUICanvas *gui; 
    	void guiEvent(ofxUIEventArgs &e);
    	void gotMessage(ofMessage msg);
    
};
 