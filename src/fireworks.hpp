//
//  fireworks.hpp
//  fireworks
//
//  Created by Ryota Nemoto on 2017/03/21.
//
//

#ifndef fireworks_hpp
#define fireworks_hpp

#define NUM 50  //赤いはなび数
#define NUM_2 50 // 青いはなびの数
#define NUM_3 50 //黄色いはなびの数


#include <stdio.h>
#include <ofMain.h>  //ofと連携

class fireworks{
public:
    //コンストラクタ
    fireworks();
    void update();
    void draw();

float pos_x[NUM],pos_y[NUM];  //赤いはなびの中心
float pos_bx[NUM_2],pos_by[NUM_2];  //青いはなびの中心
float pos_yx[NUM_3],pos_yy[NUM_3]; //黄色いはなびの中心
float m[NUM],v[NUM];
float pos_yy_2[NUM_3],pos_by_2[NUM_2],pos_y_2[NUM];
    int count = -1;
    int mode,mode_2;
    
    ofVec2f center,pos_f;
    float dis_;          //外側
    float alpha;
    
    ofVec2f pos_fb;
    float dis_b;   //真ん中
    float alpha_b;
    
    ofVec2f pos_fy;
    float dis_y;   //内側
    float alpha_y;
    
    
};


#endif /* fireworks_hpp */
