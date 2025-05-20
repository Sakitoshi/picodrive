// ------------ gfx options menu ------------


const char *men_scaling_opts[] = { "OFF", "ON", NULL };

#define MENU_OPTIONS_GFX \
	mee_enum      ("Scale low res mode",       MA_OPT_SCALING,        currentConfig.scaling, men_scaling_opts), \

static menu_entry e_menu_gfx_options[];

