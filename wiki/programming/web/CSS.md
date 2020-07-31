syntax
background
text
font
links
lists
border
table
padding
margin
outline
dimension
display & visibilty
position
opacity
z-index
float
reset
overflow
cursor





New Properities
_______________
vendor prefixes
shadow (box | text)
transition
animation
flexbox
css grid
filters


box model
DHTML
- repeat(<repeat-num>, <word>)
- @media





inline         attribute style="color: #fff;"



internal                  <style>
                      p {color: #fff;}
                          </style>


external       <link rel="stylesheet" href="../CSS/style.css" />



@media all.print.screen

____________________________________________________________________________________________________________________________


/* background */


background-color      : hex=f00           ;
                      : rgb(12.55.24)     ;
                      : rgba(1.69.84.0.7) ;


background-image      : url("name.extention") ;


background-repeat     : no-repeat ;
                      : repeat-x  ;
                      : repeat-y  ;


background-attachment : scroll ;
                      : fixed  ;


background-position   : left top      ;
                      : left center   ;
                      : left bottom   ;
                      : center top    ;
                      : center center ;
                      : center bottom ;
                      : right top     ;
                      : right center  ;
                      : right bottom  ;
                      : 25% 75%       ;
                      : 50px 67px     ;


background          : color / image / repeat / attachment / position ; 

____________________________________________________________________________________________________________________________

/*text*/


color            :hex=f00           ;
                 :rgb(12.55.24)     ;
                 :rgba(1.69.84.0.7) ;


text-align       : left    ;
                 : right   ;
                 : center  ;
                 : justify ;


text-decoration  : none        ;
                 : underline   ;
                 : overline    ;
                 : line-throgh ;


text-transform   : none       ;
                 : capitalize ;
                 : uppercase  ;
                 : lowercase  ;


text-indent      : px , em , % ;



letter-spacing   : normal    ;
                 : +px , -px ;


word-spacing     : normal    ;
                 : +px , -px ;


line-height      : normal      ;
                 : px , em , % ;


vertical-align   : baseline  ;
                 : +px , -px ;
                 : sub       ;
                 : super     ;
                 : top       ;
                 : middel    ;
                 : bottom    ;


____________________________________________________________________________________________________________________________


/*font*/


font-family : tahoma                ;
            : "lucida sans unicode" ;
            : arial , impact        ;


font-size   : meduim = 16px = 100% ;
            : small                ;
            : large                ;
            : px , em , pt , %     ;


font-weight :normal = 400   ;
            :light = 300    ;
            :bold = 700     ;
            :semi bold =500 ;
            : lighter       ;
            : bolder        ;



font-style  : italic ;







font        : font-style / font-weight / font-size / line-height / font-family ;



____________________________________________________________________________________________________________________________


/*link*/


a:link
a:visited
a:hover
a:active


____________________________________________________________________________________________________________________________


/*list*/


list-style-type





list-style-position : outside ;
                    : inside  ;


list-style-image    : url("name.extention") ;


list-style : type  position  image   ;


____________________________________________________________________________________________________________________________
[ top , rghit , bottom , left ]

/*border*/


border-width :;


border-style :;


border-color : hex=f00           ;
             : rgb(12.55.24)     ;
             : rgba(1.69.84.0.7) ;


border       : width / style / color ;


____________________________________________________________________________________________________________________________


/*outline*/

outline : width / style / color ;

____________________________________________________________________________________________________________________________
[ + , -]                            [ top , rghit , bottom , left ]

/*margin*/


margin :;


____________________________________________________________________________________________________________________________
                                    [ top , rghit , bottom , left ]                                               [ + ]
/*padding*/


padding :;


____________________________________________________________________________________________________________________________





Width
Height
Min-Width
Min-Height
Max-Width
Max-Height



____________________________________________________________________________________________________________________________


/*display*/


display : none         ;
        : inline       ;
        : block        ;
        : inline-block ;



____________________________________________________________________________________________________________________________


/*visibility*/


visibility : visible ;
           : hidden  ;


____________________________________________________________________________________________________________________________
                                            [ top , rghit , bottom , left ]

/*Position*/


Position : static   ;
         : fixed    ;          top :  px,%       bottom        right         left
         : relative ;
         : absolute ;


____________________________________________________________________________________________________________________________


/*z-index*/


z-index : auto    ;
        : numbers ;

____________________________________________________________________________________________________________________________

/*float*/


float : none  ;
      : left  ;
      : right ;


____________________________________________________________________________________________________________________________


/*clear*/


clear : none  ;
      : left  ;
      : right ;
      : both  ;


____________________________________________________________________________________________________________________________


/*overflow*/


Overflow : visible ;
         : hidden  ;
         : scroll  ;
         : auto    ;




text-overflow :cilp   ;


ellipses




whitw-space : wrap;


no-wrap








____________________________________________________________________________________________________________________________

pseudo calsses

     div : frist-letter
     div : frist-line
     div : frist-child
     div : after
     div : before



























CSS3

opacity : 0    .5    1.0;

____________________________________________________________________________________________________________________________


improve your css code

1- sort properties of every selector alphapitically    => want plugin to do it.
2 - use tabs to make nesting among selectors

web layout technices :
1- floating
2- flexbox
3- grid system
4- css grid





filter:
grayscale()






Note
The following CSS approaches will NOT do the same thing:


display: none; or visibility: hidden; hides content for everyone, including screen reader users

Zero values for pixel sizes, such as width: 0px; height: 0px; removes that element from the flow of your document, meaning screen readers will ignore it


Note
Some online color picking tools include visual simulations of how colors appear for different types of colorblindness. These are great resources in addition to online contrast checking calculators.





css grid 
=========

- grid-column[-start][-end]
- grid-row[-start][-end]
- grid-area
- grid-gap
- justfiy-item: (streatch, start, center, end)
- justfiy-self: (streatch, start, center, end)
- align-item: (streatch, start, center, end)
- align-self: (streatch, start, center, end)


- display: grid;

- grid-template-columns: <percentage> 20% 60% 20% || <fr> 1fr 36fr 1fr;
- grid-template-rows: <percentage> 20% 60% 20% || <fr> 1fr 36fr 1fr;

- grid-gap: 10px;
- grid-column-gap: 10px;
- grid-row-gap: 10px;






Houdini
=======

low-level API-for-CSS, and more accurately, it's a series of APIs that
give developers access to the CSS object model, and it allows us to tell the browser how we
want it to read our CSS code.




------------------------------------------------------------------------------------------------------------------------------
http://screensiz.es/

psudo elements in css العناصر الزائفة 

: or ::

first-letter
first-line
before -> content: "";
after -> content: "";



web safe fonts

custum attribute

target = #, #footer, 


:root == <html>
:lang()   lang="en
p:not(.first)
:any(main, div, .container, #elm) h2



ميكروب
البكتيريا كائن حي

