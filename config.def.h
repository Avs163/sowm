#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask


#define BORDER_COLOR "#f8f8f2"
#define BORDER_WIDTH 2

const int winDist = 20; /*pixel by which the window moves and change their size*/

const char* menu[]     = {"dmenu_run",      0};
const char* term[]     = {"kitty",          0};
const char* scrot[]    = {"scrot",          0};
const char* briup[]    = {"bri", "10", "+", 0};
const char* bridown[]  = {"bri", "10", "-", 0};
const char* voldown[]  = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]    = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[]  = {"amixer", "sset", "Master", "toggle",      0};
const char* browser[]  = {"chromium",       0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    
    {MOD|Mod1Mask,  XK_k,  win_half,  {.com = (const char*[]){"n"}}},
    {MOD|Mod1Mask,  XK_j,  win_half,  {.com = (const char*[]){"s"}}},
    {MOD|Mod1Mask,  XK_l,  win_half,  {.com = (const char*[]){"e"}}},
    {MOD|Mod1Mask,  XK_h,  win_half,  {.com = (const char*[]){"w"}}},
 
    {MOD,           XK_k,  win_move,  {.com = (const char*[]){"move",   "n"}, .i = winDist}},
    {MOD,           XK_j,  win_move,  {.com = (const char*[]){"move",   "s"}, .i = winDist}},
    {MOD,           XK_l,  win_move,  {.com = (const char*[]){"move",   "e"}, .i = winDist}},
    {MOD,           XK_h,  win_move,  {.com = (const char*[]){"move",   "w"}, .i = winDist}},

    {MOD|ShiftMask, XK_k,  win_move,  {.com = (const char*[]){"resize", "n"}, .i = winDist}},
    {MOD|ShiftMask, XK_j,  win_move,  {.com = (const char*[]){"resize", "s"}, .i = winDist}},
    {MOD|ShiftMask, XK_l,  win_move,  {.com = (const char*[]){"resize", "e"}, .i = winDist}},
    {MOD|ShiftMask, XK_h,  win_move,  {.com = (const char*[]){"resize", "w"}, .i = winDist}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_w,            run, {.com = browser}},
    {MOD, XK_d,            run, {.com = menu}},
    {MOD, XK_p,            run, {.com = scrot}},
    {MOD, XK_Return,       run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
