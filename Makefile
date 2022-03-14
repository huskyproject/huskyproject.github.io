# Makefile for husky homepage
#
# Edit html code of source files (see 'src' dir) and run make to produce
# *.html.
# If you are logged into ssh:husky.sf.net (or other husky site host) then you 
# can install compiled site into web server document root dir: 
# run 'make install'.
#
# Use huskymak.cfg for DIRSEP and INSTALL macro

include ../huskymak.cfg

# Location of the http server document root for husky site
HOMEPAGEDIR	= /home/groups/h/hu/husky/htdocs

# Preprocessor for building html files
PP		= gpp

# Source files dir
SRCDIR		= src$(DIRSEP)

all:	index.html \
	history.html \
	fido.html \
	debian.html \
	team.html \
	cvs.html \
	dl1.html \
	current.html \
	stable.html \
	smapi.html \
	dl2.html \
	node.html \
	point.html \
	fidoconf.html \
	hpt.html \
	msged.html \
	cfroute.html \
	lxtrack.html \
	ffma.html \
	promknl.html \
	nltools.html \
	htick.html \
	protick.html \
	progate.html \
	emailpkt.html \
	diskpoll.html \
	sqpack.html \
	mpost.html \
	gff.html \
	fidostat.html \
	huskypnt.html \
	faq.html \
	fastlst.html \
	huskybse.html \
	huskmisc.html \
        bsopack.html

%.html: $(SRCDIR)%.c
	$(PP) -o $*.html $(SRCDIR)$*.c

clean:
	-$(RM) $(RMOPT) *.html

distclean: clean

install:
	-$(INSTALL) -m0664 *.html $(HOMEPAGEDIR)
