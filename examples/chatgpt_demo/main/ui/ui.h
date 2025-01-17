// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: chat_gpt

#ifndef _CHAT_GPT_UI_H
#define _CHAT_GPT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
void sleep_body_up_down_Animation(lv_obj_t * TargetObject, int delay);
void listen_eye_blink_Animation(lv_obj_t * TargetObject, int delay);
void listen_eye_screen_move_Animation(lv_obj_t * TargetObject, int delay);
void get_eye_blink_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_ScreenSetup
void ui_ScreenSetup_screen_init(void);
extern lv_obj_t * ui_ScreenSetup;
extern lv_obj_t * ui_ImageSetupTextBg;
extern lv_obj_t * ui_PanelSetupWifi;
extern lv_obj_t * ui_LabelSetupWifi;
void ui_event_ImageSetupWifiReset(lv_event_t * e);
extern lv_obj_t * ui_ImageSetupWifiReset;
extern lv_obj_t * ui_PanelSetupSteps;
extern lv_obj_t * ui_LabelSetupStepContent;
extern lv_obj_t * ui_LabelSetupStepTile;
void ui_event_ButtonSetup(lv_event_t * e);
extern lv_obj_t * ui_ButtonSetup;
extern lv_obj_t * ui_LabelSetupBtn;
// SCREEN: ui_ScreenWifiReset
void ui_ScreenWifiReset_screen_init(void);
extern lv_obj_t * ui_ScreenWifiReset;
extern lv_obj_t * ui_LabelWifiResetTitle;
void ui_event_ButtonWifiResetConfirm(lv_event_t * e);
extern lv_obj_t * ui_ButtonWifiResetConfirm;
extern lv_obj_t * ui_LabelSetupBtn1;
void ui_event_ImageWifiResetBack(lv_event_t * e);
extern lv_obj_t * ui_ImageWifiResetBack;
extern lv_obj_t * ui_LabelWifiResetContent;
// SCREEN: ui_ScreenListen
void ui_ScreenListen_screen_init(void);
extern lv_obj_t * ui_ScreenListen;
extern lv_obj_t * ui_ImageBodyShadow;
void ui_event_PanelSleep(lv_event_t * e);
extern lv_obj_t * ui_PanelSleep;
extern lv_obj_t * ui_ImageSleepBody;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_ImageSleepEye;
extern lv_obj_t * ui_ContainerBigZ;
extern lv_obj_t * ui_ContainerSmallZ;
extern lv_obj_t * ui_PanelListen;
extern lv_obj_t * ui_ImageListenBackGlow;
extern lv_obj_t * ui_ImageListenBody;
extern lv_obj_t * ui_ImageListenEyeScreen;
extern lv_obj_t * ui_ImageListenEye;
extern lv_obj_t * ui_PanelGet;
extern lv_obj_t * ui_ImageGetBackGlow;
extern lv_obj_t * ui_ImageGetBody;
extern lv_obj_t * ui_ImageGetEyeScreen;
extern lv_obj_t * ui_ImageGetEye;
extern lv_obj_t * ui_PanelReply;
extern lv_obj_t * ui_ImageReplyBg;
extern lv_obj_t * ui_LabelReplyQuestion;
extern lv_obj_t * ui_ImageRelyBody;
extern lv_obj_t * ui_ImageReplyBodyShadow;
extern lv_obj_t * ui_ContainerReplyContent;
extern lv_obj_t * ui_LabelReplyContent;
extern lv_obj_t * ui_ImageReplyLogo;
extern lv_obj_t * ui_LabelListenSpeak;
void ui_event_ImageListenSettings(lv_event_t * e);
extern lv_obj_t * ui_ImageListenSettings;
// SCREEN: ui_ScreenSettings
void ui_ScreenSettings_screen_init(void);
extern lv_obj_t * ui_ScreenSettings;
extern lv_obj_t * ui_LabelSettingsTile;
extern lv_obj_t * ui_PanelSettings;
extern lv_obj_t * ui_PanelSettingsSplitBar;
extern lv_obj_t * ui_PanelSettingsSplitBarLeft;
extern lv_obj_t * ui_SettingsSettingsSplitBarRight;
extern lv_obj_t * ui_PanelSettingsRegion;
extern lv_obj_t * ui_LabelSettingsRegion;
void ui_event_DropdownSettingsRegion(lv_event_t * e);
extern lv_obj_t * ui_DropdownSettingsRegion;
void ui_event_ImageSettingsBack(lv_event_t * e);
extern lv_obj_t * ui_ImageSettingsBack;
void ui_event_ImageSettingsReset(lv_event_t * e);
extern lv_obj_t * ui_ImageSettingsReset;
// SCREEN: ui_ScreenReset
void ui_ScreenReset_screen_init(void);
extern lv_obj_t * ui_ScreenReset;
extern lv_obj_t * ui_LabelResetTitle;
extern lv_obj_t * ui_LabelResetContent;
void ui_event_ButtonResetConfirm(lv_event_t * e);
extern lv_obj_t * ui_ButtonResetConfirm;
extern lv_obj_t * ui_LabelSetupBtn2;
void ui_event_ImageResetBack(lv_event_t * e);
extern lv_obj_t * ui_ImageResetBack;
void ui_event____initial_actions0(lv_event_t * e);
extern lv_obj_t * ui____initial_actions0;

// EVENT: event for ESP32_S3_BOX_Lite
lv_group_t *ui_get_btn_op_group(void);

LV_IMG_DECLARE(ui_img_setup_bg_png);    // assets\setup_bg.png
LV_IMG_DECLARE(ui_img_setup_text_bg_png);    // assets\setup_text_bg.png
LV_IMG_DECLARE(ui_img_reset_icon_png);    // assets\reset_icon.png
LV_IMG_DECLARE(ui_img_settings_back_png);    // assets\settings_back.png
LV_IMG_DECLARE(ui_img_body_shadow_png);    // assets\body_shadow.png
LV_IMG_DECLARE(ui_img_body_png);    // assets\body.png
LV_IMG_DECLARE(ui_img_body_eye_screen_png);    // assets\body_eye_screen.png
LV_IMG_DECLARE(ui_img_sleep_body_eyes_png);    // assets\sleep_body_eyes.png
LV_IMG_DECLARE(ui_img_sleep_big_z_png);    // assets\sleep_big_z.png
LV_IMG_DECLARE(ui_img_sleep_small_z_png);    // assets\sleep_small_z.png
LV_IMG_DECLARE(ui_img_listen_back_glow_png);    // assets\listen_back_glow.png
LV_IMG_DECLARE(ui_img_listen_body_eyes_1_png);    // assets\listen_body_eyes_1.png
LV_IMG_DECLARE(ui_img_reply_chatgpt_bg_png);    // assets\reply_chatgpt_bg.png
LV_IMG_DECLARE(ui_img_reply_body_png);    // assets\reply_body.png
LV_IMG_DECLARE(ui_img_reply_small_shadow_png);    // assets\reply_small_shadow.png
LV_IMG_DECLARE(ui_img_reply_chatgpt_logo_png);    // assets\reply_chatgpt_logo.png
LV_IMG_DECLARE(ui_img_settings_icon_png);    // assets\settings_icon.png
LV_IMG_DECLARE(ui_img_listen_body_eyes_2_png);    // assets\listen_body_eyes_2.png

LV_FONT_DECLARE(ui_font_KaiTiCN20);
LV_FONT_DECLARE(ui_font_PingFangEN14);
LV_FONT_DECLARE(ui_font_PingFangEN16);
LV_FONT_DECLARE(ui_font_PingFangEN20);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
