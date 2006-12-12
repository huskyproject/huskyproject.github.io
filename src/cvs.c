#include "top.h"
#include "navbar.h"
</*>
   <h3>What is CVS?</h3>

   <blockquote>
     CVS is a source code repository maintainance system, which allows a group of
     developers located at distant places to work at the same source code over
     the internet.  This sounds complicated at first, but using CVS is really
     easy, even if you have never used it before.  If you want to contribute to
     the Husky project (and be it only for making some bug fixes from time to
     time), we suggest you install CVS and get a login to our CVS server.
     
     <p>
     In the following, you can see a very little introduction
     how CVS works and how you should and can use it, once you have gotten your
     account.  If you want to know CVS in more detail, please also read the
     documentation (info-pages) of CVS. They are very instructive.

     <ul>
     <li><i>Note:</i> This description only covers the command line version of CVS.
    However, if you are using a GUI version, the steps are the same, but there
    might be some differences and problems.
     <li>All CVS commands require a connection to the CVS server.
     <li><A href="http://www.cvshome.org/dev/codes.html">Get CVS</A> for
    your platform and install it. Please be sure to use at least version 1.10.
    <dir><small>Note for windows users:<br>
    Please use <a href=http://www.cygwin.com>cygwin</a> version of CVS
    if possible - to prevent unexpected CR-CRLF translation.
    </small></dir>
    Do not use CVS under different platforms on the same work source tree.<br>
    Do not use one working directory for more then one CVS connection.
     <li>Recommended settings for CVS (add to .cvsrc in your home directory):<br>
    <CODE>&nbsp;&nbsp;cvs -z3<BR>
    &nbsp;&nbsp;checkout -P<BR>
    &nbsp;&nbsp;update -P -d<BR>
    &nbsp;&nbsp;diff -c </CODE>

     <li>Read-only access:
         <p>
         If You have only retrieve and install latest sources follow the following procedure:
         <p>
         <blockquote>
         <kbd>cvs -d:pserver:anonymous@cvs.sourceforge.net:/cvsroot/husky login</kbd>
         </blockquote>
         and press <kbd>enter</kbd> where the <kbd>password:</kbd> prompted.
         (Login required for first cvs connect to this repository only.)
         <blockquote>
         <kbd>cvs -z3 -d:pserver:anonymous@cvs.sourceforge.net:/cvsroot/husky co smapi fidoconf ...</kbd>
         </blockquote>
         to retrieve libraries and needed programs or<br>
         <blockquote>
         <kbd>cvs -z9 -d:pserver:anonymous@cvs.sourceforge.net:/cvsroot/husky co .</kbd>
         </blockquote>
         to retrieve all modules.
         </p>

         <p>
         To update existing sources tree use <kbd>up</kbd> cvs command instead <kbd>co</kbd>.
         </p>

         <p>
         Check the file ChangeLog for infrmation about source changes.
         If you upgrade a cvs version then always do a make clean before
         you get the next version from the cvs server. If you dont then
         in some cases there will be problems. It is also possible to browse
         the cvs repository to get individual files. 
         </p>

     <li>Read-wrte access:
       <ul>
         <li>If you want to use the CVS server with write access (you is
         developer), register self into
         sourceforge.net and write mail to husky project manager, currently 
         <a href=mailto:stas_degteff@users.sourceforge.net>Stas Degteff</a>
         <li>Read <a href=https://sourceforge.net/cvs/?group_id=1332>Project: husky: CVS</a>
         page and doing as here write.
         <br>(Set the environment variable CVS_RSH to <kbd>ssh</kbd> and Use
         cvsroot <kbd>:ext:<i>&lt;developername&gt;</i>@cvs.husky.sourceforge.net:/cvsroot/husky</kbd>
         using '-d' cvs option or set the environment variable CVSROOT to.)
       </ul>
     <li>Get your work source tree:
       <ul>
         <li>Type <kbd>cvs co .</kbd> to checkout the latest version of the husky
         source tree of all modules on the cvs-server. A new directory for any
         module will be created in the current directory containing the sources.
         <li>Type <kbd>cvs co <i>&lt;module&gt;</i> [...] </kbd> for one
         or more modules. To get a list of all mudules type: <kbd>cvs history .
         </kbd>
       </ul>
     <li>Do your modifications:
       <ul>
         <li>Please group them together to match one log message. Do not do thousands
         of completely different modifications that do not depend on each other.
         As CVS saves the log message you enter with every file you have modified
         it is not very clever to do a long list of changes.<br>
         I.e. if you want to implement a new feature and fix a bug in an already
         existing module that is independent to the new feature, first fix the
         bug and commit the changes (see below) and then implement the new feature.
        <li>Make sure your sources are compileable!
      </ul>
    <li>To see what you or others have changed:
      <ul>
        <li>If you want to review the changes you have done type <KBD>cvs diff</KBD>
        . This will create a diff file. If you are using the above settings it
        will create a context diff which is IMHO easier to read. <BR>
        <li>You can also use <KBD>cvs diff <I>&lt;file&gt;</I> [...]</KBD> to only
        see the changes of the file(s) you have specified.
      </ul>
    <li>Update your work source tree:
      <ul>
        <li>Type <KBD>cvs up</KBD> in the root directory of your work source tree
        to update it. This is only necessary when other developers committed changes.
        <BR>
        <li>If there were conflicts, you will be notified by CVS and you have to
        resolve them by hand. CVS will save the two conflicting parts and mark
        them for you.
      </ul>
    <li>Commit your changes: (only non-anonymous users)
      <ul>
        <li>Type <KBD>cvs ci [<I>&lt;file&gt;</I> [...]]</KBD> to commit your changes.
        If you use <KBD>cvs ci</KBD> in the root directory of your work source
        tree, all modified files will be committed. <BR>
        <li>You will be asked for a log entry. Please read the notes in the template 
        and enter a detailed description. This description will also be used in 
        the changes.log.<BR>
        <I>Note:</I> if you are using a GUI version of CVS that does not use "<CODE>CVS:</CODE>"
        to mark comments in a template, you must remove all lines starting with
        "<CODE>CVS:</CODE>" by hand.
        <li>If you forget to update and another developer committed changes to the
        same file, your commit will be rejected.
      </ul>
    </ul>


      <p align="center">
      <small>Thanks to <a href="mailto:mr@uue.org">Michael Reinsch</A> fom BTXE developers team for the original.</small>
      </p>
          
      <small>Last update: 14/11/2002</small>
<!--*/>
#include "bottom.h"
