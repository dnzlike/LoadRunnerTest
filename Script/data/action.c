Action()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_form("login.pl", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=15", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t25.inf", 
		LAST);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=1", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=06/11/2019", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=06/12/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=74", ENDITEM, 
		"Name=findFlights.y", "Value=2", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t27.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;06/11/2019", ENDITEM, 
		"Name=reserveFlights.x", "Value=74", ENDITEM, 
		"Name=reserveFlights.y", "Value=16", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t28.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=DongChuan", ENDITEM, 
		"Name=address2", "Value=Shanghai", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=1234567890", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=44", ENDITEM, 
		"Name=buyFlights.y", "Value=2", ENDITEM, 
		LAST);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t30.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=46", ENDITEM, 
		"Name=removeFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t31.inf", 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t32.inf", 
		LAST);

	return 0;
}