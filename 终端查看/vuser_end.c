vuser_end()
{

	lr_think_time(5);

	web_url("default.aspx_3", 
		"URL=http://112.124.44.147/default.aspx?method=LogOut", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.aspx_3", 
		"URL=http://112.124.44.147/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx?method=LogOut", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}