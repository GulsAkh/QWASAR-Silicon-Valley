# my-css-is-easy-i

My Css Is Easy I	
Submit directory	.
Submit files	index.html - style.css
Description
Create a html page (named: index.html) with a css style (named: style.css).

It is required to use flexbox. If you use float, this exercise will be considered as failed.

Flexbox is very powerful in order to align responsively elements.

Your web page will be responsive, which means your page will handle a mobile view and a desktop view.

Mobile view:

----------
| HEADER |
----------
|  HERO  |
----------
| CONTENT|
----------
| SIDEBAR|
----------
| FOOTER |
----------
Desktop view:

---------------------
|       HEADER      |
---------------------
|        HERO       |
---------------------
| CONTENT | SIDEBAR |
---------------------
|       FOOTER      |
---------------------
Example:

https://storage.googleapis.com/qwasar-public/track-web/css_is_easy.gif

Each section will have their names displayed (ex: in the header component you will have the word header, hero for hero, etc.)
Use some padding to make it smooth.
Header will have a background color: 00B7EB
Hero will have a background color: FF0000
Content will have a background color: 00FF00
Sidebar will have a background color: 800080
Footer will have a background color: 444444
Mobile view is defined as a screen width less than 640px

Desktop view is defined as a screen width bigger than 640px

Some browsers create a margin inside the body tag.
To get rid of it:

body {
    margin: 0px !important;
}
Gandalf is not a big fan of margins.
Gandalf is not a big fan of HTML5 (header/section/footer will be replaced by the tag div.)
Gandalf will not find sections if they are not properly named and it will display an error about timeout.

