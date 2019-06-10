/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(11);

	web_submit_form("login.pl", 
		"Snapshot=t60.inf", 
		ITEMDATA, 
		"Name=username", "Value=user00", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=login.x", "Value=50", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		LAST);

	return 0;
}