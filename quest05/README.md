# quest05

Quest05	My Count Files
Submit directory	ex00
Submit file	my_count_files
Description
Exercise: my_count_files

Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include ".", the starting directory.

Example 00
Example of output:

$>./my_count_files | cat -e
13$
$>
Tips
You should dig into the command ls (man ls)
You should dig into the command wc (man wc)

Quest05	My Clean
Submit directory	ex01
Submit file	my_clean
Description
In a file called my_clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #

The command line will print and delete all files found.
Only one command is allowed: no ; or && or other trickeries.

Example 00

$>my_clean
./.zshrc~
...
./blah/#tat#
$>
Tip
You should dig into the command find (man find)

Quest05	My Find Sh
Submit directory	ex02
Submit file	my_find_sh
Description
Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. It should display only the name of files without the extension .sh.

Example 00

$>./my_find_sh | cat -e
file1$
file2$
file3$
$>
Tips
You should dig into the command find (man find) specially the -exec option
You should dig into the command basename
You should dig into the command rev (man rev)
You should dig into the command cut (man cut)
You should dig into the command sed (man sed)

Quest05	My Patch
Submit directory	ex03
Submit file	my_patch
Description
Patch transform a file origin to a fixed file applying the transformation or you can called it patch.

Create a file my_patch, so that:

$>diff a my_patch > sw.diff
Use the patch command to apply the patch on file a from the diff sw.diff. :-)

$>cat a
STARWARS
Episode IV, A NEW HOPE It is a period of civil war.

Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
an armored space station with enough power to destroy an entire planet.

Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>
$>cat sw.diff
1,2c1,8
< STARWARS
< Episode IV, A NEW HOPE It is a period of civil war.
---
> Episode V, A NEW H0PE It is a period of civil war
> Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
> During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.
>
>
> Pursued by the Empire's sinister agents,
> Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..
>
4,6d9
< Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
< During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
< an armored space station with enough power to destroy an entire planet.
8d10
< Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>
Tips
You will need to use the command patch (man patch)
When you copy both files, make sure to return to the line. (press enter :D)
