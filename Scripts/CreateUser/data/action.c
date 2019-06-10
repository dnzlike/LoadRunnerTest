Action()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_link("sign up now", 
		"Text=sign up now", 
		"Snapshot=t2.inf", 
		LAST);

	lr_think_time(23);

	web_submit_form("login.pl", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=user1", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=passwordConfirm", "Value=123456", ENDITEM, 
		"Name=firstName", "Value=jojo", ENDITEM, 
		"Name=lastName", "Value=bean", ENDITEM, 
		"Name=address1", "Value=DongChuan Load", ENDITEM, 
		"Name=address2", "Value=Shanghai", ENDITEM, 
		"Name=register.x", "Value=28", ENDITEM, 
		"Name=register.y", "Value=11", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_form("login.pl_2", 
		"Ordinal=1", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=username", "Value=user2", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=passwordConfirm", "Value=123456", ENDITEM, 
		"Name=firstName", "Value=jojo", ENDITEM, 
		"Name=lastName", "Value=bean", ENDITEM, 
		"Name=address1", "Value=DongChuan Load", ENDITEM, 
		"Name=address2", "Value=Shanghai", ENDITEM, 
		"Name=register.x", "Value=52", ENDITEM, 
		"Name=register.y", "Value=17", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t5.inf", 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t6.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}