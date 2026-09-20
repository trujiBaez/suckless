/* key definitions */
#define MODKEY Mod4Mask

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
static const char *termcmd[]  = { "kitty", NULL };
static const char *scrotfullcmd[] = { "sh", "-c", "screenshot_full.sh", NULL };
static const char *scrotselectcmd[] = { "sh", "-c", "screenshot_select.sh", NULL };
static const char *nemocmd[]  = { "nemo", NULL };
static const char *firefoxcmd[]  = { "firefox", NULL };

static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_e,      spawn,          {.v = nemocmd } },
	{ MODKEY,                       XK_w,      spawn,          {.v = firefoxcmd } },
	{ MODKEY|ShiftMask,             XK_s,      spawn,          {.v = scrotselectcmd } },
	{ MODKEY|ShiftMask,             XK_f,      spawn,          {.v = scrotfullcmd } },
    { MODKEY,                       XK_F12,    spawn,          SHCMD("poweroff") },
    { MODKEY,                       XK_F11,    spawn,          SHCMD("reboot") },
    { MODKEY,                       XK_F10,    spawn,          SHCMD("logout") },
    { MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_i,      incnmaster,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_c,      killclient,     {0} },
};
