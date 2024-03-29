﻿#include "Viewer.h"
Viewer::Viewer(){
    blackS.load("blackS.png");
    blackC.load("blackC.png");
    blackR.load("blackR.png");
    blackE.load("blackE.png");
    blackH.load("blackH.png");
    blackA.load("blackA.png");
    blackG.load("blackG.png");
    redS.load("redS.png");
    redC.load("redC.png");
    redR.load("redR.png");
    redE.load("redE.png");
    redH.load("redH.png");
    redA.load("redA.png");
    redG.load("redG.png");

    start.load("start.png");
    read.load("read.png");
    end.load("end.png");
    lose.load("lose.png");
    blackcheck.load("blackcheck.png");
    redcheck.load("redcheck.png");
    
    point.load("point.png");
    blackwin.load("blackwin.png");
    redwin.load("redwin.png");
}
void Viewer::drawWinMessage(QPainter& ptr, bool winner) {
    if (winner == true) {
        ptr.drawPixmap(475, 165, 150, 130, blackwin);
    }
    else {
        ptr.drawPixmap(475, 165, 150, 130, redwin);
    }
}
void Viewer::drawCheckMessage(QPainter& ptr, bool winner) {
    if (winner == true) {
        ptr.drawPixmap(155, 165, 150, 130, blackcheck);
    }
    else {
        ptr.drawPixmap(155, 165, 150, 130, redcheck);
    }
}
void Viewer::drawhomepage(QPainter& ptr) {
    ptr.drawPixmap(30, 270, 120, 50, start);
    ptr.drawPixmap(30, 350, 120, 50, read);
    ptr.drawPixmap(30, 430, 120, 50, end);
}
void Viewer::drawChess(QPainter& ptr, int x, int y, int value, bool whoose) {
    if (value > 9) {
        if (value % 10 != 0) {
            switch (value % 10) {
            case 1:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackS);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redS);
                break;
            case 2:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackC);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redC);
                break;
            case 3:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackR);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redR);
                break;
            case 4:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackH);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redH);
                break;
            case 5:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackE);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redE);
                break;
            case 6:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackA);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redA);
                break;
            case 7:
                if (whoose == true)
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, blackG);
                else
                    ptr.drawPixmap(x - 24, y - 24, 48, 48, redG);
                break;
            }
            ptr.drawPixmap(x - 12, y - 12, 24, 24, point);
        }
        else {
            ptr.drawPixmap(x - 12, y - 12, 24, 24, point);
        }
    }
    else if (value != 0) {
        switch (value % 10) {
        case 1:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackS);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redS);
            break;
        case 2:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackC);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redC);
            break;
        case 3:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackR);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redR);
            break;
        case 4:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackH);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redH);
            break;
        case 5:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackE);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redE);
            break;
        case 6:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackA);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redA);
            break;
        case 7:
            if (whoose == true)
                ptr.drawPixmap(x - 24, y - 24, 48, 48, blackG);
            else
                ptr.drawPixmap(x - 24, y - 24, 48, 48, redG);
            break;
        }
    }
}
void Viewer::drawBoard(QPainter& ptr, const Board& board) {
    
    for (int i = 0; i < 10; i++) {
        ptr.drawLine(30, 30 + i * 50, 430, 30 + i * 50);
    }
    for (int i = 0; i < 9; i++) {
        if (i == 0 || i == 8) {
            ptr.drawLine(30 + i * 50, 30, 30 + i * 50, 480);
        }
        else {
            ptr.drawLine(30 + i * 50, 30, 30 + i * 50, 230);
            ptr.drawLine(30 + i * 50, 280, 30 + i * 50, 480);
        }
    }
    ptr.drawLine(180, 30, 280, 130);
    ptr.drawLine(280, 30, 180, 130);
    ptr.drawLine(180, 480, 280, 380);
    ptr.drawLine(280, 480, 180, 380);
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            drawChess(ptr, 30 + j * 50, 30 + i * 50, board.map[i][j], board.BorR[i][j]);
        }
    }
    
    
    ptr.drawPixmap(480, 30, 120, 40, lose);
    ptr.drawPixmap(480, 440, 120, 40, lose);
}
