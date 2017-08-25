//
//  fireworks.cpp
//  fireworks
//
//  Created by Ryota Nemoto on 2017/03/21.
//
//

#include "fireworks.hpp"

fireworks::fireworks(){
    
     //赤
    for (int i=0; i < NUM; i++){
        pos_x[i]=ofGetWidth()/2;
    }
    for (int i=0; i < NUM; i++){
        pos_y[i]=ofGetHeight();
        pos_y_2[i]=pos_y[i];
    }
     
    //青
    for (int i=0; i<NUM_2; i++){
        pos_bx[i]=ofGetWidth()/2;
        pos_by[i]=ofGetHeight();
        pos_by_2[i]=pos_by[i];
    }
     
    //黄
    for (int i=0; i<NUM_3; i++){
        pos_yx[i]=ofGetWidth()/2;
        pos_yy[i]=ofGetHeight();
        pos_yy_2[i]=pos_yy[i];
        //pos_yy_2[i]=ofGetHeight();
    }
    
         
    
    for (int i=0; i<NUM; i++){
        m[i]=ofRandom(0.5);
        v[i]=4;
    }
    
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);
    ofSetVerticalSync(true);
    
    center.set(0,0);
}


void fireworks::update(){
    
        //黄の花火
        for (int i=0; i<NUM_3; i++){
            
            if (pos_yy_2[i]<ofGetHeight()/2){
                pos_yx[i]+=1*cos((360/NUM_3)*i);
                pos_yy[i]+=1*sin((360/NUM_3)*i);
            }
            
            else {
                pos_yy[i]=pos_yy[i]-v[i];
                pos_yx[i]-=sin(ofGetElapsedTimef()*40);
                pos_yy_2[i]=pos_yy[i];
            }
        }
        
        //青
        for (int i=0; i<NUM_2; i++){
            
            if (pos_by_2[i]<ofGetHeight()/2){
                pos_bx[i]+=2*cos((360/NUM_2)*i);
                pos_by[i]+=2*sin((360/NUM_2)*i);
            }
            
            else {
                pos_by[i]=pos_by[i]-v[i];
                pos_bx[i]-=sin(ofGetElapsedTimef()*40);
                pos_by_2[i]=pos_by[i];
            }
        }
        //赤
        for (int i=0; i<NUM; i++){
            
            if (pos_y_2[i]<ofGetHeight()/2){
                pos_x[i]+=3*cos((360/NUM)*i);
                pos_y[i]+=3*sin((360/NUM)*i);
            }
            else {
                pos_y[i]=pos_y[i]-v[i];
                pos_x[i]-=sin(ofGetElapsedTimef()*40);
                pos_y_2[i]=pos_y[i];
            }
        }
    
    //外側
    pos_f = ofVec2f(pos_x[0],pos_y[0]);
    dis_= pos_f.length();
    
    //真ん中
    pos_fb = ofVec2f(pos_bx[0],pos_by[0]);
    dis_b = pos_fb.length();
    
    //内側
    pos_fy = ofVec2f(pos_yx[0],pos_yy[0]);
    dis_y = pos_fy.length();
    
    }

void fireworks::draw(){
    
    alpha = ofMap(dis_,0,800,255,0);
    
     for (int i=0; i<NUM; i++){
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255),alpha);
        ofDrawCircle(pos_x[i],pos_y[i],10*m[i]);
    }
    
    for (int i=0; i<NUM_2; i++){
        /*
        if (count%3==0){
        ofSetColor(36, 205, 163);
        }
        else if (count%3==1){
            ofSetColor(35, 184, 223);
        }
        else if (count%3==2){
            ofSetColor(239,148,38);
        }
         */
        
        
        alpha_b = ofMap(dis_b,0,750,255,0);
        mode = count % 4;

        switch(mode){
                
            case 1:
                ofSetColor(255,94,25,alpha_b); break;
           
            case 2:
                ofSetColor(71, 234, 126,alpha_b); break;
            case 0:
                ofSetColor(251, 231, 49,alpha_b); break;
            case 3:
                ofSetColor(255, 101, 12,alpha_b); break;
        }
        ofDrawCircle(pos_bx[i], pos_by[i], 10*m[i]);
            }
    
    for (int i=0; i<NUM_3; i++){
        
        alpha_y = ofMap(dis_y,0,700,255,0);
        mode_2= count % 4;
        
        switch(mode){
            case 1:
                ofSetColor(36, 205, 163,alpha_y); break;
                
            case 2:
                ofSetColor(229, 20, 118,alpha_y); break;
            case 0:
                ofSetColor(73,6,248,alpha_y); break;
            case 3:
                ofSetColor(209, 232, 41,alpha_y); break;
   
        }
        ofDrawCircle(pos_yx[i], pos_yy[i], 10*m[i]);
        
    }
    
    
    
}
