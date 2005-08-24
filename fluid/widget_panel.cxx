//
// "$Id$"
//
// Widget panel for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2005 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "widget_panel.h"

static void cb_(Fl_Tabs* o, void* v) {
  propagate_load((Fl_Group *)o,v);
}

Fl_Value_Input *widget_x_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_y_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_w_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_h_input=(Fl_Value_Input *)0;

Fl_Input *v_input[4]={(Fl_Input *)0};

Fl_Button *wLiveMode=(Fl_Button *)0;

Fl_Double_Window* make_widget_panel() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(410, 355);
    w = o;
    o->labelsize(11);
    w->hotspot(o);
    { Fl_Tabs* o = new Fl_Tabs(5, 5, 400, 310);
      o->selection_color((Fl_Color)4);
      o->labelsize(11);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      o->callback((Fl_Callback*)cb_);
      o->when(FL_WHEN_NEVER);
      { Fl_Group* o = new Fl_Group(5, 25, 400, 290, "GUI");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        { Fl_Group* o = new Fl_Group(90, 35, 300, 20, "Label:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 35, 180, 20);
            o->tooltip("The label text for the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)label_cb);
            o->when(FL_WHEN_CHANGED);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Choice* o = new Fl_Choice(270, 35, 120, 20);
            o->tooltip("The label style for the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)labeltype_cb);
            o->menu(labeltypemenu);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 60, 300, 20, "Image:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 60, 230, 20);
            o->tooltip("The active image for the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)image_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Button* o = new Fl_Button(320, 60, 70, 20, "Browse...");
            o->tooltip("Click to choose the active image.");
            o->labelsize(11);
            o->callback((Fl_Callback*)image_browse_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 85, 300, 20, "Inactive:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 85, 230, 20);
            o->tooltip("The inactive image for the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)inactive_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Button* o = new Fl_Button(320, 85, 70, 20, "Browse...");
            o->tooltip("Click to choose the inactive image.");
            o->labelsize(11);
            o->callback((Fl_Callback*)inactive_browse_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 110, 300, 20, "Alignment:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Button* o = new Fl_Button(90, 110, 45, 20, "Clip");
            o->tooltip("Clip the label to the inside of the widget.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_CLIP));
            o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          }
          { Fl_Button* o = new Fl_Button(140, 110, 50, 20, "Wrap");
            o->tooltip("Wrap the label text.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_WRAP));
          }
          { Fl_Button* o = new Fl_Button(195, 110, 65, 20, "Text/Image");
            o->tooltip("Show the label text over the image.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_TEXT_OVER_IMAGE));
          }
          { Fl_Button* o = new Fl_Button(265, 110, 20, 20, "@-1<-");
            o->tooltip("Left-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_LEFT));
          }
          { Fl_Button* o = new Fl_Button(290, 110, 20, 20, "@-1->");
            o->tooltip("Right-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_RIGHT));
          }
          { Fl_Button* o = new Fl_Button(315, 110, 20, 20, "@-18");
            o->tooltip("Top-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_TOP));
          }
          { Fl_Button* o = new Fl_Button(340, 110, 20, 20, "@-12");
            o->tooltip("Bottom-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_BOTTOM));
          }
          { Fl_Button* o = new Fl_Button(365, 110, 20, 20, "@-3square");
            o->tooltip("Show the label inside the widget.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_INSIDE));
          }
          { Fl_Box* o = new Fl_Box(390, 110, 0, 20);
            o->labelsize(11);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 145, 300, 20, "Position:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Value_Input* o = widget_x_input = new Fl_Value_Input(90, 145, 55, 20, "X:");
            o->tooltip("The X position of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)x_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = widget_y_input = new Fl_Value_Input(150, 145, 55, 20, "Y:");
            o->tooltip("The Y position of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)y_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = widget_w_input = new Fl_Value_Input(210, 145, 55, 20, "Width:");
            o->tooltip("The width of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)w_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = widget_h_input = new Fl_Value_Input(270, 145, 55, 20, "Height:");
            o->tooltip("The height of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)h_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Box* o = new Fl_Box(330, 145, 60, 20);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 180, 300, 20, "Values:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Value_Input* o = new Fl_Value_Input(90, 180, 55, 20, "Size:");
            o->tooltip("The size of the slider.");
            o->labelsize(11);
            o->step(0.010101);
            o->textsize(11);
            o->callback((Fl_Callback*)slider_size_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(150, 180, 55, 20, "Minimum:");
            o->tooltip("The minimum value of the widget.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)min_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(210, 180, 55, 20, "Maximum:");
            o->tooltip("The maximum value of the widget.");
            o->labelsize(11);
            o->value(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(270, 180, 55, 20, "Step:");
            o->tooltip("The resolution of the widget value.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)step_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(330, 180, 55, 20, "Value:");
            o->tooltip("The current widget value.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)value_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Box* o = new Fl_Box(390, 180, 0, 20);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 180, 300, 20, "Size Range:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          o->hide();
          { Fl_Value_Input* o = new Fl_Value_Input(90, 180, 55, 20, "Minimum Size:");
            o->tooltip("The size of the slider.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)min_w_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(150, 180, 55, 20);
            o->tooltip("The minimum value of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)min_h_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Button* o = new Fl_Button(210, 180, 25, 20, "set");
            o->labelsize(11);
            o->callback((Fl_Callback*)set_min_size_cb);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(240, 180, 55, 20, "Maximum Size:");
            o->tooltip("The maximum value of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_w_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(300, 180, 55, 20);
            o->tooltip("The resolution of the widget value.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_h_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Button* o = new Fl_Button(360, 180, 25, 20, "set");
            o->labelsize(11);
            o->callback((Fl_Callback*)set_max_size_cb);
          }
          { Fl_Box* o = new Fl_Box(390, 180, 0, 20);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Shortcut_Button* o = new Shortcut_Button(90, 205, 300, 20, "Shortcut:");
          o->tooltip("The shortcut key for the widget.");
          o->box(FL_DOWN_BOX);
          o->color(FL_BACKGROUND2_COLOR);
          o->selection_color(FL_BACKGROUND2_COLOR);
          o->labeltype(FL_NORMAL_LABEL);
          o->labelfont(1);
          o->labelsize(11);
          o->labelcolor(FL_BLACK);
          o->callback((Fl_Callback*)shortcut_in_cb);
          o->align(FL_ALIGN_LEFT);
          o->when(FL_WHEN_RELEASE);
        }
        { Fl_Group* o = new Fl_Group(90, 230, 300, 20, "X Class:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 230, 95, 20, ":");
            o->tooltip("The X resource class.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)xclass_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(190, 230, 60, 20, "Border");
            o->tooltip("Add a border around the window.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)border_cb);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(255, 230, 55, 20, "Modal");
            o->tooltip("Make the window modal.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)modal_cb);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(315, 230, 75, 20, "Nonmodal");
            o->tooltip("Make the window non-modal.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)non_modal_cb);
            o->align(132|FL_ALIGN_INSIDE);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 255, 305, 20, "Attributes:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Light_Button* o = new Fl_Light_Button(90, 255, 60, 20, "Visible");
            o->tooltip("Show the widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)visible_cb);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(155, 255, 60, 20, "Active");
            o->tooltip("Activate the widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)active_cb);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(220, 255, 75, 20, "Resizable");
            o->tooltip("Make the widget resizable.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)resizable_cb);
            o->when(FL_WHEN_CHANGED);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(300, 255, 70, 20, "Hotspot");
            o->tooltip("Center the window under this widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)hotspot_cb);
            o->when(FL_WHEN_CHANGED);
          }
          { Fl_Box* o = new Fl_Box(390, 255, 0, 20);
            o->labelsize(11);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Input* o = new Fl_Input(90, 280, 300, 20, "Tooltip:");
          o->tooltip("The tooltip text for the widget.");
          o->labelfont(1);
          o->labelsize(11);
          o->textsize(11);
          o->callback((Fl_Callback*)tooltip_cb);
        }
        { Fl_Box* o = new Fl_Box(90, 300, 300, 5);
          o->labelsize(11);
          Fl_Group::current()->resizable(o);
        }
        o->end();
        Fl_Group::current()->resizable(o);
      }
      { Fl_Group* o = new Fl_Group(5, 25, 400, 290, "Style");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(90, 35, 300, 20, "Label Font:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Choice* o = new Fl_Choice(90, 35, 160, 20);
            o->tooltip("The style of the label text.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->callback((Fl_Callback*)labelfont_cb);
            Fl_Group::current()->resizable(o);
            o->menu(fontmenu);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(250, 35, 50, 20);
            o->tooltip("The size of the label text.");
            o->labelsize(11);
            o->maximum(100);
            o->step(1);
            o->value(14);
            o->textsize(11);
            o->callback((Fl_Callback*)labelsize_cb);
          }
          { Fl_Button* o = new Fl_Button(300, 35, 90, 20, "Label Color");
            o->tooltip("The color of the label text.");
            o->labelsize(11);
            o->callback((Fl_Callback*)labelcolor_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 60, 300, 20, "Box:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Choice* o = new Fl_Choice(90, 60, 210, 20);
            o->tooltip("The \"up\" box of the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->callback((Fl_Callback*)box_cb);
            Fl_Group::current()->resizable(o);
            o->menu(boxmenu);
          }
          { Fl_Button* o = new Fl_Button(300, 60, 90, 20, "Color");
            o->tooltip("The background color of the widget.");
            o->labelsize(11);
            o->callback((Fl_Callback*)color_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 85, 300, 20, "Down Box:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Choice* o = new Fl_Choice(90, 85, 210, 20);
            o->tooltip("The \"down\" box of the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->callback((Fl_Callback*)down_box_cb);
            Fl_Group::current()->resizable(o);
            o->menu(boxmenu);
          }
          { Fl_Button* o = new Fl_Button(300, 85, 90, 20, "Select Color");
            o->tooltip("The selection color of the widget.");
            o->labelsize(11);
            o->callback((Fl_Callback*)color2_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 110, 300, 20, "Text Font:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Choice* o = new Fl_Choice(90, 110, 160, 20);
            o->tooltip("The value text style.");
            o->box(FL_DOWN_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->callback((Fl_Callback*)textfont_cb);
            Fl_Group::current()->resizable(o);
            o->menu(fontmenu);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(250, 110, 50, 20);
            o->tooltip("The value text size.");
            o->labelsize(11);
            o->maximum(100);
            o->step(1);
            o->value(14);
            o->textsize(11);
            o->callback((Fl_Callback*)textsize_cb);
          }
          { Fl_Button* o = new Fl_Button(300, 110, 90, 20, "Text Color");
            o->tooltip("The value text color.");
            o->labelsize(11);
            o->callback((Fl_Callback*)textcolor_cb);
          }
          o->end();
        }
        { Fl_Box* o = new Fl_Box(90, 135, 300, 40);
          o->labelsize(11);
          Fl_Group::current()->resizable(o);
        }
        o->end();
      }
      { Fl_Group* o = new Fl_Group(5, 25, 400, 290, "C++");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(90, 35, 300, 20, "Class:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 35, 160, 20);
            o->tooltip("The widget subclass.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)subclass_cb, (void*)(4));
            Fl_Group::current()->resizable(o);
          }
          { Fl_Choice* o = new Fl_Choice(250, 35, 140, 20);
            o->tooltip("The widget subtype.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->callback((Fl_Callback*)subtype_cb);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 60, 300, 20, "Name:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 60, 240, 20);
            o->tooltip("The name of the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)name_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(330, 60, 60, 20, "public");
            o->tooltip("Make the widget publicly accessible.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)name_public_cb);
            o->when(FL_WHEN_CHANGED);
          }
          o->end();
        }
        { Fl_Input* o = v_input[0] = new Fl_Input(90, 85, 300, 20, "Extra Code:");
          o->tooltip("Extra initialization code for the widget.");
          o->labelfont(1);
          o->labelsize(11);
          o->textfont(4);
          o->textsize(11);
          o->callback((Fl_Callback*)v_input_cb, (void*)(0));
        }
        { Fl_Input* o = v_input[1] = new Fl_Input(90, 105, 300, 20);
          o->tooltip("Extra initialization code for the widget.");
          o->labelsize(11);
          o->textfont(4);
          o->textsize(11);
          o->callback((Fl_Callback*)v_input_cb, (void*)(1));
        }
        { Fl_Input* o = v_input[2] = new Fl_Input(90, 125, 300, 20);
          o->tooltip("Extra initialization code for the widget.");
          o->labelsize(11);
          o->textfont(4);
          o->textsize(11);
          o->callback((Fl_Callback*)v_input_cb, (void*)(2));
        }
        { Fl_Input* o = v_input[3] = new Fl_Input(90, 145, 300, 20);
          o->tooltip("Extra initialization code for the widget.");
          o->labelsize(11);
          o->textfont(4);
          o->textsize(11);
          o->callback((Fl_Callback*)v_input_cb, (void*)(3));
        }
        { CodeEditor* o = new CodeEditor(90, 170, 300, 90, "Callback:");
          o->tooltip("The callback function or code for the widget. Use the variable name \'o\' to \
access the Widget pointer and \'v\' to access the user value.");
          o->box(FL_DOWN_BOX);
          o->color(FL_BACKGROUND2_COLOR);
          o->selection_color(FL_SELECTION_COLOR);
          o->labeltype(FL_NORMAL_LABEL);
          o->labelfont(1);
          o->labelsize(11);
          o->labelcolor(FL_BLACK);
          o->textfont(4);
          o->textsize(11);
          o->callback((Fl_Callback*)callback_cb);
          o->align(FL_ALIGN_LEFT);
          o->when(FL_WHEN_RELEASE);
          Fl_Group::current()->resizable(o);
        }
        { Fl_Group* o = new Fl_Group(90, 265, 300, 20, "User Data:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 265, 140, 20);
            o->tooltip("The user data to pass into the callback code.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)user_data_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Choice* o = new Fl_Choice(285, 265, 105, 20, "When:");
            o->tooltip("When to call the callback function.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->callback((Fl_Callback*)when_cb);
            o->when(FL_WHEN_CHANGED);
            o->menu(whenmenu);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(90, 290, 300, 20, "Type:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(FL_ALIGN_LEFT);
          { Fl_Input* o = new Fl_Input(90, 290, 140, 20);
            o->tooltip("The type of the user data.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)user_data_type_cb);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Light_Button* o = new Fl_Light_Button(285, 290, 105, 20, "No Change");
            o->tooltip("Call the callback even if the value has not changed.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)when_button_cb);
          }
          o->end();
        }
        o->end();
      }
      o->end();
      Fl_Group::current()->resizable(o);
    }
    { Fl_Group* o = new Fl_Group(8, 321, 391, 24);
      o->labelsize(11);
      { Fl_Box* o = new Fl_Box(8, 325, 20, 20);
        o->labelsize(11);
        Fl_Group::current()->resizable(o);
      }
      { Fl_Button* o = new Fl_Button(231, 325, 99, 20, "Hide &Overlays");
        o->tooltip("Hide the widget overlay box.");
        o->labelsize(11);
        o->labelcolor((Fl_Color)1);
        o->callback((Fl_Callback*)overlay_cb);
      }
      { Fl_Button* o = new Fl_Button(80, 325, 80, 20, "Revert");
        o->labelsize(11);
        o->callback((Fl_Callback*)revert_cb);
        o->hide();
      }
      { Fl_Return_Button* o = new Fl_Return_Button(335, 325, 64, 20, "Close");
        o->labelsize(11);
        o->callback((Fl_Callback*)ok_cb);
      }
      { Fl_Button* o = new Fl_Button(329, 325, 70, 20, "Cancel");
        o->labelsize(11);
        o->callback((Fl_Callback*)cancel_cb);
        o->hide();
      }
      { Fl_Button* o = wLiveMode = new Fl_Button(142, 325, 84, 20, "LIve &Mode");
        o->tooltip("Hide the widget overlay box.");
        o->type(1);
        o->labelsize(11);
        o->labelcolor(FL_FOREGROUND_COLOR);
        o->callback((Fl_Callback*)live_mode_cb);
      }
      o->end();
    }
    o->size_range(o->w(), o->h());
    o->end();
  }
  return w;
}

//
// End of "$Id$".
//
