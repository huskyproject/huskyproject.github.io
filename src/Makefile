include ../../huskymak.cfg

all:	index.html \
	history.html \
	fido.html \
	team.html \
	cvs.html \
	dl1.html \
	current.html \
        stable.html \
	smapi.html \
        dl2.html \
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
	huskybse.html \
	huskmisc.html

%.html: %.c
	$(CC) -E -P -C -o $*.html $*.c

clean:
	-$(RM) *.html

distclean: clean

install:
	-$(INSTALL) -m0644 *.html ..
