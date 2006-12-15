#include "top.h"
#include "navbar.h"

      <h3>What is it?</h3>
      <blockquote>
        <strong>emailpkt</strong> is a FTN mailer over e-mail. It sends bundles
	as mime base64 attachments and reads and processes incoming mails in
	search of packets (either MIME/base64 and uuencode).
      </blockquote>

      <h3>What does it need?</h3>
      <blockquote>
        Operating systems:
        <ul>
          <li>Unix</li>
          <li>Windows 9x/Me & Windows NT/2000 (emailpkt-current)</li>
        </ul>
        Dependencies:
        <ul>
	   <li><a href="smapi.html">smapi</a>
	   <li><a href="fidoconf.html">fidoconf</a>
	   <li><a href="http://www.cygwin.com">Cygwin</a> (emailpkt-current/win32)
        </ul>
	Extra programs:
	<ul>
	   <li>Any MTA (such as sendmail, smail, exim, etc)
	</ul>
	
      </blockquote>

      <h3>Downloads</h3>

      <blockquote>
        <table cellpadding="5" cellspacing="0" border="0">
          <tr valign="top">
            <td><a href="/cvs2/stable/emailpkt-stable-latest.tar.gz"><tt>emailpkt-stable-latest.tar.gz</tt></a>
	    </td>
            <td>current release: EmailPkt 0.2-stable source code</td>
          </tr>
          <tr valign="top">
            <td>Husky project CVS for&nbsp;<a href="http://husky.cvs.sourceforge.net/husky/emailpkt/">
	    <tt>emailpkt</tt></a></td>
            <td>development version is in&nbsp;<a href="cvs.html">CVS</a></td>
          </tr>
        </table>
      </blockquote>


      <h3>Contacting the authors</h3>
      <blockquote>
        First maintainer: German Theler.
        <br>Current maintainer: Stas Degteff 2:5080/102.
        (See the <a href="team.html">team page</a> for details.)
      </blockquote>


      <small>Last update: 14 December 2006</small>

#include "bottom.h"
