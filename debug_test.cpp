// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Oct 2022
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // This shows what happens with local variables

    int variable_X = 10;
    int variable_Y = 30;
    int variable_Z = variable_X + variable_Y;
}
