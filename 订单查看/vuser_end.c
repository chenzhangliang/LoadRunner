vuser_end()
{

	lr_think_time(21);

	web_url("default.aspx_4", 
		"URL=http://112.124.44.147/default.aspx?method=LogOut", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.aspx_3", 
		"URL=http://112.124.44.147/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx?method=LogOut", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}