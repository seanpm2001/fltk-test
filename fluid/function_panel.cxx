//
// "$Id$"
//
// Code dialogs for the Fast Light Tool Kit (FLTK).
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

#include "function_panel.h"
#include <FL/Fl_Pixmap.H>
#include "Fl_Type.h"
#include "undo.h"
extern class Fl_Pixmap *pixmap[];
extern class Fl_Type *Fl_Type_make(const char*);
extern void select_only(Fl_Type*);

Fl_Window *function_panel=(Fl_Window *)0;

Fl_Light_Button *f_public_button=(Fl_Light_Button *)0;

Fl_Light_Button *f_c_button=(Fl_Light_Button *)0;

Fl_Input *f_name_input=(Fl_Input *)0;

Fl_Input *f_return_type_input=(Fl_Input *)0;

Fl_Return_Button *f_panel_ok=(Fl_Return_Button *)0;

Fl_Button *f_panel_cancel=(Fl_Button *)0;

Fl_Window* make_function_panel() {
  Fl_Window* w;
  { Fl_Window* o = function_panel = new Fl_Window(290, 150, "Function/Method Properties");
    w = o;
    { Fl_Group* o = new Fl_Group(10, 10, 270, 20);
      { Fl_Light_Button* o = f_public_button = new Fl_Light_Button(10, 10, 60, 20, "public");
        o->tooltip("Make the function or method publicly accessible.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Light_Button* o = f_c_button = new Fl_Light_Button(80, 10, 80, 20, "C declaration");
        o->tooltip("Declare with a C interface instead of C++.");
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(170, 10, 110, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Input* o = f_name_input = new Fl_Input(10, 50, 270, 20, "Name(args): (blank for main())");
      o->tooltip("The name of the function or method.");
      o->labelfont(1);
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = f_return_type_input = new Fl_Input(10, 90, 270, 20, "Return Type: (blank to return outermost widget)");
      o->tooltip("The return type of the function or method.");
      o->labelfont(1);
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Group* o = new Fl_Group(10, 120, 270, 20);
      { Fl_Return_Button* o = f_panel_ok = new Fl_Return_Button(170, 120, 50, 20, "OK");
        o->tooltip("Apply the changes.");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = f_panel_cancel = new Fl_Button(230, 120, 50, 20, "Cancel");
        o->tooltip("Cancel the changes.");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 120, 150, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(o->w(), o->h(), Fl::w(), o->h());
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *code_panel=(Fl_Window *)0;

CodeEditor *code_input=(CodeEditor *)0;

Fl_Return_Button *code_panel_ok=(Fl_Return_Button *)0;

Fl_Button *code_panel_cancel=(Fl_Button *)0;

Fl_Window* make_code_panel() {
  Fl_Window* w;
  { Fl_Window* o = code_panel = new Fl_Window(540, 180, "Code Properties");
    w = o;
    o->labelsize(11);
    { CodeEditor* o = code_input = new CodeEditor(10, 10, 520, 130);
      o->box(FL_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->selection_color(FL_SELECTION_COLOR);
      o->labeltype(FL_NORMAL_LABEL);
      o->labelfont(0);
      o->labelsize(11);
      o->labelcolor(FL_BLACK);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP);
      o->when(FL_WHEN_RELEASE);
      Fl_Group::current()->resizable(o);
      o->when(FL_WHEN_ENTER_KEY_CHANGED|FL_WHEN_RELEASE);
    }
    { Fl_Group* o = new Fl_Group(10, 150, 520, 20);
      o->labelsize(11);
      { Fl_Return_Button* o = code_panel_ok = new Fl_Return_Button(400, 150, 60, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = code_panel_cancel = new Fl_Button(470, 150, 60, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 150, 380, 20);
        o->labelsize(11);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(200, 150);
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *codeblock_panel=(Fl_Window *)0;

Fl_Input *code_before_input=(Fl_Input *)0;

Fl_Input *code_after_input=(Fl_Input *)0;

Fl_Return_Button *codeblock_panel_ok=(Fl_Return_Button *)0;

Fl_Button *codeblock_panel_cancel=(Fl_Button *)0;

Fl_Window* make_codeblock_panel() {
  Fl_Window* w;
  { Fl_Window* o = codeblock_panel = new Fl_Window(300, 115, "Code Block Properties");
    w = o;
    o->labelsize(11);
    { Fl_Input* o = code_before_input = new Fl_Input(10, 15, 280, 20, "Conditional code block");
      o->tooltip("#ifdef or similar conditional code block.");
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = code_after_input = new Fl_Input(10, 55, 280, 20, "\"{...child code...}\" is inserted here");
      o->tooltip("#endif or similar conditional code block.");
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Group* o = new Fl_Group(10, 85, 280, 20);
      { Fl_Return_Button* o = codeblock_panel_ok = new Fl_Return_Button(160, 85, 60, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = codeblock_panel_cancel = new Fl_Button(230, 85, 60, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 85, 140, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(o->w(), o->h(), Fl::w(), o->h());
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *declblock_panel=(Fl_Window *)0;

Fl_Input *decl_before_input=(Fl_Input *)0;

Fl_Input *decl_after_input=(Fl_Input *)0;

Fl_Return_Button *declblock_panel_ok=(Fl_Return_Button *)0;

Fl_Button *declblock_panel_cancel=(Fl_Button *)0;

Fl_Light_Button *declblock_public_button=(Fl_Light_Button *)0;

Fl_Window* make_declblock_panel() {
  Fl_Window* w;
  { Fl_Window* o = declblock_panel = new Fl_Window(300, 135, "Declaration Block Properties");
    w = o;
    o->labelsize(11);
    { Fl_Input* o = decl_before_input = new Fl_Input(10, 40, 280, 20);
      o->tooltip("#ifdef or similar conditional declaration block.");
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = decl_after_input = new Fl_Input(10, 75, 280, 20, "\"\\n...child code...\\n\" is inserted here");
      o->tooltip("#endif or similar declaration code block.");
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Group* o = new Fl_Group(10, 105, 280, 20);
      { Fl_Return_Button* o = declblock_panel_ok = new Fl_Return_Button(160, 105, 60, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = declblock_panel_cancel = new Fl_Button(230, 105, 60, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 105, 140, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(10, 10, 280, 20);
      { Fl_Light_Button* o = declblock_public_button = new Fl_Light_Button(10, 10, 60, 20, "public");
        o->tooltip("Make the declaration publicly accessible.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Box* o = new Fl_Box(80, 10, 210, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(o->w(), o->h(), Fl::w(), o->h());
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *decl_panel=(Fl_Window *)0;

Fl_Light_Button *decl_public_button=(Fl_Light_Button *)0;

Fl_Input *decl_input=(Fl_Input *)0;

Fl_Return_Button *decl_panel_ok=(Fl_Return_Button *)0;

Fl_Button *decl_panel_cancel=(Fl_Button *)0;

Fl_Window* make_decl_panel() {
  Fl_Window* w;
  { Fl_Window* o = decl_panel = new Fl_Window(290, 150, "Declaration Properties");
    w = o;
    { Fl_Group* o = new Fl_Group(10, 10, 270, 20);
      { Fl_Light_Button* o = decl_public_button = new Fl_Light_Button(10, 10, 60, 20, "public");
        o->tooltip("Make the declaration publicly accessible.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Box* o = new Fl_Box(80, 10, 200, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Input* o = decl_input = new Fl_Input(10, 40, 270, 20, "Can be any declaration, like \"int x;\", an external symbol like \"extern int\
 foo();\", a #directive like \"#include <foo.h>\", a comment like \"//foo\" or\
 \"/*foo*/\", or typedef like \"typedef char byte;\" or \"using std::list;\".");
      o->tooltip("Declaration text.");
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(134);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Group* o = new Fl_Group(10, 120, 270, 20);
      { Fl_Return_Button* o = decl_panel_ok = new Fl_Return_Button(150, 120, 60, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = decl_panel_cancel = new Fl_Button(220, 120, 60, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 120, 130, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(o->w(), o->h(), Fl::w(), o->h());
    o->end();
  }
  return w;
}

Fl_Window *class_panel=(Fl_Window *)0;

Fl_Light_Button *c_public_button=(Fl_Light_Button *)0;

Fl_Input *c_name_input=(Fl_Input *)0;

Fl_Input *c_subclass_input=(Fl_Input *)0;

Fl_Return_Button *c_panel_ok=(Fl_Return_Button *)0;

Fl_Button *c_panel_cancel=(Fl_Button *)0;

Fl_Window* make_class_panel() {
  Fl_Window* w;
  { Fl_Window* o = class_panel = new Fl_Window(300, 140, "Class Properties");
    w = o;
    o->labelsize(11);
    { Fl_Group* o = new Fl_Group(10, 10, 280, 20);
      { Fl_Light_Button* o = c_public_button = new Fl_Light_Button(10, 10, 60, 20, "public");
        o->tooltip("Make the class publicly accessible.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Box* o = new Fl_Box(80, 10, 210, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Input* o = c_name_input = new Fl_Input(10, 45, 280, 20, "Name:");
      o->tooltip("Name of class.");
      o->labelfont(1);
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = c_subclass_input = new Fl_Input(10, 80, 280, 20, "Subclass of (text between : and {)");
      o->tooltip("Name of subclass.");
      o->labelfont(1);
      o->labelsize(11);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Group* o = new Fl_Group(10, 110, 280, 20);
      { Fl_Return_Button* o = c_panel_ok = new Fl_Return_Button(160, 110, 60, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = c_panel_cancel = new Fl_Button(230, 110, 60, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 110, 140, 20);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(o->w(), o->h(), Fl::w(), o->h());
    o->set_modal();
    o->end();
  }
  return w;
}

Fl_Window *comment_panel=(Fl_Window *)0;

CodeEditor *comment_input=(CodeEditor *)0;

Fl_Return_Button *comment_panel_ok=(Fl_Return_Button *)0;

Fl_Button *comment_panel_cancel=(Fl_Button *)0;

Fl_Light_Button *comment_in_source=(Fl_Light_Button *)0;

Fl_Light_Button *comment_in_header=(Fl_Light_Button *)0;

Fl_Menu_Button *comment_predefined=(Fl_Menu_Button *)0;

Fl_Button *comment_load=(Fl_Button *)0;

Fl_Window* make_comment_panel() {
  Fl_Window* w;
  { Fl_Window* o = comment_panel = new Fl_Window(550, 280, "Comment Properties");
    w = o;
    o->labelsize(11);
    { CodeEditor* o = comment_input = new CodeEditor(110, 10, 430, 230);
      o->box(FL_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->selection_color(FL_SELECTION_COLOR);
      o->labeltype(FL_NORMAL_LABEL);
      o->labelfont(0);
      o->labelsize(11);
      o->labelcolor(FL_BLACK);
      o->textfont(4);
      o->textsize(11);
      o->align(FL_ALIGN_TOP);
      o->when(FL_WHEN_RELEASE);
      Fl_Group::current()->resizable(o);
      o->when(FL_WHEN_ENTER_KEY_CHANGED|FL_WHEN_RELEASE);
    }
    { Fl_Group* o = new Fl_Group(110, 250, 430, 20);
      o->labelsize(11);
      { Fl_Return_Button* o = comment_panel_ok = new Fl_Return_Button(370, 250, 80, 20, "OK");
        o->labelsize(11);
        w->hotspot(o);
      }
      { Fl_Button* o = comment_panel_cancel = new Fl_Button(460, 250, 80, 20, "Cancel");
        o->shortcut(0xff1b);
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(110, 250, 250, 20);
        o->labelsize(11);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(10, 10, 90, 243);
      o->labelsize(11);
      { Fl_Light_Button* o = comment_in_source = new Fl_Light_Button(10, 10, 90, 20, "In Source");
        o->tooltip("Put the comment into the source (.cxx) file.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Light_Button* o = comment_in_header = new Fl_Light_Button(10, 40, 90, 20, "In Header");
        o->tooltip("Put the comment into the header (.h) file.");
        o->labelsize(11);
        o->when(FL_WHEN_NEVER);
      }
      { Fl_Menu_Button* o = comment_predefined = new Fl_Menu_Button(10, 70, 90, 20, "Predefined");
        o->labelsize(11);
        o->textsize(11);
      }
      { Fl_Button* o = comment_load = new Fl_Button(10, 100, 90, 20, "Import...");
        o->labelsize(11);
      }
      { Fl_Box* o = new Fl_Box(10, 132, 90, 121);
        o->labelsize(11);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->size_range(320, 180);
    o->set_modal();
    o->end();
  }
  return w;
}

void type_make_cb(Fl_Widget*w,void*d) {
  undo_checkpoint();
  Fl_Type *t = Fl_Type_make((char*)d);
  if (t) {
    select_only(t);
    set_modflag(1);
    t->open();
  } else {
    undo_current --;
    undo_last --;
  }
}

Fl_Window *widgetbin_panel=(Fl_Window *)0;

Fl_Window* make_widgetbin() {
  Fl_Window* w;
  { Fl_Window* o = widgetbin_panel = new Fl_Window(520, 85, "Widget Bin");
    w = o;
    { Fl_Group* o = new Fl_Group(3, 3, 79, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(5, 5, 25, 25);
        o->tooltip("Function");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Function"));
        o->image(pixmap[7]);
      }
      { Fl_Button* o = new Fl_Button(30, 5, 25, 25);
        o->tooltip("Class");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Class"));
        o->image(pixmap[12]);
      }
      { Fl_Button* o = new Fl_Button(55, 5, 25, 25);
        o->tooltip("Comment");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("comment"));
        o->image(pixmap[46]);
      }
      { Fl_Button* o = new Fl_Button(5, 30, 25, 25);
        o->tooltip("Code");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Code"));
        o->image(pixmap[8]);
      }
      { Fl_Button* o = new Fl_Button(30, 30, 25, 25);
        o->tooltip("Code Block");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("CodeBlock"));
        o->image(pixmap[9]);
      }
      { Fl_Button* o = new Fl_Button(5, 55, 25, 25);
        o->tooltip("Declaration");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("decl"));
        o->image(pixmap[10]);
      }
      { Fl_Button* o = new Fl_Button(30, 55, 25, 25);
        o->tooltip("Declaration Block");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("declblock"));
        o->image(pixmap[11]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(83, 3, 79, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(85, 5, 25, 25);
        o->tooltip("Window");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Window"));
        o->image(pixmap[1]);
      }
      { Fl_Button* o = new Fl_Button(110, 5, 25, 25);
        o->tooltip("Group");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Group"));
        o->image(pixmap[6]);
      }
      { Fl_Button* o = new Fl_Button(135, 5, 25, 25);
        o->tooltip("Pack");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Pack"));
        o->image(pixmap[22]);
      }
      { Fl_Button* o = new Fl_Button(85, 30, 25, 25);
        o->tooltip("Tabs");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Tabs"));
        o->image(pixmap[13]);
      }
      { Fl_Button* o = new Fl_Button(110, 30, 25, 25);
        o->tooltip("Scroll");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Scroll"));
        o->image(pixmap[19]);
      }
      { Fl_Button* o = new Fl_Button(85, 55, 25, 25);
        o->tooltip("Tile");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Tile"));
        o->image(pixmap[20]);
      }
      { Fl_Button* o = new Fl_Button(110, 55, 25, 25);
        o->tooltip("Wizard");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Wizard"));
        o->image(pixmap[21]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(163, 3, 54, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(165, 5, 25, 25);
        o->tooltip("Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Button"));
        o->image(pixmap[2]);
      }
      { Fl_Button* o = new Fl_Button(190, 5, 25, 25);
        o->tooltip("Return Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Return_Button"));
        o->image(pixmap[23]);
      }
      { Fl_Button* o = new Fl_Button(165, 30, 25, 25);
        o->tooltip("Light Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Light_Button"));
        o->image(pixmap[24]);
      }
      { Fl_Button* o = new Fl_Button(190, 30, 25, 25);
        o->tooltip("Repeat Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Repeat_Button"));
        o->image(pixmap[25]);
      }
      { Fl_Button* o = new Fl_Button(165, 55, 25, 25);
        o->tooltip("Check Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Check_Button"));
        o->image(pixmap[3]);
      }
      { Fl_Button* o = new Fl_Button(190, 55, 25, 25);
        o->tooltip("Round Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Round_Button"));
        o->image(pixmap[4]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(218, 3, 104, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(220, 5, 25, 25);
        o->tooltip("Slider");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Slider"));
        o->image(pixmap[37]);
      }
      { Fl_Button* o = new Fl_Button(245, 5, 25, 25);
        o->tooltip("Scroll Bar");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Scrollbar"));
        o->image(pixmap[38]);
      }
      { Fl_Button* o = new Fl_Button(270, 5, 25, 25);
        o->tooltip("Value Slider");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Value_Slider"));
        o->image(pixmap[39]);
      }
      { Fl_Button* o = new Fl_Button(295, 5, 25, 25);
        o->tooltip("Value Output");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Value_Output"));
        o->image(pixmap[45]);
      }
      { Fl_Button* o = new Fl_Button(220, 30, 25, 25);
        o->tooltip("Adjuster");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Adjuster"));
        o->image(pixmap[40]);
      }
      { Fl_Button* o = new Fl_Button(245, 30, 25, 25);
        o->tooltip("Counter");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Counter"));
        o->image(pixmap[41]);
      }
      { Fl_Button* o = new Fl_Button(270, 30, 25, 25);
        o->tooltip("Dial");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Dial"));
        o->image(pixmap[42]);
      }
      { Fl_Button* o = new Fl_Button(220, 55, 25, 25);
        o->tooltip("Roller");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Roller"));
        o->image(pixmap[43]);
      }
      { Fl_Button* o = new Fl_Button(245, 55, 25, 25);
        o->tooltip("Spinner");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Spinner"));
        o->image(pixmap[47]);
      }
      { Fl_Button* o = new Fl_Button(270, 55, 25, 25);
        o->tooltip("Value Input");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Value_Input"));
        o->image(pixmap[44]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(323, 3, 54, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(325, 5, 25, 25);
        o->tooltip("Input");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Input"));
        o->image(pixmap[14]);
      }
      { Fl_Button* o = new Fl_Button(350, 5, 25, 25);
        o->tooltip("Output");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Output"));
        o->image(pixmap[27]);
      }
      { Fl_Button* o = new Fl_Button(325, 30, 25, 25);
        o->tooltip("Text Edit");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Text_Editor"));
        o->image(pixmap[29]);
      }
      { Fl_Button* o = new Fl_Button(350, 30, 25, 25);
        o->tooltip("Text Display");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Text_Display"));
        o->image(pixmap[28]);
      }
      { Fl_Button* o = new Fl_Button(325, 55, 25, 25);
        o->tooltip("File Input");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_File_Input"));
        o->image(pixmap[30]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(378, 3, 54, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(380, 5, 25, 25);
        o->tooltip("Menu Bar");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Menu_Bar"));
        o->image(pixmap[17]);
      }
      { Fl_Button* o = new Fl_Button(405, 5, 25, 25);
        o->tooltip("Input Choice");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Input_Choice"));
        o->image(pixmap[15]);
      }
      { Fl_Button* o = new Fl_Button(380, 30, 25, 25);
        o->tooltip("Menu Button");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Menu_Button"));
        o->image(pixmap[26]);
      }
      { Fl_Button* o = new Fl_Button(405, 30, 25, 25);
        o->tooltip("Menu Item");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("menuitem"));
        o->image(pixmap[16]);
      }
      { Fl_Button* o = new Fl_Button(380, 55, 25, 25);
        o->tooltip("Choice");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Choice"));
        o->image(pixmap[15]);
      }
      { Fl_Button* o = new Fl_Button(405, 55, 25, 25);
        o->tooltip("Sub Menu");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("submenu"));
        o->image(pixmap[18]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(433, 3, 29, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(435, 5, 25, 25);
        o->tooltip("Browser");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Browser"));
        o->image(pixmap[31]);
      }
      { Fl_Button* o = new Fl_Button(435, 30, 25, 25);
        o->tooltip("Check Browser");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Check_Browser"));
        o->image(pixmap[32]);
      }
      { Fl_Button* o = new Fl_Button(435, 55, 25, 25);
        o->tooltip("File Browser");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_File_Browser"));
        o->image(pixmap[33]);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(463, 3, 54, 79);
      o->box(FL_THIN_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(465, 5, 25, 25);
        o->tooltip("Box");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Box"));
        o->image(pixmap[5]);
      }
      { Fl_Button* o = new Fl_Button(490, 5, 25, 25);
        o->tooltip("Clock");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Clock"));
        o->image(pixmap[34]);
      }
      { Fl_Button* o = new Fl_Button(465, 30, 25, 25);
        o->tooltip("Help Browser");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Help_View"));
        o->image(pixmap[35]);
      }
      { Fl_Button* o = new Fl_Button(465, 55, 25, 25);
        o->tooltip("Progress");
        o->box(FL_THIN_UP_BOX);
        o->callback((Fl_Callback*)type_make_cb, (void*)("Fl_Progress"));
        o->image(pixmap[36]);
      }
      o->end();
    }
    o->set_non_modal();
    o->end();
  }
  return w;
}

//
// End of "$Id$".
//
