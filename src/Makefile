include ../../huskymak.cfg

all:	index \
	history \
	fido \
	team \
	cvs \
	point \
	node \
	smapi \
	fidoconf \
	hpt \
	msged \
	cfroute \
	lxtrack \
	ffma \
	promknl \
	nltools \
	htick \
	protick \
	progate \
	pkt2mail \
	mail2pkt \
	diskpoll \
	sqpack \
	mpost \
	gff \
	fidostat \
	huskypnt \

index:
	$(CC) -E -P -o index.html index.c

history:
	$(CC) -E -P -o history.html history.c

fido:
	$(CC) -E -P -o fido.html fido.c

team:
	$(CC) -E -P -o team.html team.c

cvs:
	$(CC) -E -P -o cvs.html cvs.c

point:
	$(CC) -E -P -o point.html point.c

node:
	$(CC) -E -P -o node.html node.c

smapi:
	$(CC) -E -P -o smapi.html smapi.c

fidoconf:
	$(CC) -E -P -o fidoconf.html fidoconf.c

hpt:
	$(CC) -E -P -o hpt.html hpt.c

msged:
	$(CC) -E -P -o msged.html msged.c

cfroute:
	$(CC) -E -P -o cfroute.html cfroute.c

lxtrack:
	$(CC) -E -P -o lxtrack.html lxtrack.c

ffma:
	$(CC) -E -P -o ffma.html ffma.c

promknl:
	$(CC) -E -P -o promknl.html promknl.c

nltools:
	$(CC) -E -P -o nltools.html nltools.c

htick:
	$(CC) -E -P -o htick.html htick.c

protick:
	$(CC) -E -P -o protick.html protick.c

progate:
	$(CC) -E -P -o progate.html progate.c

pkt2mail:
	$(CC) -E -P -o pkt2mail.html pkt2mail.c

mail2pkt:
	$(CC) -E -P -o mail2pkt.html mail2pkt.c

diskpoll:
	$(CC) -E -P -o diskpoll.html diskpoll.c

sqpack:
	$(CC) -E -P -o sqpack.html sqpack.c

mpost:
	$(CC) -E -P -o mpost.html mpost.c

gff:
	$(CC) -E -P -o gff.html gff.c

fidostat:
	$(CC) -E -P -o fidostat.html fidostat.c

huskypnt:
	$(CC) -E -P -o huskypnt.html huskypnt.c

clean:
	-$(RM) *.html

distclean: clean

install:
	-$(INSTALL) -m0644 *.html ..
