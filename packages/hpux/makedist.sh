#!/bin/sh
#
# makedist - make an hp-ux distribution.
#

#
# Since the HP-UX software distribution stuff doesn't directly support
# symbolic links, we have the option of making an installation script that
# creates symbolic links, or include files that are symbolic links in the
# distribution.  Since we want this distribution to be relocatable, the
# script method probably won't work and we have to make dummy link files...
#

if [ !-d links ]; then
	mkdir links
fi

for file in `cd ../../FL; ls *.H`; do
	ln -sf $file links/`basename $file .h`
done

ln -sf FL links/Fl

cd ../..

/usr/sbin/swpackage -v -s packages/hpux/fltk.info \
	-d packages/hpux/fltk-1.0-hpux.depot -x write_remote_files=true \
	-x target_type=tape fltk
