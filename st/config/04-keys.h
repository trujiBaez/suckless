/*  Los siguiente atajos son para:
 *  1. Pegar del clipboard con ctrl + v 
 *  2. Aumentar/disminuir tamaño del texto con ctrl + = y ctrl + -, pero debe estar 
    acompañado del x.c adjunto. */

{ TERMMOD,              XK_V,           clippaste,      {.i =  0} },    // Debajo
{ ControlMask,          XK_v,           clippaste,      {.i =  0} },    // v minuscula
{ ControlMask,          XK_equal,       zoom,           {.f = +1} },    // ctrl + =
{ ControlMask,          XK_minus,       zoom,           {.f = -1} },    // ctrl + -
