#include <gb/gb.h>
#include <gb/cgb.h>
#include <stdio.h>
#include "flagtiles.h"
#include "transflag.h"
#include "lesbo.h"
#include "gay.h"
#include "ace.h"
#include "enby.h"
#include "bi.h"
#include "genderfluid.h"
#include "pan.h"


const UWORD backgroundpalette[] =
{
    flagtilesCGBPal0c0, flagtilesCGBPal0c1, flagtilesCGBPal0c2, flagtilesCGBPal0c3,
    flagtilesCGBPal1c0, flagtilesCGBPal1c1, flagtilesCGBPal1c2, flagtilesCGBPal1c3,
    flagtilesCGBPal2c0, flagtilesCGBPal2c1, flagtilesCGBPal2c2, flagtilesCGBPal2c3,
    flagtilesCGBPal3c0, flagtilesCGBPal3c1, flagtilesCGBPal3c2, flagtilesCGBPal3c3,
    flagtilesCGBPal4c0, flagtilesCGBPal4c1, flagtilesCGBPal4c2, flagtilesCGBPal4c3,
    flagtilesCGBPal5c0, flagtilesCGBPal5c1, flagtilesCGBPal5c2, flagtilesCGBPal5c3,
    flagtilesCGBPal6c0, flagtilesCGBPal6c1, flagtilesCGBPal6c2, flagtilesCGBPal6c3,
    flagtilesCGBPal7c0, flagtilesCGBPal7c1, flagtilesCGBPal7c2, flagtilesCGBPal7c3,
};
// setup
void checkInput();

// main shit
void main(){

    // background setup
    set_bkg_palette(0,7,&backgroundpalette[0]);
    set_bkg_data(0,25,flagtiles);

    VBK_REG=1;
    set_bkg_tiles(0,0,20,18, gayPLN1);
    VBK_REG=0;
    set_bkg_tiles(0,0,20,18, gayPLN0);

    SHOW_BKG;
    DISPLAY_ON;
    
    while(1){
        checkInput();
    }
}

void checkInput() {
    if(joypad() & J_RIGHT) {
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, lesboPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, lesboPLN0);
        wait_vbl_done;
        DISPLAY_ON;
        
        }
    if(joypad() & J_LEFT) {
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, transflagPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, transflagPLN0);
        wait_vbl_done;
        DISPLAY_ON;
        
        }
    if(joypad() & J_UP){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, gayPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, gayPLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
    if(joypad() & J_DOWN){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, biPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, biPLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
    if(joypad() & J_A){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, enbyPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, enbyPLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
    if(joypad() & J_B){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, panPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, panPLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
    if(joypad() & J_START){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, genderfluidPLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, genderfluidPLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
    if(joypad() & J_SELECT){
        wait_vbl_done;
        DISPLAY_OFF;
        VBK_REG=1;
        set_bkg_tiles(0,0,20,18, acePLN1);
        VBK_REG=0;
        set_bkg_tiles(0,0,20,18, acePLN0);
        wait_vbl_done;
        DISPLAY_ON;
    }
} 
