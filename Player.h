/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: blairjackson
 *
 * Created on 19 April 2018, 4:09 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

#define OFFSET 1

#include <string>
#include "Rules.h"
using namespace std;

class Player : public Rules {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    void set_player_num(int num_of_players);
    void add_pieces(Game_Board * game);
    void init_pieces();
    void make_move();
    void check_move(int x, int y, int newx, int newy);
    bool apply_move(int x, int y);

    void set_game_ptr(Game_Board * game) {
        ptr_game = game;

    }

private:
    Rules referee;
    Game_Board * ptr_game;
    int player_num = 0; // use to determine first and second player

    struct players_piece {
        int x, y; //x and y coordinates to position piece on board!!!

    } piece1, piece2, piece3, piece4, piece5, piece6,
    piece7, piece8, piece9, piece10, piece11, piece12;
};

#endif /* PLAYER_H */

