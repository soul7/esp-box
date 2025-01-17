// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: chat_gpt

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void sleep_body_up_down_Animation(lv_obj_t * TargetObject, int delay);
void listen_eye_blink_Animation(lv_obj_t * TargetObject, int delay);
void listen_eye_screen_move_Animation(lv_obj_t * TargetObject, int delay);
void get_eye_blink_Animation(lv_obj_t * TargetObject, int delay);

// SCREEN: ui_ScreenSetup
void ui_ScreenSetup_screen_init(void);
lv_obj_t * ui_ScreenSetup;
lv_obj_t * ui_ImageSetupTextBg;
lv_obj_t * ui_PanelSetupWifi;
lv_obj_t * ui_LabelSetupWifi;
void ui_event_ImageSetupWifiReset(lv_event_t * e);
lv_obj_t * ui_ImageSetupWifiReset;
lv_obj_t * ui_PanelSetupSteps;
lv_obj_t * ui_LabelSetupStepContent;
lv_obj_t * ui_LabelSetupStepTile;
void ui_event_ButtonSetup(lv_event_t * e);
lv_obj_t * ui_ButtonSetup;
lv_obj_t * ui_LabelSetupBtn;

// SCREEN: ui_ScreenWifiReset
void ui_ScreenWifiReset_screen_init(void);
lv_obj_t * ui_ScreenWifiReset;
lv_obj_t * ui_LabelWifiResetTitle;
void ui_event_ButtonWifiResetConfirm(lv_event_t * e);
lv_obj_t * ui_ButtonWifiResetConfirm;
lv_obj_t * ui_LabelSetupBtn1;
void ui_event_ImageWifiResetBack(lv_event_t * e);
lv_obj_t * ui_ImageWifiResetBack;
lv_obj_t * ui_LabelWifiResetContent;

// SCREEN: ui_ScreenListen
void ui_ScreenListen_screen_init(void);
lv_obj_t * ui_ScreenListen;
lv_obj_t * ui_ImageBodyShadow;
void ui_event_PanelSleep(lv_event_t * e);
lv_obj_t * ui_PanelSleep;
lv_obj_t * ui_ImageSleepBody;
lv_obj_t * ui_Image3;
lv_obj_t * ui_ImageSleepEye;
lv_obj_t * ui_ContainerBigZ;
lv_obj_t * ui_ContainerSmallZ;
lv_obj_t * ui_PanelListen;
lv_obj_t * ui_ImageListenBackGlow;
lv_obj_t * ui_ImageListenBody;
lv_obj_t * ui_ImageListenEyeScreen;
lv_obj_t * ui_ImageListenEye;
lv_obj_t * ui_PanelGet;
lv_obj_t * ui_ImageGetBackGlow;
lv_obj_t * ui_ImageGetBody;
lv_obj_t * ui_ImageGetEyeScreen;
lv_obj_t * ui_ImageGetEye;
lv_obj_t * ui_PanelReply;
lv_obj_t * ui_ImageReplyBg;
lv_obj_t * ui_LabelReplyQuestion;
lv_obj_t * ui_ImageRelyBody;
lv_obj_t * ui_ImageReplyBodyShadow;
lv_obj_t * ui_ContainerReplyContent;
lv_obj_t * ui_LabelReplyContent;
lv_obj_t * ui_ImageReplyLogo;
lv_obj_t * ui_LabelListenSpeak;
void ui_event_ImageListenSettings(lv_event_t * e);
lv_obj_t * ui_ImageListenSettings;

// SCREEN: ui_ScreenSettings
void ui_ScreenSettings_screen_init(void);
lv_obj_t * ui_ScreenSettings;
lv_obj_t * ui_LabelSettingsTile;
lv_obj_t * ui_PanelSettings;
lv_obj_t * ui_PanelSettingsSplitBar;
lv_obj_t * ui_PanelSettingsSplitBarLeft;
lv_obj_t * ui_SettingsSettingsSplitBarRight;
lv_obj_t * ui_PanelSettingsRegion;
lv_obj_t * ui_LabelSettingsRegion;
void ui_event_DropdownSettingsRegion(lv_event_t * e);
lv_obj_t * ui_DropdownSettingsRegion;
void ui_event_ImageSettingsBack(lv_event_t * e);
lv_obj_t * ui_ImageSettingsBack;
void ui_event_ImageSettingsReset(lv_event_t * e);
lv_obj_t * ui_ImageSettingsReset;

