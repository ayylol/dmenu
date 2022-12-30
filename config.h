/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */


// Colors
static const char col_black[]	    = "#323437";
static const char col_beige[] 	    = "#e3c78a";
static const char col_green[] 	    = "#8cc85f";
static const char col_blue[] 	    = "#80a0ff";
static const char col_purple[] 	    = "#ae81ff";

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xf0;
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = { "FiraCode Nerd Font:size=18:antialias=true" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_beige, col_black},
	[SchemeSel] = { col_black, col_green },
	[SchemeNormHighlight] = { col_purple, col_black },
	[SchemeSelHighlight] = { col_black, col_purple },

    // TODO delete?
	//[SchemeOut] = { "#000000", "#00ffff" },
	//[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
