#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
     //BackgroundImage.load("gi01a201503011500.jpg");
    
    ofSetFrameRate(60);

    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);
    ofSetVerticalSync(true);
    
    //インスタンス化、初期設定を整える！
    
    for (int i=30; i<30; i++){
        f_[i]=*new fireworks();
    }
    
     
    
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (flag==1){
        f_[0].update();
    }
    else if (flag==2){
        f_[1].update();
    }
    else if (flag==3){
        f_[2].update();
    }
    else if (flag==4){
        f_[3].update();
    }
    else if (flag==5){
        f_[4].update();
    }
    else if (flag==6){
        f_[5].update();
    }
    else if (flag==7){
        f_[6].update();
    }
    else if (flag==8){
        f_[7].update();
    }
    else if (flag==9){
        f_[8].update();
    }
    else if (flag==10){
        f_[9].update();
    }
    else if (flag==11){
        f_[10].update();
    }
    else if (flag==12){
        f_[11].update();
    }
    else if (flag==13){
        f_[12].update();
    }
    else if (flag==14){
        f_[13].update();
    }
    else if (flag==15){
        f_[14].update();
    }
    else if (flag==16){
        f_[15].update();
    }
    else if (flag==17){
        f_[16].update();
    }
    else if (flag==18){
        f_[17].update();
    }
    else if (flag==19){
        f_[18].update();
    }
    else if (flag==20){
        f_[19].update();
    }
    else if (flag==21){
        f_[20].update();
    }
    else if (flag==22){
        f_[21].update();
    }
    else if (flag==23){
        f_[22].update();
    }
    else if (flag==24){
        f_[23].update();
    }
    else if (flag==25){
        f_[24].update();
    }
    else if (flag==26){
        f_[25].update();
    }
    else if (flag==27){
        f_[26].update();
    }
    else if (flag==28){
        f_[27].update();
    }
    else if (flag==29){
        f_[28].update();
    }
    else if (flag==30){
        f_[29].update();
    }
    else if (flag==31){
        f_[30].update();
    }





}

//--------------------------------------------------------------
void ofApp::draw(){
    /*
    if(back == 0){
    ofSetColor(255,255,255,255);
    BackgroundImage.draw(0,0,ofGetWidth(),ofGetHeight());
    }
    back++;
     */
    
    
    ofSetColor(0,0,0,20);//透明度のある長方形の描画
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);//重なった色の暗い部分を強調
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    ofEnableBlendMode(OF_BLENDMODE_ADD);//色を重ねるほど明るくなる
    
    if (flag==1){
        f_[0].draw();
    }
    else if (flag==2){
        f_[1].draw();
    }
    else if (flag==3){
        f_[2].draw();
    }
    else if (flag==4){
        f_[3].draw();
    }
    else if (flag==5){
        f_[4].draw();
    }
    else if (flag==6){
        f_[5].draw();
    }
    else if (flag==7){
        f_[6].draw();
    }
    else if (flag==8){
        f_[7].draw();
    }
    else if (flag==9){
        f_[8].draw();
    }
    else if (flag==10){
        f_[9].draw();
    }
    else if (flag==11){
        f_[10].draw();
    }
    else if (flag==12){
        f_[11].draw();
    }
    else if (flag==13){
        f_[12].draw();
    }
    else if (flag==14){
        f_[13].draw();
    }
    else if (flag==15){
        f_[14].draw();
    }
    else if (flag==16){
        f_[15].draw();
    }
    else if (flag==17){
        f_[16].draw();
    }
    else if (flag==18){
        f_[17].draw();
    }
    else if (flag==19){
        f_[18].draw();
    }
    else if (flag==20){
        f_[19].draw();
    }
    else if (flag==21){
        f_[20].draw();
    }
    else if (flag==22){
        f_[21].draw();
    }
    else if (flag==23){
        f_[22].draw();
    }
    else if (flag==24){
        f_[23].draw();
    }
    else if (flag==25){
        f_[24].draw();
    }
    else if (flag==26){
        f_[25].draw();
    }
    else if (flag==27){
        f_[26].draw();
    }
    else if (flag==28){
        f_[27].draw();
    }
    else if (flag==29){
        f_[28].draw();
    }
    else if (flag==30){
        f_[29].draw();
    }
    else if (flag==31){
        f_[30].draw();
    }
    
    ofSetColor(230,230,230);
    for(int i = 0; i < 30; i++){
    ofDrawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()/2+200),2);
    }
    
    
    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' '){
        flag+=1;
        for(int i = 0; i < NUM; i++){
            f_[i].count++;
        }
    }

    }

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
  }

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
