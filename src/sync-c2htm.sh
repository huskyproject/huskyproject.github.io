#!/bin/bash
#  sync-c2htm.sh - 25 Dec 2006
#  Example script to syncronize the *.c type include files to the
#  *.htm type include files used by the make-www-page.pl script.	
#  Assumes it is being run from the directory where the *.c files
#  are present, & resulting *.htm files are created in the same place.
#  Copyright (c) 2006 Robert James Clay 
#  All Rights Reserved. This is free software;  you can redistribute
#  it and/or modify it under the same terms as with Perl.

#
SRCDIR=`pwd`

# ensure this list has all of the files you want to convert
FILES="
bsopack.c
cfroute.c
current.c
cvs.c
debian.c
diskpoll.c
dl1.c
dl2.c
emailpkt.c
faq.c
fastlst.c
ffma.c
fido.c
fidoconf.c
fidostat.c
gff.c
history.c
hpt.c
htick.c
huskmisc.c
huskybse.c
huskypnt.c
index.c
lxtrack.c
mpost.c
msged.c
nltools.c
node.c
point.c
progate.c
promknl.c
protick.c
smapi.c
sqpack.c
stable.c
team.c
"
    
for file in $FILES
do
  FILENAME=`basename $file .c`
  sed -f $SRCDIR/sed-wwwpl.txt $SRCDIR/$FILENAME.c > $SRCDIR/$FILENAME.htm 
done

