#include "top.h"
#include "navbar.h"

      <h3>Download Debian-Packages for Husky!</h3>
      <center>
      <img src="debian.jpg" alt="Debian Logo" align="center">
      </center>

      <blockquote>
      <p>Please note: Today all Packages are ONLY compiled for the unstable
      Debian, Sid. My second PC needs a new Mainboard (Sockel 7, for AMD K6/2 450MHz).
      If i have a new one (not in the near future, i have NO money), i will also
      build for the stable Debian.</p>

      <p>To get Debian-Packages for the <a href="stable.html">Stable</a>
      Husky versions, you have to enter the following line into your
      <EM>/etc/apt/sources.list</EM> and run apt-get update (or select
      the Update-Menu in dselect).</p>
      
      <p><CODE>
      deb ftp://goliathbbs.dnsalias.net/debian/huskystable unstable main
      </CODE></p>
      
      <p>To get the Source for this Packages you enter the following line too:</p>

      <p><CODE>
      deb-src ftp://goliathbbs.dnsalias.net/debian/huskystable unstable main
      </CODE></p>


      <p>If you cant live without the newest versions, or you just want to
      test/have the new functions of the programs, you need the latest Husky
      versions. These are build directly from the Husky CVS-Server !
      You could <STRONG>not use</STRONG> one stable Package with one unstable
      package. You have to upgrade <STRONG>all</STRONG> your Packages to this
      unstable versions ! (The Dependencies in the Packages will force you to
      do so).<br>
      There is <STRONG>NO</STRONG> Warranty that this Packages are working !
      If you find bugs in the Packages please inform the Package-Maintainer
      (see <a href="team.html">Team-Page</a>). If you find bugs in the
      Programs itself please inform the Maintainer of this program.</p>
      
      <p> You really want the newest Packages available ? Then insert the 
      following into your sources.list:</p>
      
      <p><CODE>
      deb ftp://goliathbbs.dnsalias.net/debian/huskyunstable unstable main
      </CODE></p>
      
      <p>To get the Source for this Packages you enter the following line too:</p>

      <p><CODE>
      deb-src ftp://goliathbbs.dnsalias.net/debian/huskyunstable unstable main
      </CODE></p>

      </blockquote>

      <small>Last update: 12/04/2001</small>

#include "bottom.h"