// SCREEN: ui_ScreenReset
void ui_ScreenReset_screen_init(void);
lv_obj_t * ui_ScreenReset;
lv_obj_t * ui_LabelResetTitle;
lv_obj_t * ui_LabelResetContent;
void ui_event_ButtonResetConfirm(lv_event_t * e);
lv_obj_t * ui_ButtonResetConfirm;
lv_obj_t * ui_LabelSetupBtn2;
void ui_event_ImageResetBack(lv_event_t * e);
lv_obj_t * ui_ImageResetBack;
void ui_event____initial_actions0(lv_event_t * e);
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_listen_body_eyes_[2] = {&ui_img_listen_body_eyes_1_png, &ui_img_listen_body_eyes_2_png};


static lv_group_t *g_btn_op_group = NULL;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

lv_group_t *ui_get_btn_op_group(void)
{
    return g_btn_op_group;
}

///////////////////// ANIMATIONS ////////////////////
void sleep_body_up_down_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -20);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 1000);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void listen_eye_blink_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_0, 0, -10);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 1800);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 100);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 2100);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_height);
    lv_anim_start(&PropertyAnimation_0);

}
void listen_eye_screen_move_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -20);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 300);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 2000);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 2000);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);

}
void get_eye_blink_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_0, 0, -10);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 100);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 1000);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_height);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_ImageSetupWifiReset(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenWifiReset, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonSetup(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenListen, LV_SCR_LOAD_ANIM_NONE, 0, 0);
        if(ui_get_btn_op_group()) {
            lv_group_remove_all_objs(ui_get_btn_op_group());
            lv_group_add_obj(ui_get_btn_op_group(), ui_PanelSleep);
        }
        sleep_body_up_down_Animation(ui_ImageSleepBody, 0);
        listen_eye_blink_Animation(ui_ImageListenEye, 0);
        listen_eye_screen_move_Animation(ui_ImageListenEyeScreen, 0);
        EventBtnSetupClick(e);
        get_eye_blink_Animation(ui_ImageGetEye, 0);
        _ui_flag_modify(ui_PanelSleep, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_PanelListen, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_PanelGet, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_PanelReply, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ButtonWifiResetConfirm(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        EventWifiResetConfirmClick(e);
    }
}
void ui_event_ImageWifiResetBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenSetup, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_PanelSleep(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(true == lv_obj_has_flag(ui_PanelSleep, LV_OBJ_FLAG_HIDDEN)) {
        return;
    }

    if(event_code == LV_EVENT_SHORT_CLICKED) {
        _ui_flag_modify(ui_PanelListen, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_PanelSleep, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        EventPanelSleepClickCb(e);
    } else if(event_code == LV_EVENT_LONG_PRESSED) {
#if CONFIG_BSP_BOARD_ESP32_S3_BOX_Lite
        lv_event_send(ui_ImageListenSettings, LV_EVENT_CLICKED, NULL);
#endif
    }
}
void ui_event_ImageListenSettings(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0);
        if(ui_get_btn_op_group()) {
            lv_group_remove_all_objs(ui_get_btn_op_group());
            lv_group_add_obj(ui_get_btn_op_group(), ui_DropdownSettingsRegion);
        }
    }
}

void ui_event_DropdownSettingsRegion(lv_event_t * e)
{
}
void ui_event_ImageSettingsBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenListen, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ImageSettingsReset(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenReset, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonResetConfirm(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        EventResetConfirm(e);
    }
}
void ui_event_ImageResetBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event____initial_actions0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        _ui_flag_modify(ui_PanelSetupWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_PanelSetupSteps, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);

    lv_indev_t *indev = lv_indev_get_next(NULL);
    if (lv_indev_get_type(indev) == LV_INDEV_TYPE_ENCODER) {
	    g_btn_op_group = lv_group_create();
	    lv_indev_set_group(indev, g_btn_op_group);
    }

    lv_disp_set_theme(dispp, theme);
    ui_ScreenSetup_screen_init();
    ui_ScreenWifiReset_screen_init();
    ui_ScreenListen_screen_init();
    ui_ScreenSettings_screen_init();
    ui_ScreenReset_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_obj_add_event_cb(ui____initial_actions0, ui_event____initial_actions0, LV_EVENT_ALL, NULL);

    lv_disp_load_scr(ui____initial_actions0);
    lv_disp_load_scr(ui_ScreenSetup);
}
