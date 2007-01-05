#include "top.h"
#include "bodytop.h"
#include "navbar.h"

      <h3>Stable Husky</h3>

      <blockquote>

      <h4>Stable Releases</h4>

      <p>When we want to release software, we take a snapshot of current Husky
      as root for the stable development branch. In this branch, only bugfixes
      will be made, but no new features will be implemented. In particular, we
      will not make disruptive changes that require you to make adaptions to
      your configuration file, or to re-build all libraries and programs
      (i.E. we do not change calling conventions for the dynamic
      libraries).</p>

      <p>When the software is ripe for release, it will have the version number
      of the current Husky snapshot it stems from, followed by the word
      <tt>release</tt>. Example: <tt>msged 6.0.0-release</tt></p>

      <p>Starting in Fall 2001, the minor (second) version number of all stable branches will be divisible by 2; I.E.  0,2,4 and so on.
      The stable branch as such is characterised by this second version number.</p>

      <p>Before the software is released, it has the same version number as the release, but the suffix is <tt>-stable</tt> instead of <tt>-release</tt>.</p>

      <h4>Maintenance Releases</h4>

      <p>The stable branch will continue to live after the release. Bugs that
      are found in the release will be fixed in the stable branch. After a
      while, it may occur that we make a follow-up maintenance release from the
      stable branch. For this release, we increase the patch (third) version number of the software.
      Example: <tt>msged 6.0.1-release</tt>. </p>

      <p>Generally, upgrading between software that differs only in
      the patch version number;  I.E., software from the same stable
      branch (same second version number) is straightforward:  Just
      plug the new executable in and go ahead.  There will be no
      linkage problems and no behaviour changes, only bug fixes.</p>

      <p>You may even upgrade to a new version of a dynamic library
      without having to recompile the software that uses this
      library (supposing you are using dynamic libraries / shared
      objects of course).  E.g., you may upgrade from <tt>smapi
      2.0.0-release</tt> to <tt>smapi 2.0.1-release</tt>.  That is
      why the branch is called stable.<p>

      <p>To clarify it, when a <i>new</i> stable branch is created, e.g. <tt>
      smapi 2.2-stable</tt>, you again have to be prepared for behaviour
      changes etc. when you upgrade from an older stable branch - only
      upgrading <i>within</i> a single stable branch is troublefree. Again:
      When only the letter behind the version number changes, you do not have
      to worry. In all other situations, you do have to worry.</p>

      <p>In Software released prior to fall 2001, the versioning scheme was different. There, the patch
      version number was designated by a letter, and the branch was designated by the second and third version number
      together. I.e., in old software, you could only safely upgrade when only the letter changed, while in new software, you
      can safely upgrade whenever the seond version number is the same.</p>

      <h4>Package dependencies</h4>

      <p>As already noted, you must combine the Husky programs with the correct
      versions of Husky library packages to work. For a stable Husky release,
      the VERSION file found inside the archive, as well as the Husky hompeage,
      clearly states which packages are required. For example, msged 6.0.0-release
      requires smapi 2.0-stable. This actually means that any stable version
      of msged 6.0 runs with any stable version of smapi 2.0. When new
      maintenance releases with the same second version number (but a different
      third patch verison number) are made, you can choose to only ugprade msged, only
      upgrade smapi, or both. Of course, the higher the patch version number,
      the fewer bugs that will be there, but you do not have to
      upgrade <i>everything</i> just to get <i>one</i> specific bug fix.
      </p>

      <h4>Developers</h4>
      <p>In order to learn how to work with CVS when a stable branch exists,
      please read the file <tt>cvs-branching</tt> in the <tt>develop-docs<tt>
      subdirectory of the <tt>huskybse</tt> package.
      </p>


#include "bottom.h"
