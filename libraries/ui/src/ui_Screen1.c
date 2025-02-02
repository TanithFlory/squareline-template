// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000B38), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x0079FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Screen1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Screen1, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 800);
    lv_obj_set_height(ui_Panel1, 480);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, -2);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_Panel1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Panel1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_kedarnath = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_kedarnath, 200);
    lv_obj_set_height(ui_kedarnath, 150);
    lv_obj_set_x(ui_kedarnath, -251);
    lv_obj_set_y(ui_kedarnath, -97);
    lv_obj_set_align(ui_kedarnath, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_kedarnath, &ui_img_1_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rishikesh = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_rishikesh, 200);
    lv_obj_set_height(ui_rishikesh, 150);
    lv_obj_set_x(ui_rishikesh, -207);
    lv_obj_set_y(ui_rishikesh, -150);
    lv_obj_set_align(ui_rishikesh, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_rishikesh, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rishikesh, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_rishikesh, &ui_img_2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_home = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_home, 200);
    lv_obj_set_height(ui_home, 150);
    lv_obj_set_x(ui_home, -186);
    lv_obj_set_y(ui_home, 23);
    lv_obj_set_align(ui_home, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_home, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_home, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_home, &ui_img_3_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fourPeople = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_fourPeople, 200);
    lv_obj_set_height(ui_fourPeople, 150);
    lv_obj_set_x(ui_fourPeople, -119);
    lv_obj_set_y(ui_fourPeople, -12);
    lv_obj_set_align(ui_fourPeople, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_fourPeople, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_fourPeople, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_fourPeople, &ui_img_4_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_family = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_family, 200);
    lv_obj_set_height(ui_family, 150);
    lv_obj_set_x(ui_family, 48);
    lv_obj_set_y(ui_family, -45);
    lv_obj_set_align(ui_family, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_family, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_family, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_family, &ui_img_5_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_otherFriends = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_otherFriends, 200);
    lv_obj_set_height(ui_otherFriends, 150);
    lv_obj_set_x(ui_otherFriends, -40);
    lv_obj_set_y(ui_otherFriends, -44);
    lv_obj_set_align(ui_otherFriends, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_otherFriends, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_otherFriends, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_otherFriends, &ui_img_6_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_home1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_home1, 50);
    lv_obj_set_height(ui_home1, 50);
    lv_obj_set_x(ui_home1, -361);
    lv_obj_set_y(ui_home1, -204);
    lv_obj_set_align(ui_home1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_home1, &ui_img_home2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_kedarnath, ui_event_kedarnath, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_rishikesh, ui_event_rishikesh, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_home, ui_event_home, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_fourPeople, ui_event_fourPeople, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_family, ui_event_family, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_otherFriends, ui_event_otherFriends, LV_EVENT_ALL, NULL);
    uic_otherFriends = ui_otherFriends;

}
