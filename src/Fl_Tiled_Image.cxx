//
// "$Id: Fl_Tiled_Image.cxx,v 1.1.2.2 2001/12/06 18:12:35 easysw Exp $"
//
// Tiled image code for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2001 by Bill Spitzak and others.
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
// Please report all bugs and problems to "fltk-bugs@fltk.org".
//

#include <FL/Fl.H>
#include <FL/Fl_Tiled_Image.H>
#include <FL/fl_draw.H>


//
// 'Fl_Tiled_Image::Fl_Tiled_Image()' - Constructor.
//
// Use a width and height of 0 to tile the whole window/widget.
//

Fl_Tiled_Image::Fl_Tiled_Image(Fl_Image *i,	// I - Image to tile
                               int      W,	// I - Width of tiled area
			       int      H) :	// I - Height of tiled area
  Fl_Image(W,H,0) {
  image_       = i;
  alloc_image_ = 0;

  if (W == 0) w(Fl::w());
  if (H == 0) h(Fl::h());
}


//
// 'Fl_Tiled_Image::~Fl_Tiled_Image()' - Destructor.
//

Fl_Tiled_Image::~Fl_Tiled_Image() {
  if (alloc_image_) delete image_;
}


//
// 'Fl_Tiled_Image::copy()' - Copy and resize a tiled image...
//

Fl_Image *			// O - New image
Fl_Tiled_Image::copy(int W,	// I - New width
                     int H) {	// I - New height
  if (W == w() && H == h()) return this;
  else return new Fl_Tiled_Image(image_, W, H);
}


//
// 'Fl_Tiled_Image::color_average()' - Blend colors...
//

void
Fl_Tiled_Image::color_average(Fl_Color c,	// I - Color to blend with
                              float    i) {	// I - Blend fraction
  Fl_Image *temp = image_->copy();

  temp->color_average(c, i);

  image_       = temp;
  alloc_image_ = 1;
}


//
// 'Fl_Tiled_Image::desaturate()' - Convert the image to grayscale...
//

void
Fl_Tiled_Image::desaturate() {
  Fl_Image *temp = image_->copy();

  temp->desaturate();

  image_       = temp;
  alloc_image_ = 1;
}


//
// 'Fl_Tiled_Image::draw()' - Draw a shared image...
//

void
Fl_Tiled_Image::draw(int X,	// I - Starting X position
                     int Y,	// I - Starting Y position
		     int W,	// I - Width of area to be filled
		     int H,	// I - Height of area to be filled
		     int cx,	// I - "Source" X position
		     int cy) {	// I - "Source" Y position
  if (!image_->w() || !image_->h()) return;
  if (W == 0) W = Fl::w();
  if (H == 0) H = Fl::h();

  fl_clip(X, Y, W, H);

  X += cx;
  Y += cy;

  X = X - (X % image_->w());
  Y = Y - (Y % image_->h());

  W += X;
  H += Y;

  for (int yy = Y; yy < H; yy += image_->h())
    for (int xx = X; xx < W; xx += image_->w())
      image_->draw(xx, yy);

  fl_pop_clip();
}


//
// End of "$Id: Fl_Tiled_Image.cxx,v 1.1.2.2 2001/12/06 18:12:35 easysw Exp $".
//
