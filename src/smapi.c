#include "top.h"
#include "navbar.h"

      <h3>What is it?</h3>
      <blockquote>
        <strong>Smapi</strong> is a modified msgapi for accesing *.MSG, Squish and Jam
	message base files. It is required for all other Husky software. <p> As the source only builds a single library, there may be no binary package of smapi for your platform. In this case, Husky does not support shared libraries on your platform, and you will not need a smapi package at all, because the binaries of the other projects will be stand-alone binaries.
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
          <tt><a href="huskybse.html">huskybse</a> 0.2.0</tt>-package.</li>
        </ul>
      </blockquote>

      <h3>Downloads</h3>
      <blockquote>
        <table cellpadding="5" cellspacing="0" border="0">
          <tr valign="top">
            <td><a href="http://www.physcip.uni-stuttgart.de:8080/fidosoft.husky/smapi-2.0.0-src.tar.gz"><tt>smapi-2.0.0-src.tar.gz</tt></a><br>
            </td>
            <td>newest release: smapi 2.0.0-stable source code</td>
          </tr>

          <tr valign="top">
            <td><a href="http://www.physcip.uni-stuttgart.de:8080/fidosoft.husky/smapi-1.6.4b-src.tar.gz"><tt>smapi-1.6.4b-src.tar.gz</tt></a><br>
            <a href="http://www.physcip.uni-stuttgart.de:8080/fidosoft.husky/smapi-1.6.4b-src.zip"><tt>smapi-1.6.4b-src.zip</tt></a>
            </td>
            <td>older release: smapi 1.6.4b-stable source code</td>
          </tr>
          <tr valign="top">
            <td><a href="http://www.physcip.uni-stuttgart.de:8080/fidosoft.husky/smapi-1.6.2.tar.gz"><tt>smapi-1.6.2.tar.gz</tt></a></td>
            <td>very old release: smapi 1.6.2 source code</td>
          </tr>
          <tr valign="top">
            <td><a href="http://cvs.physcip.uni-stuttgart.de/cvs2/current/smapi-current-latest.tar.gz"><tt>smapi-latest.tar.gz</tt></a></td>
            <td>unstable development cvs snapshot</td>
          </tr>
        </table>
      </blockquote>


      <h3>Contacting the author</h3>
      <blockquote>
        No special maintainer. See the <a href="team.html">team page</a>.
      </blockquote>


      <small>Last update: 27/11/2001</small>

#include "bottom.h"
