/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blairjackson
 *
 * Created on 19 April 2018, 12:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Game_Board.h"
#include "Player.h"
#include "Rules.h"

using namespace std;

//testing to see if this is the git repository
//second test, for git commit and pull

/*
 * 
 */
int main(int argc, char** argv) {
    int num_of_players = 0;
    bool game_over = false;

    Player player1;
    Player player2;
    Game_Board game;

    //not in use but set to make an empty board
    game.init_gameboard();

    player1.set_player_num(num_of_players);
    ++num_of_players;

    cout << num_of_players << endl;

    player2.set_player_num(num_of_players);
    ++num_of_players;
    cout << num_of_players << endl;

    player1.init_pieces();
    player2.init_pieces();
    player1.add_pieces(&game);
    player2.add_pieces(&game);
    //game.print_game_board();


    //check who's turn and loop checking rules
    
    while (game_over == false) {
        game.print_game_board();
        player1.make_move();
        game.print_game_board();
        //player2.make_move();
    }

    return 0;
}

