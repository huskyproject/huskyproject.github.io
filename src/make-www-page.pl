#!/usr/bin/perl
#  homepage/src/make-www-page.pl 
#  Used to create a new version of an html page for the 
# husky.sourceforge.net web site.
#  Copyright (c) 2006 Robert James Clay 
#  All Rights Reserved. This is free software;  you can redistribute
#  it and/or modify it under the same terms as Perl itself.

use warnings;
use strict;

use File::Slurp;
use File::Spec;
use HTML::Template;

# Source files, *.htm & huskywww.tmpl, are assumed to be in the same current
# directory as this script.
my $SRCDIR = File::Spec->curdir();
my $HTMLDIR = File::Spec->updir();

# set this to the basename of the content file to be generated 
my $Content = 'index';

# get current time
my ($sec, $min, $hour, $day, $mon, $year, $wday, $yday, $isdst) = localtime;


# open & read the file containing the content of the page, which is put in $BodyContent
my $ContentPage = $Content . '.htm';
my $ContentPath = File::Spec->catfile( $SRCDIR, $ContentPage );
my $BodyContent = read_file($ContentPath);
chomp $BodyContent;

# open the html template
my $TemplatePath = File::Spec->catfile( $SRCDIR, 'huskywww.tmpl' );
my $template = HTML::Template->new(filename => $TemplatePath);

# fill in the body of the page
$template->param(BODYCONTENT => $BodyContent);

# fill in the 'update' date
$template->param(DAY => $day);
$template->param(MON => ($mon + 1));
$template->param(YEAR => ($year + 1900));

# Create html page in the parent directory
my $HTMLPage = $Content . '.html';
my $HTMLPath = File::Spec->catfile( $HTMLDIR, $HTMLPage );
my $newpage=$HTMLPath;

# open FH for write
open(FH, ">$newpage") || die $!;

# use the function to send the new contents to the new version of the  file
$template->output(print_to => *FH);    

# close the filehandle
close(FH);

