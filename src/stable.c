#include "top.h"
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
      <tt>stable</tt>. Example: <tt>hpt 0.9.7-stable</tt></p>

      <h4>Maintenance Releases</h4>

      <p>The stable branch will continue to live after the release. Bugs that
      are found in the release will be fixed in the stable branch. After a
      while, it may occur that we make a follow-up maintenance release from the
      stable branch. It will have the same version number, but followed by a
      letter. Example: <tt>hpt 0.9.7a-stable</tt>. If you already have the
      earlier stable release (<tt>hpt 0.9.7-stable</tt>), upgrading to any
      follow-up maintenance release will be very easy: You can simply drop in
      the new version of the software, will have lesser bugs, but no unwanted
      new features or behaviour changes. You may even upgrade to a new version
      of a dynamic library without having to recompile the software that uses
      this library (supposing you are using dynamic libraries / shared objects
      of course). That is why the branch is called stable.<p>

      <p>To clarify it, when a <i>new</i> stable branch is created, e.g. <tt>
      hpt 0.9.8-stable</tt>, you again have to be prepared for behaviour
      changes e.t.c. when you upgrade from an older stable branch - only
      upgrading <i>within</i> a single stable branch is troublefree. Again:
      When only the letter behind the version number changes, you do not have
      to worry. In all other situations, you do have to worry.</p>

      <h4>Package dependencies</h4>

      <p>As already noted, you must combine the Husky programs with the correct
      versions of Husky library packages to work. For a stable Husky release,
      the VERSION file found inside the archive, as well as the Husky hompeage,
      clearly states which packages are required. For example, hpt 0.9.7-stable
      requires smapi 1.6.4-stable. This actually means that any stable version
      of hpt 0.9.7 runs with any stable version of smapi 1.6.4. When new
      maintainance releases with the same version number (but a different
      letter behind it) are made, you can choose to only ugprade hpt, only
      upgrade smapi, or both. Of course, the higher the letter after the
      version number, the lesser bugs will be there, but you do not have to
      upgrade <i>everything</i> just to get <i>one</i> specific bug fix.
      </p>

      <h4>Developers</h4>
      <p>In order to learn how to work with CVS when a stable branch exists,
      please read the file <tt>cvs-branching</tt> in the <tt>develop-docs<tt>
      subdirectory of the <tt>huskybse</tt> package.
      </p>


#include "bottom.h"
