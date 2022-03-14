#include "top.h"
#include "smapi.h"
#include "bodytop.h"
#include "navbar.h"

      <h3>What is SMAPI?</h3>
      <blockquote>
        <p><strong>Smapi</strong> is a modified message API for accesing *.MSG, Squish and Jam
        message base files. It is required for all other Husky software. </p>
        <p> As the source only builds a single library, there may be no binary package of smapi for your platform.
         In that case, Husky does not support shared libraries on your platform and you will not need a smapi
          package at all, because the binaries of the other projects will be stand-alone binaries.
      </blockquote>

      <h3>What does it need?</h3>
      <blockquote>
        Operating systems:
        <ul>
          <li>All supported platforms.
        </ul>
        Caveats:
        <ul>
          <li>If you need two versions of SMAPI at once, e.g. because you want to use both <tt>hpt 0.9.7-stable</tt>, which requires <tt>smapi 1.6.4</tt>, but also want to use <tt>msged 6.0.0-release</tt>, which requires <tt>smapi 2.0</tt>, you will find instructions in the file <tt>DEPENDENCIES</tt> in the
          <tt><a href="huskybse.html">huskybse</a></tt>&nbsp v1.4 RC4 package.</li>
        </ul>
      </blockquote>

      <h3>Downloads</h3>
      <blockquote>

        <p>Archives of the older versions v1.0 &amp; v1.4 are available on the project&nbsp;
          <a href="http://sourceforge.net/project/showfiles.php?group_id=1332">downloads</a>&nbsp;page,
           as are the following more recent versions:
          .</p>

        <table cellpadding="3" cellspacing="0" border="0">

          <tr valign="top">
            <td><tt>smapi-2.4-rc5.tar.gz</tt></td>
            <td>22 April 2006</td>
            <td>newest release candidate: smapi 2.4 RC5 source code</td>
          </tr>

          <tr valign="top">
            <td><tt>smapi-2.4-rc5-win32.zip</tt></td>
            <td>22 April 2006</td>
            <td>newest release candidate: smapi 2.4 RC5 compiled for Win32</td>
          </tr>

          <tr valign="top">
            <td><tt>smapi-2.2.4.tar.gz</tt></td>
            <td>30 May 2003</td>
            <td>smapi 2.2.4 Release source code</td>
          </tr>

          <tr valign="top">
            <td><tt>smapi-2.2.4-release-win32.zip</tt></td>
            <td>30 May 2003</td>
            <td>smapi 2.2.4 Release compiled for Win32</td>
          </tr>

        </table>


        <p> Note also that development & other versions of the SMAPI files may be found in the
         project&nbsp;<a href="cvs.html">CVS</a>&nbsp;repository, which is also viewable
          online&nbsp;<a href="http://husky.cvs.sourceforge.net/husky">here</a>.</p>

      </blockquote>


      <h3>Contacting the author</h3>
      <blockquote>
        No special maintainer. See the <a href="team.html">team page</a>.
      </blockquote>


      <small>Last update: 22 April 2006</small>

#include "bottom.h"
