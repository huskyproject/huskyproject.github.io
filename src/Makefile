include ../../huskymak.cfg

all:	index.html \
	history.html \
	fido.html \
	team.html \
	cvs.html \
	point.html \
	node.html \
	smapi.html \
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
	pkt2mail.html \
	mail2pkt.html \
	diskpoll.html \
	sqpack.html \
	mpost.html \
	gff.html \
	fidostat.html \
	huskypnt.html \
	faq.html \
	huskybse.html

%.html: %.c
	$(CC) -E -P -C -o $*.html $*.c

clean:
	-$(RM) *.html

distclean: clean

install:
	-$(INSTALL) -m0644 *.html ..
