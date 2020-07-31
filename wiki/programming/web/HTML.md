
1-stucture
2-Text/Typography
3-lists
4-links
5-images
6-tables
7-forms
8-extra markup
9-video & audio
10-HTML5 layout




any tag attributes:
- disabled -> disabled="true"










<! DOCTYPE html>

<html dir="rtl">

<head>

<title>اسم الصفحة , وصفها , الكاتب</title>





                                               <!--meta-->

                              <meta    name="keywords"       content="------" />
                              <meta    name="author"         content="------" />
                              <meta    name="discription"    content="------" />
                              <meta    name="copyright"      content="------" />


                              <meta    name="viweport"       content="
                                    width=device-width, 
                                    initial-scale=1, #intial zoom value= 100%#
                                    maximum-scale=1, #maximum zoom value= 100%#
                                    user-scalable=no, #Disable zoom#
                                    "
                               />

 

                                              <!--Arabic-->

                                          <meta charset="utf-8" />




<base      src="------"      href="------"     target="------" />



                                         <!--css internal style-->

                                          <style type="text/css">
                                      ---------------------------------
                                      ---------------------------------
                                      ---------------------------------
                                                </style>



                                       <!--css external style-->

                              <link    rel="stylesheet"   href="------.css"   />


                                          

                                         <!--java internal script-->

                                          <script  src="-----.js">
                                     ................................
                                     ................................
                                     ................................
                                                </script>



</head>

<body>


                                                <!--heading-->

                                               <h1> ------ </h1>
                                               <h2> ------ </h2>
                                               <h3> ------ </h3>
                                               <h4> ------ </h4>
                                               <h5> ------ </h5>
                                               <h6> ------ </h6>
 <h1> the c programming language<small></small></h1>
.display-1
.display-2
.display-3
.display-4
popper.js | tether -> tooltip
1. desktop version & moblie version
2. desktop version & moblie app
3. mobile first vs desktop first

sm
md
lg
xl


col-md-3 col-lg-3 
bigger takes the smaller
<p>paregraph</p>

<br />

<blockquote></blockquote>

<pre></pre>

<mark></mark>

<meter value="----" min="---" max="---">------</meter>    =    <meter value="---">---</meter>


<abbr title="------"> ------ </abbr>

<multicol></multicol>


<progress></progress>

<hr size />


<fieldset>
<legend>------</legend>
------
</fieldset>


<details>
<summary> ------ </summary>
------
------
------
</details>

                                         

                                              <!--ordered list-->

                                                     <ol>
                                               <li> ------ </li>
                                               <li> ------ </li>
                                                     </ol>



                                              <!--unordered list-->

                                                     <ul>
                                                 <li> ------ </li>
                                                 <li> ------ </li>
                                                     </ul>



                                              <!--definition List-->

                                                      <dl>
                                                <dt>vocabulary</dt>
                                                <dd>definition</dd>
                                                      </dl>



                                                 <!--img , map-->

                               <img src="------" alt="------" title="------" draggable="true || false" usemap="------" />
                                                <map name="....">
                  <area shape="rect,cicle,poly" coords="------" href="------" title="------" target="------" />
                                                      </map>




                                                   <!--links-->

                                 <a href="------" title="------" target"------" > ------ </a>
                                 <a href="mailto:--------@----.com"> ------ </a>

                                                   <!--table-->

                                                      <table>

                                              <caption> ------ </caption>

                                                      <thead>
                                                        <tr>
                                                  <th> ------ </th>
                                                  <th> ------ </th>
                                                       </tr>
                                                      </thead>

                                                       <tbody>
                                                        <tr>
                                                   <td> ------ </td>
                                                   <td> ------ </td>
                                                        </tr>
                                                       </tbody>

                                                       <tfoot>
                                                         <tr>
                                                   <td> ------ </td>
                                                   <td> ------ </td>
                                                        </tr>
                                                       </tfoot>

                                                       </table>


                                                      <!--fram-->
                                 <ifram href="------" scrolling="auto,true.false"></ifram>



<!--form-->

<form action="------" method="------" target="------" enctype="" novalidate >
<input type="------" name="------" value="------"  placeholder="------"  maxleghth="------" max="------" min="------" step="------" pattern="" accept=".csv" required    autofocus disabled readonly novalidate multiple autocomplete="off" formaction="" formmethod="" formtarget="" formenctype="" formnovalidate />



accesskey="shortcut" for any element
tabindex="0"
Note
A negative tabindex value (typically -1) indicates that an element is focusable, but is not reachable by the keyboard. This method is generally used to bring focus to content programmatically (like when a div used for a pop-up window is activated), and is beyond the scope of these challenges.

<input    type="text" name="------" />
<input    type="password" name="------" />
<input    type="file" name="------"  multiple />
<input    type="checkbox" name="------" value="------" />
<input    type="radio" name="------" value="------" />
<input    type="color" name="------" />
<input    type="date" name="------" /> 
<input    type="datetime" name="------" />
<input    type="datetime-local" name="------" />
<input    type="email" name="------" />
<input    type="month" name="------" />
<input    type="number" name="------" min="1" max="5" />
<input    type="range" name="------" min="1" max="10" step="2" />
<input    type="search" name="------" />
<input    type="tel" name="------" />
<input    type="time" name="------" />
<input    type="url" name="------" />
<input    type="week" name="------" />
<input    type="submit" value="------" /> = <button type="submit">------</button>
<input    type="rest" value="------" /> = <button type="rest">------</button>

<input     list="------" />
<datalist  id="------">
<option    lable="------"    value="------" />
<option    lable="------"    value="------" />
<option    lable="------"    value="------" />
</datalist>


<select>
<optgroup label="Group 1">
<option>Option 1.1</option>
</optgroup> 
<optgroup label="Group 2">
<option>Option 2.1</option>
<option>Option 2.2</option>
</optgroup>
</select>


<textarea name="------" cols="------" rows="------" wrap=",off">  </textarea>


<!--video-->
<video src="------" hight="------" width="------" poster="------" loop="------"   controls     autoplay    muted />



<!--audio-->
<audio >
<video src="------" hight="------" width="------" poster="------" loop="------"   controls     autoplay    muted />
 
</body>


</html>

ampersand -> &
&lt; == ampersand + less + than + ;