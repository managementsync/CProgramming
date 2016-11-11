<?php
/*
 * Plugin Name: KodeTjek
 * Version: 1.0.0
 * Description: KodeTjek
 * Author: Alexander Wetendorff + Palle Mortensen + Aziz Hashimi
 * Author URI: http://td-k.dk
 * Plugin URI: https://td-k.dk
 * Text Domain: KodeTjek
 * Domain Path: /languages
 * License: GPLv3
 * License URI: http://www.gnu.org/licenses/gpl-3.0
*/

function errorstyle(){
?>
<style>

body[data-header-resize="0"] .container-wrap, body[data-header-resize="0"] .project-title
{
padding-top:0px !important;
    padding-bottom: 0px !important;
}

.main-content .row > strong
{
    position: absolute;
    top: 10px;
    z-index: 99;
    color: #fff;
}

select
{
width:70px !important;
}

</style>
<?php
}

function CSVSEARCHSUCCES(){
	return $_SESSION["Address"]. ' '. $_SESSION["Number"];
}

function CSVSEARCHaddress(){
	return $_SESSION["Address"]. ' '. $_SESSION["Number"];
}

function CSVSEARCHcity(){
	return $_SESSION["City"];
}

function CSVSEARCH3(){
session_start();


return $_SESSION["OkAddress"];


}

function CSVSEARCH2(){
session_start();
$stopiffound = "0";
$Matches = []; 
?>


<style>


[class^="icon-normal fa"], [class*=" icon-"]
{
    font-size: 27px !important;
top: -4px;
}

::-webkit-input-placeholder {
   color: white;
}

:-moz-placeholder { /* Firefox 18- */
   color: white;  
}

::-moz-placeholder {  /* Firefox 19+ */
   color: white;  
}

:-ms-input-placeholder {  
   color: white;  
}

#address
{
border-width:0px;
border:none;
}

#tjek:hover
{
    outline:none !important;
    border-radius: 50% !important;
    border: 1px solid white !important;
    cursor:pointer !important;
    overflow: hidden !important;
}

#tjek
{
width: 57px;
    height: 57px;
    background-size: cover;
    background-color: Transparent;
    background-repeat:no-repeat;
    float: right;
    border: 1px solid white;
    cursor:pointer;
    overflow: hidden;
    outline:none;
border-radius: 50% !important;
}

#main
{
 border-bottom-left-radius: 0.5em 0.5em;
 border-bottom-right-radius: 0.5em 0.5em;
 border-top-left-radius: 0.5em 0.5em;
 border-top-right-radius: 0.5em 0.5em;
width:80%;
min-height:50px;
background-color: #ef7f22!important;
margin-left:auto;
margin-right:auto;
position:relative;
}

#first
{
border: 0px solid #fff !important;
 vertical-align:top; 
}

#second
{
border: 0px solid white !important;
 vertical-align:top;
 width:60px;
}

#table2
{
    margin-bottom: 0px;
 background-color: transparent !important;
 border-bottom-left-radius: 0.5em 0.5em;
 border-bottom-right-radius: 0.5em 0.5em;
 border-top-left-radius: 0.5em 0.5em;
 border-top-right-radius: 0.5em 0.5em;
   border: 0px solid white !important;

 width:100%;
}


.ui-widget-content
{
 border:none !important;
 background-color: transparent !important;
width: 100% !important;
 }

.ui-autocomplete
{
    color: white !important;
 position:relative !important;
 
}

#rowtable
{
    background-color: transparent !important;
}



</style>


<form method="post">
<div id="TT-Form">

<div id="main">
<table id="table2" cellspacing="0" cellpadding="0">
<tr id="rowtable">
<td class="ui-front" name="first" id="first"><input id="adresse" name="adresse" type="text" placeholder="Skriv din adresse her" id="adresse" style="font-family: Titillium Web; width: 100%; cursor: pointer;"></td>
<td id="second"><button type="submit" value="" id="tjek" name="tjek"><i class="icon-normal fa-search"></i></button></td>
<tr>
</table>
</div>
</div>
</form>



<link rel="stylesheet" href="jquery-ui.css">
  <script src="https://superfiber.dk/jquery.js"></script>
  <script src="https://superfiber.dk/jquery-ui.js"></script>
  <script src="https://superfiber.dk/dawa-autocomplete.js"></script>
  <script src="https://superfiber.dk/script.js"></script>

  <script src="jquery.js"></script>
  
  
  
<?php

#We call wordpress's own mySQL database 
global $wpdb;

#Pulling the information of the user should see if the kvhx collum matches the raa_fiber_punkt collum which must be equal to hvi27 or hvi33 and grave_laengde_m <= 30
$user_query = $wpdb->get_results("SELECT Gadenavn, Husnummer, Husbogstav, Etage, Side, Postnummer, Postdridrikt, Initial_installation_code 
								  FROM Fibernet_table 
								  WHERE raa_fiber_punkt = (hvi27 OR raa_fiber_punkt = hvi33) AND grave_laengde_m <= 30");

#Pulling the information for the chargify/icarus backend
$chargify_query = $wpdb->get_results("SELECT Kommunnr, Vejkode, Adgangsadresse_bbrid, Raa_fiber_punkt, Grave_laengde, kapstik 
									  FROM Fibernet_table 
									  WHERE raa_fiber_punkt = (hvi27 OR raa_fiber_punkt = hvi33) AND grave_laengde_m <= 30");

#This is where the database script will be
CREATE TABLE Fibernet_tabel(
id INT(10) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
kvhx INT(20) UNSIGNED NOT NULL,
gadenavn VARCHAR(100) NOT NULL,
husnummer INT(10) NOT NULL,
husbogstav VARCHAR(100) NOT NULL,

);

#The database needs to be normalized since there are 17 collums. Maybe split into 

  
  
  
?>
  
  
  
  
  
