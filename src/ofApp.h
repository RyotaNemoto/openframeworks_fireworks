#pragma once

//#define size 30
#include "ofMain.h"
#include "fireworks.hpp"
#define num 30;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
//    float pos_x[NUM],pos_y[NUM];  //赤いはなびの中心
//    float pos_bx[NUM_2],pos_by[NUM_2];  //青いはなびの中心
//    float pos_yx[NUM_3],pos_yy[NUM_3]; //黄色いはなびの中心
//    float m[NUM],g,a[NUM],v[NUM];
    

   
      int flag = 0;
    
    fireworks f_[30];  //動作ができる段階になった！
    //firewoks f[size];
    
    int count=0;
    ofImage BackgroundImage;
    
    int back = 0;
    
    
};
