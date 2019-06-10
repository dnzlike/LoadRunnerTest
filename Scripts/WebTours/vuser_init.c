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
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_link("sign up now", 
		"Text=sign up now", 
		"Snapshot=t47.inf", 
		LAST);

	lr_think_time(5);

	web_submit_form("login.pl", 
		"Snapshot=t48.inf", 
		ITEMDATA, 
		"Name=username", "Value=user1", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=passwordConfirm", "Value=123456", ENDITEM, 
		"Name=firstName", "Value=jojo", ENDITEM, 
		"Name=lastName", "Value=bean", ENDITEM, 
		"Name=address1", "Value=Dongchuan Load", ENDITEM, 
		"Name=address2", "Value=Shanghai", ENDITEM, 
		"Name=register.x", "Value=65", ENDITEM, 
		"Name=register.y", "Value=14", ENDITEM, 
		LAST);

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t49.inf", 
		LAST);

	lr_think_time(5);

	web_url("welcome.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
