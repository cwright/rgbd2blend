//Quick and dirty RGBDtoolkit .png sequence to blender-meshfoot compatible .obj sequence. 
//requires ofxRGBDepth available at (https://github.com/obviousjim/ofxRGBDepth/ ),  and the blender-meshfoot script for blender, available here: http://blenderartists.org/forum/showthread.php?252844-Script-Meshfoot-OBJ-Sequence-Manager-%28For-Blender-2.6.2%29 )
// (c) colin wright 2012, MIT licence. 

#pragma once

#include "ofMain.h"
#include "ofxDepthImageCompressor.h"
#include <cmath>

class testApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
    void mouseReleased(int x, int y, int button);
    void dragEvent(ofDragInfo dragInfo);
    
    ofxDepthImageCompressor kinect;
    ofShortPixels spix;
    int depthThreshhold;
    ofPoint fov;
    int simpl;
    string statusText;
    vector<string> fileq;
    list<string> doneFiles;
    int filecounter;
    int filecount;
};
 