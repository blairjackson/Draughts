/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rules.cpp
 * Author: blairjackson
 * 
 * Created on 25 April 2018, 7:35 PM
 */


#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

#include "Game_Board.h"
#include "Player.h"
#include "Rules.h"

using namespace std;

Rules::Rules() {
}

Rules::Rules(const Rules& orig) {
}

Rules::~Rules() {
}

bool Rules::check_if_legal(int x, int y) {
    //check row is even if so, odd y position is illegal move
    //add check to see if there is a piece already in position
    

    if (x == 0 || x % 2 == 0) {
        if (y % 2 == 0 || y == 0) {
            cout << "this is an illegal move" << endl;
            return false;
        }
    } else {
        if (y % 2 != 0) {
            cout << "illegal move on this row" << endl;
            return false;
        }
    }

    return true;
}

