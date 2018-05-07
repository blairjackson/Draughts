/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: blairjackson
 * 
 * Created on 19 April 2018, 4:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

#include "Game_Board.h"
#include "Player.h"
#include "Rules.h"

using namespace std;

Player::Player() {
}

Player::Player(const Player& orig) {
}

Player::~Player() {
}

void Player::set_player_num(int num_of_players) {
    if (num_of_players == 0) {
        player_num = 1;

    } else {
        player_num = 2;
    }
}

void Player::init_pieces() {
    if (player_num == 1) {
        piece1.x = 1 - OFFSET;
        piece1.y = 2 - OFFSET;
        piece2.x = 1 - OFFSET;
        piece2.y = 4 - OFFSET;
        piece3.x = 1 - OFFSET;
        piece3.y = 6 - OFFSET;
        piece4.x = 1 - OFFSET;
        piece4.y = 8 - OFFSET;
        piece5.x = 2 - OFFSET;
        piece5.y = 1 - OFFSET;
        piece6.x = 2 - OFFSET;
        piece6.y = 3 - OFFSET;
        piece7.x = 2 - OFFSET;
        piece7.y = 5 - OFFSET;
        piece8.x = 2 - OFFSET;
        piece8.y = 7 - OFFSET;
        piece9.x = 3 - OFFSET;
        piece9.y = 2 - OFFSET;
        piece10.x = 3 - OFFSET;
        piece10.y = 4 - OFFSET;
        piece11.x = 3 - OFFSET;
        piece11.y = 6 - OFFSET;
        piece12.x = 3 - OFFSET;
        piece12.y = 8 - OFFSET;
    } else if (player_num == 2) {
        piece1.x = 8 - OFFSET;
        piece1.y = 1 - OFFSET;
        piece2.x = 8 - OFFSET;
        piece2.y = 3 - OFFSET;
        piece3.x = 8 - OFFSET;
        piece3.y = 5 - OFFSET;
        piece4.x = 8 - OFFSET;
        piece4.y = 7 - OFFSET;
        piece5.x = 7 - OFFSET;
        piece5.y = 2 - OFFSET;
        piece6.x = 7 - OFFSET;
        piece6.y = 4 - OFFSET;
        piece7.x = 7 - OFFSET;
        piece7.y = 6 - OFFSET;
        piece8.x = 7 - OFFSET;
        piece8.y = 8 - OFFSET;
        piece9.x = 6 - OFFSET;
        piece9.y = 1 - OFFSET;
        piece10.x = 6 - OFFSET;
        piece10.y = 3 - OFFSET;
        piece11.x = 6 - OFFSET;
        piece11.y = 5 - OFFSET;
        piece12.x = 6 - OFFSET;
        piece12.y = 7 - OFFSET;
    }
}

void Player::add_pieces(Game_Board* game) {

    game->add_piece(player_num, piece1.x, piece1.y);
    game->add_piece(player_num, piece2.x, piece2.y);
    game->add_piece(player_num, piece3.x, piece3.y);
    game->add_piece(player_num, piece4.x, piece4.y);
    game->add_piece(player_num, piece5.x, piece5.y);
    game->add_piece(player_num, piece6.x, piece6.y);
    game->add_piece(player_num, piece7.x, piece7.y);
    game->add_piece(player_num, piece8.x, piece8.y);
    game->add_piece(player_num, piece9.x, piece9.y);
    game->add_piece(player_num, piece10.x, piece10.y);
    game->add_piece(player_num, piece11.x, piece11.y);
    game->add_piece(player_num, piece12.x, piece12.y);

    set_game_ptr(game);

}

void Player::make_move() {
    vector <string> tokens;
    std::vector<int>::iterator it;
    string move;

    //get user input, change to full text from assignment specs
    cout << "make a move" << endl;
    cin >> move;

    //tokenize move 
    boost::tokenizer<> tok(move);
    for (boost::tokenizer<>::iterator beg = tok.begin(); beg != tok.end(); ++beg) {
        tokens.push_back(*beg);
    }

    int prevx, prevy, newx, newy;
    prevx = stoi(tokens[0]) - OFFSET;
    prevy = stoi(tokens[1]) - OFFSET;
    newx = stoi(tokens[2]) - OFFSET;
    newy = stoi(tokens[3]) - OFFSET;

    check_move(prevx, prevy, newx, newy);

}

void Player::check_move(int x, int y, int newx, int newy) {
    //check each piece position and matching x,y

    if (piece1.x == x && piece1.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece1.x = newx;
            piece1.y = newy;
        }

    } else if (piece2.x == x && piece2.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece2.x = newx;
            piece2.y = newy;
        }

    } else if (piece3.x == x && piece3.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece3.x = newx;
            piece3.y = newy;
        }

    } else if (piece4.x == x && piece4.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece4.x = newx;
            piece4.y = newy;
        }

    } else if (piece5.x == x && piece5.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece5.x = newx;
            piece5.y = newy;
        }

    } else if (piece6.x == x && piece6.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece6.x = newx;
            piece6.y = newy;
        }

    } else if (piece7.x == x && piece7.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece7.x = newx;
            piece7.y = newy;
        }

    } else if (piece8.x == x && piece8.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece8.x = newx;
            piece8.y = newy;
        }

    } else if (piece9.x == x && piece9.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece9.x = newx;
            piece9.y = newy;
        }

    } else if (piece10.x == x && piece10.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece10.x = newx;
            piece10.y = newy;
        }

    } else if (piece11.x == x && piece11.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece11.x = newx;
            piece11.y = newy;
        }

    } else if (piece12.x == x && piece12.y == y) {
        //function to remove piece from board
        ptr_game->remove_piece(x, y);
        if (apply_move(newx, newy) == true) {
            piece12.x = newx;
            piece12.y = newy;
        }

    } else {
        cout << "no matching piece, try again" << endl;
        make_move();
    }

}

bool Player::apply_move(int newx, int newy) {

    if (referee.check_if_legal(newx, newy) == true) {
        //places new move on the board

        ptr_game->add_piece(player_num, newx, newy);
        return true;
    } else {
        make_move();
    }
    return false;
}