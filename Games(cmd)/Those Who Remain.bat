@echo off
cls
color 4
title Those Who Remain

:Main Menu
cls
echo  _-_-_-Those Who Remain-_-_-_
echo.
echo  1}Start
echo  2}How to play
echo  3}Exit
echo.
set /p ass=
if %ass% == 1 goto Start
if %ass% == 2 goto how to play
if %ass% == 3 goto Exit

:how to play
cls
color 5
echo  ?!?!?!?!How to play!?!?!?!?
echo.
echo  Created by PPK
echo  You have to type the following number and hit enter to play
echo  This game is roleplay game. You have to play for a week,
echo  Because this game is too long
echo  Read the story carefully...
echo  If some of grammer wrong, forgive me...
echo.
echo  _____Thanks for playing_____
echo.
echo  1}Back

set /p cctv=
if %cctv% == 1 goto Main Menu

:Exit
echo.
echo  Are you sure? (y/n)
set /p ll=
if %ll% == y goto Exit12
if %ll% == n goto Main Menu

:Start
cls
color 3
echo.
echo  Please enter your name to continue 
echo  Name:
set /p name=
cls
echo. 
echo  You are a Gangstar and 
echo  You are having breakfast at restaurent with your friend nick
echo  You say "Nick, You are the only one who can trust"
echo  Nick say "Ha, Do you think so?... Thanks dude" 
echo.
echo  BOOM!
echo.
echo  An airplane crush and 
echo  You and your friend survive.
echo  Nick say "Oh my god... What just happened?"
echo  A man is going mad and trying to bite Nick from behind
echo  You say"NICK, BEHIND YOU!"
echo  And you see many mad people are running toward you! Nick can't move
echo.
echo  Will you save Nick? Or Run away?
echo  You don't have good chance of saving Nick
echo.
echo  1}Save Nick and run away
echo  2}Run away
set /p cv=
if %cv% == 1 goto Save Nick and run away
if %cv% == 2 goto Run away

:Save Nick and run away
cls
color 3
echo.
echo  You saved Nick harmlessly. When you get out of the restaurent, its explode! 
echo  and you run away aimlessly and reach to main road
echo  Nick say "Thank you %name%, oh god... what happened?"
echo  You say "I don't know but I saw many mad people are coming out
echo  of the plane and trying to kill us! They are not mad they are some kind of monster..."
echo  Nick said "I think they are zombies. I know zombies are not real but...what in the world is happening?"
echo  Then you see a woman and a zombie is trying to kill her and she get bite
echo  She is one of them now. So you understand that if you get bite of zombies, you will turn into a zombie
echo.
echo  Nick say "I don't feel safe. Let's go to somewhere..."
echo  You say "Yes, you are right"
echo.
echo  Will you go to your Gang? or Will you go to your house?
echo  Think carefully. Your family should get kill and your gang have guns, so... safe. Right?
echo.
echo  1}Go to your Gang
echo  2}Go to your house
echo  3}Let my friend choose
set /p tv=
if %tv% == 1 goto my Gang
if %tv% == 2 goto my house
if %tv% == 3 goto my friend choice

:my Gang
cls
color 3
echo.
echo  Nick say "Are you sure about this %name%? Don't you want to go to your family?"
echo  You say "I don't know! I don't know! Dude I don't even know what am I doing now..."
echo  Nick say "Fine, but I hope you choose the right way"
echo  You lost your car's key. So you walk to your Gang. Gang is preety far from you. 
echo  When you are going and at the half way to the Gang. You see a girl running out from the school
echo  And crying for help. Some zombies are following her.
echo  Nick say "We should help her..."
echo.
echo  Will you save the girl? Or ignore her?
echo  Well... you don't have any wapons
echo.
echo  1}Save the girl
echo  2}ignore her
set /p xo=
if %xo% == 1 goto Save the girl
if %xo% == 2 goto ignore her

:Save the girl
cls
color 3
echo.
echo  You stop and think for a while... 
echo  Nick say "Come on %name%! What are you waiting for? Let save her"
echo  You punch the zombie from behind and Nick hit zombie's head with baseball bat
echo  Nick say "Wohhhh! I kill a zombie". You say to Nick "Where the hell do you get that bat?"
echo  he smile and say"I'm a gangster dude! I should at least have a wapon. Wait %name% LOOK!"
echo  Nick point to the girl and You say to the girl "Hey! Are you alright?"
echo  But its too late. She already get bit of the zombie. you say "Oh no..."
echo  The girl is starting to turn into a zonbie
echo.
echo  What will you do?
echo  Will you kill her? Or Leave her behind?
echo  If you don't kill her fast, She would kill us
echo.
echo  1}Hurry! Kill her
echo  2}No, She will be alright
set /p zx=
if %zx% == 1 goto Kill her
if %zx% == 2 goto Leave her

:kill her
cls
color 3
echo.
echo  You tried to kill her but you can't kill her she is a cild. You never killed a child
echo  Nick say"What are you doing? %name%? She is going mad" The girl turned into a zombie and
echo  