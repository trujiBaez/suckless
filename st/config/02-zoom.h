/* 02-zoom.h */

/* Zoom de fuente */

#define ZOOM_UP      { TERMMOD, XK_plus,  zoom,      {.f = +1} },
#define ZOOM_DOWN    { TERMMOD, XK_minus, zoom,      {.f = -1} },
#define ZOOM_RESET   { TERMMOD, XK_0,     zoomreset, {.f =  0} },
