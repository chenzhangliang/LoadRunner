Action()
{
		//char *ip=lr_get_vuser_ip();
		//lr_output_message("The ip address is %s",ip);

	//web_add_cookie("CCCJKLFAJUIORW=k1M+L9BW+dyABTNw1zwJzQ==; DOMAIN=112.124.44.147");

	//web_add_cookie("CWRWQFAJKLUOIL=/tDXJc/YRytlx7n/GGg6gg==; DOMAIN=112.124.44.147");


	web_reg_save_param("response",
		"LB=",
		"RB=",
		"Ord=1",
		"RelFrameId=1",
		"Search=Body",
		"IgnoreRedirections=Yes",
		LAST);

	
	lr_rendezvous("登录");

	lr_start_transaction("登录");


 	web_reg_find("Search=Body",
 	"Text=[{success:true,msg:\"/default.aspx?type=dpage\"}]",
 	LAST);


	web_submit_data("login.aspx_2",
		"Action=http://112.124.44.147/login.aspx?method=UserLogin&r=0.545917712508873",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://112.124.44.147/login.aspx",
		"Snapshot=t16.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=customer", "Value=clienttest", ENDITEM,
		"Name=username", "Value=021-580001", ENDITEM,
		"Name=userpwd", "Value=8888", ENDITEM,
		LAST);


	lr_output_message("参数值为 %s", lr_eval_string("{response}"));
//
// 	if(web_get_int_property(HTTP_INFO_RETURN_CODE)==200)
// 		lr_output_message("OK!!");
// 	else
// 		lr_error_message("Fail!!");
	
	lr_end_transaction("登录", LR_AUTO);



return 0;
}
