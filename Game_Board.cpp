/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game_Board.cpp
 * Author: blairjackson
 * 
 * Created on 19 April 2018, 12:51 PM
 */
#include <cstdlib>
#include <iostream>
#include <string>

#include "Game_Board.h"
#include "Rules.h"
#include "Player.h"

using namespace std;

Game_Board::Game_Board() {
}

Game_Board::Game_Board(const Game_Board& orig) {
}

Game_Board::~Game_Board() {
}

void Game_Board::init_gameboard() {

}

void Game_Board::add_piece(int player_num,int x, int y) {

    //if player 1 
    if (player_num == 1) {
        board[x][y] = 'X';
    }
    else if(player_num == 2){
        board[x][y] = 'O';
    }
    //if player two add colour.....****
    //write enum to get rid of magic numbers
}

void Game_Board::remove_piece(int x, int y) {
    board[x][y] = ' ';
}

void Game_Board::print_game_board() {
    cout << "printing game board" << endl;
    //get rid of magic number
    int line_num = 1;




    cout << "   " << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |  ";

    for (int i = 0; i < ROW; ++i) {
        cout << "\n---------------------------------------" << endl;
        cout << " " << line_num++;
        for (int j = 0; j < COL; ++j) {
            cout << " | " << board[i][j];
        }
        cout << " | ";
    }
    cout << "\n---------------------------------------" << endl;
}

