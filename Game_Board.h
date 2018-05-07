/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game_Board.h
 * Author: blairjackson
 *
 * Created on 19 April 2018, 12:51 PM
 */

#ifndef GAME_BOARD_H
#define GAME_BOARD_H

#define ROW 8
#define COL 8



class Game_Board {
public:
    Game_Board();
    Game_Board(const Game_Board& orig);
    virtual ~Game_Board();
    
    void print_game_board();
    void init_gameboard();
    void add_piece(int player_num,int x, int y);
    void remove_piece(int x, int y);
    
private:
    char board[ROW][COL] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
   
    };
    
   

};

#endif /* GAME_BOARD_H */

