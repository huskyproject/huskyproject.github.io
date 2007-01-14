#include "top.h"
#include "debian.h"
#include "bodytop.h"
#include "navbar.h"

      <a href="http://www.debian.org"><img align="left" src="debian.jpg" alt="Debian Logo" ></a>

      <h2 align="center">Download Debian Packages for Husky!</h2><br clear="left">
      
      <blockquote>
	<h3>Husky Stable</h3>
	<ul>
         <li>For Husky-stable go here:
        <a href="http://husky.sourceforge.net/debian/dists/sarge/index.html">stable</a> </li>
         <li>These binary packages were built for Debian stable (sarge).</li>
        <li>For apt-get add in your /etc/apt/sources.list
        <b>deb http://husky.sourceforge.net/debian stable main</b></li>

     	  <li>For build Husky-stable on Debian unstable system add in /etc/apt/sources.list<li>
         <b>deb-src http://husky.sourceforge.net/debian stable main</b>
        and use <a href="http://packages.debian.org/unstable/admin/apt-src.html">apt-src</a> 
        package</li>

        </ul>      
      </blockquote>

      <blockquote>
	<h3>Husky Testing</h3>

	<ul>
	
	 <li>For Husky-testing go here: <a href="http://husky.sourceforge.net/debian/dists/sid/index.html">testing</a> </li>

	 <li>These binary packages were built for Debian testing (sid) (but not recently).</li>
 
    	 <li>For apt-get add in your /etc/apt/sources.list <b>deb http://husky.sourceforge.net/debian testing main</b></li>

     	 <li>For build Husky-testing on Debian stable system add in /etc/apt/sources.list
	  <b>deb-src http://husky.sourceforge.net/debian testing main</b>
	  and use <i>apt-get -b source &lt;package&gt;</i></li>
	
	</ul>
      </blockquote>
      
      <blockquote>
	<h3>Husky Old Stable</h3>
	<ul>
         <li>For Husky Old Stable go here:
        <a href="http://husky.sourceforge.net/debian/dists/woody/index.html">woody</a> </li>
         <li>These binary packages were built for Debian Old Stable (woody).</li>
        <li>For apt-get add in your /etc/apt/sources.list
        <b>deb http://husky.sourceforge.net/debian stable main</b></li>

     	  <li>For build Husky-stable on Debian unstable system add in /etc/apt/sources.list
         <b>deb-src http://husky.sourceforge.net/debian stable main</b>
        and use <a href="http://packages.debian.org/unstable/admin/apt-src.html">apt-src</a> 
        package</li>

        </ul>      
      </blockquote>
      <blockquote>
              
	<p>If you find some broken dependencies or bugs in these packages, contact me:
	<a href="mailto:%22Pavel%20Andreew%22%20sfpavel%5Bat%5Dusers.sourceforge.net">Husky Debian Maintainer</a></p>
	
	<p>For an alternate Husky Debian index page: go&nbsp;<a href="/debian/">here</a>.</p>

      </blockquote>

      <blockquote>
      <h4>Older News...</h4>
	<ul>

	<li>28/03/2005: Husky 1.4-rc3 released</li>

	<li>18/09/2003: Husky 1.4-rc2 released</li>

	<li>23/05/2003: Husky 1.4-rc1 released</li>

	<li>26/02/2003: Husky 1.4-beta2 released</li>

	<li>21/02/2003: 
	    Update Beta1 for woody: now smapi has LGPL license so <b>all</b>
	    Husky software go into main!</li>
	
	<li>14/02/2003: 
	    First beta version of upcoming 1.4 release: huskybase, smapi, fidoconf,
	    bsopack, hpt, hptkill, hptsqfix, hpucode, htick, nltools, sqpack.</li>
	
	<li>07/02/2003: 
	    New unstable packages: huskybase, smapi, fidoconf, bsopack, hpt, hptkill,
	    hptsqfix, hpucode, htick, nltools, sqpack.</li>

        <li>31/12/2002: 
           New official release of stable packages: bsopack, fidoconf, hpt, hptkill,
	    hpucode, htick, nltools, smapi.</li>

        <li>11/11/2002: 
	   Official release of stable packages: bsopack, fidoconf, hpt, hptkill, hptsqfix, hpucode, htick, nltools, smapi, sqpack.
	   Remove unsupported packages from stable: emailpkt, msged.</li>	   

        <li>08/10/2002: New unstable package: hpucode.</li>

        <li>04/10/2002: Updated unstable packages: smapi, fidoconf, bsopack, hpt, hptkill, htick, nltools, sqpack.  New unstable package: hptsqfix</li>

        <li>19/09/2002: Stable Release Candidat 2: smapi, fidoconf, hpt, htick, bsopack, sqpack.</li>	   

	<li>26/08/2002: New unstable packages: bsopack, cfroute, emailpkt, msged, nltools.</li>

	<li>23/08/2002: New stable packages: bsopack, emailpkt, msged.

	<li>22/08/2002:   New unstable packages: smapi, fidoconf, hpt, htick, sqpack, hptkill.</li>

        <li>19/08/2002:  New cvs release available on this site.      </li>
      
    </ul>      


      <small>Last update: 13 December 2006</small>

#include "bottom.h"
