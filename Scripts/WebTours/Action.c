Action()
{

	lr_think_time(5);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=1", ENDITEM, 
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=06/11/2019", ENDITEM, 
		"Name=arrive", "Value=Portland", ENDITEM, 
		"Name=returnDate", "Value=06/12/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=First", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=63", ENDITEM, 
		"Name=findFlights.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t53.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=151;534;06/11/2019", ENDITEM, 
		"Name=returnFlight", "Value=512;567;06/12/2019", ENDITEM, 
		"Name=reserveFlights.x", "Value=28", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t54.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=jojo", ENDITEM, 
		"Name=lastName", "Value=bean", ENDITEM, 
		"Name=address1", "Value=Dongchuan Load", ENDITEM, 
		"Name=address2", "Value=Shanghai", ENDITEM, 
		"Name=pass1", "Value=jojo bean", ENDITEM, 
		"Name=creditCard", "Value=1234567890", ENDITEM, 
		"Name=expDate", "Value=1", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=36", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_form("itinerary.pl", 
		"Snapshot=t56.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=69", ENDITEM, 
		"Name=removeFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t57.inf", 
		LAST);
	
	return 0;
}
