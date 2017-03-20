Action()
{

	web_add_cookie("CCCJKLFAJUIORW=k1M+L9BW+dyABTNw1zwJzQ==; DOMAIN=180.153.154.42");

	web_add_cookie("CWRWQFAJKLUOIL=/tDXJc/YRytlx7n/GGg6gg==; DOMAIN=180.153.154.42");

	web_url("login.aspx", 
		"URL=http://180.153.154.42/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("basic.css", 
		"URL=http://180.153.154.42/Framework/css/basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("validate.css", 
		"URL=http://180.153.154.42/Framework/Javascript/other/validate/css/validate.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("btn-login.jpg", 
		"URL=http://180.153.154.42/Framework/image/btn-login.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("validate.var.cn.js", 
		"URL=http://180.153.154.42/Framework/Javascript/other/validate/validate.var.cn.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("validate.js", 
		"URL=http://180.153.154.42/Framework/Javascript/other/validate/validate.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("ad.png", 
		"URL=http://180.153.154.42/Framework/image/ad.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("common.css", 
		"URL=http://180.153.154.42/Framework/css/common.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("theme.css", 
		"URL=http://180.153.154.42/Framework/css/theme.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("jquery-1.4.2.min.js", 
		"URL=http://180.153.154.42/Framework/Javascript/other/jquery-1.4.2.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t10.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("index-main-bg.jpg", 
		"URL=http://180.153.154.42/Framework/image/index-main-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("login-bg.png", 
		"URL=http://180.153.154.42/Framework/image/login-bg.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("username-bg.jpg", 
		"URL=http://180.153.154.42/Framework/image/username-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("password-bg.jpg", 
		"URL=http://180.153.154.42/Framework/image/password-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("username-bg1.jpg", 
		"URL=http://180.153.154.42/Framework/image/username-bg1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(11);

	web_submit_data("login.aspx_2", 
		"Action=http://180.153.154.42/login.aspx?method=UserLogin&r=0.545917712508873", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=customer", "Value=clienttest", ENDITEM, 
		"Name=username", "Value=021-580001", ENDITEM, 
		"Name=userpwd", "Value=8888", ENDITEM, 
		LAST);

	web_url("default.aspx", 
		"URL=http://180.153.154.42/default.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("webcontrol.css", 
		"URL=http://180.153.154.42/framework/css/webcontrol.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("jit-all.css", 
		"URL=http://180.153.154.42/Lib/Css/jit-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("jquery-1.9.0.min.js", 
		"URL=http://180.153.154.42/framework/javascript/Other/jquery-1.9.0.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("reset.css", 
		"URL=http://180.153.154.42/framework/css/reset.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("style.css", 
		"URL=http://180.153.154.42/framework/css/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("menu.js", 
		"URL=http://180.153.154.42/framework/javascript/Other/menu.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("ext-all-gray.css", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/Resources/css/ext-all-gray.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("ext-lang-zh_CN.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/locale/ext-lang-zh_CN.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("ext-all.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/ext-all.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("Button.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Button.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("CommonValidate.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Utility/CommonValidate.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("JITPage.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Utility/JITPage.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("JTIPagePannel.js", 
		"URL=http://180.153.154.42/Framework/Javascript/pub/JTIPagePannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("Warehouse.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Warehouse.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("Unit.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Unit.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("logo.gif", 
		"URL=http://180.153.154.42/framework/image/logo.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("jit-all-dev.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Jit/jit-all-dev.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("CommonMethod.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Utility/CommonMethod.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("default.aspx_2", 
		"URL=http://map.jitmarketing.cn:8083/default.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("title.png", 
		"URL=http://180.153.154.42/framework/image/title.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("shadow1.gif", 
		"URL=http://180.153.154.42/framework/image/shadow1.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("header.gif", 
		"URL=http://180.153.154.42/framework/image/header.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t38.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("qqmail_alias=zhangliang.chen@jitmarketing.cn; DOMAIN=map.jitmarketing.cn");

	web_url("index.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t64.inf", 
		LAST);

	return 0;
}