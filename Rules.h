/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rules.h
 * Author: blairjackson
 *
 * Created on 25 April 2018, 7:35 PM
 */

#ifndef RULES_H
#define RULES_H


class Rules{
public:
    Rules();
    Rules(const Rules& orig);
    virtual ~Rules();
    bool check_if_legal(int x, int y);
    
private:

};

#endif /* RULES_H */

