vuser_end()
{

	lr_think_time(5);

	lr_start_transaction("logout");

	web_url("welcome.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours",
		LAST);

	lr_end_transaction("logout", LR_AUTO);

	return 0;
}