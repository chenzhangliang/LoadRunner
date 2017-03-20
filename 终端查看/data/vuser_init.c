/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 8859
   ------------------------------------------------------------------------------- */

vuser_init()
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

	web_url("validate.var.cn.js", 
		"URL=http://180.153.154.42/Framework/Javascript/other/validate/validate.var.cn.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("ad.png", 
		"URL=http://180.153.154.42/Framework/image/ad.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("btn-login.jpg", 
		"URL=http://180.153.154.42/Framework/image/btn-login.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
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

	web_url("common.css", 
		"URL=http://180.153.154.42/Framework/css/common.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("theme.css", 
		"URL=http://180.153.154.42/Framework/css/theme.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("validate.css", 
		"URL=http://180.153.154.42/Framework/Javascript/other/validate/css/validate.css", 
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

	web_url("username-bg1.jpg", 
		"URL=http://180.153.154.42/Framework/image/username-bg1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("username-bg.jpg", 
		"URL=http://180.153.154.42/Framework/image/username-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("password-bg.jpg", 
		"URL=http://180.153.154.42/Framework/image/password-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/login.aspx", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_submit_data("login.aspx_2", 
		"Action=http://180.153.154.42/login.aspx?method=UserLogin&r=0.6883807977455365", 
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

	web_url("style.css", 
		"URL=http://180.153.154.42/framework/css/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("webcontrol.css", 
		"URL=http://180.153.154.42/framework/css/webcontrol.css", 
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

	web_url("menu.js", 
		"URL=http://180.153.154.42/framework/javascript/Other/menu.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("ext-all-gray.css", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/Resources/css/ext-all-gray.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("jit-all.css", 
		"URL=http://180.153.154.42/Lib/Css/jit-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("reset.css", 
		"URL=http://180.153.154.42/framework/css/reset.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("CommonMethod.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Utility/CommonMethod.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("Button.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Button.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("jit-all-dev.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Jit/jit-all-dev.js", 
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

	web_url("Unit.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Unit.js", 
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

	web_url("JTIPagePannel.js", 
		"URL=http://180.153.154.42/Framework/Javascript/pub/JTIPagePannel.js", 
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

	web_url("ext-lang-zh_CN.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/locale/ext-lang-zh_CN.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("ext-all.js", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/ext-all.js", 
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

	web_concurrent_start(NULL);

	web_url("style.css_2", 
		"URL=http://map.jitmarketing.cn:8083/css/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("icon7.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon7.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("icon8.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon8.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("icon9.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon9.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("icon10.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon10.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("jquery-1.4.1.min.js", 
		"URL=http://map.jitmarketing.cn:8083/js/jquery-1.4.1.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("thickbox-compressed.js", 
		"URL=http://map.jitmarketing.cn:8083/js/thickbox-compressed.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("default.js", 
		"URL=http://map.jitmarketing.cn:8083/js/default.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("DataList.js", 
		"URL=http://map.jitmarketing.cn:8083/js/DataList.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("ext-all.js_2", 
		"URL=http://map.jitmarketing.cn:8083/js/EXTJS/ext-all.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("thickbox.css", 
		"URL=http://map.jitmarketing.cn:8083/css/thickbox.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("icon5.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon5.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("ext-all.css", 
		"URL=http://map.jitmarketing.cn:8083/js/EXTJS/resources/css/ext-all.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("icon3.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon3.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("icon6.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon6.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("icon4.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon4.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("CommonMethod.js_2", 
		"URL=http://map.jitmarketing.cn:8083/js/CommonMethod.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("ext-lang-zh_CN.js_2", 
		"URL=http://map.jitmarketing.cn:8083/js/EXTJS/locale/ext-lang-zh_CN.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("index.html", 
		"URL=http://map.jitmarketing.cn:8083/map/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("icon10.png", 
		"URL=http://map.jitmarketing.cn:8083/images/icon10.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("icon2.jpg", 
		"URL=http://map.jitmarketing.cn:8083/images/icon2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("loadingAnimation.gif", 
		"URL=http://map.jitmarketing.cn:8083/images/loadingAnimation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("MapInclude.js", 
		"URL=http://map.jitmarketing.cn:8083/js/MapInclude.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("swfobject.js", 
		"URL=http://map.jitmarketing.cn:8083/map/swfobject.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("get_flash_player.gif", 
		"URL=http://www.adobe.com/images/shared/download_buttons/get_flash_player.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t65.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("Hm_lvt_1c461506d0738315043e0ab9f52dde5a=1372991690; DOMAIN=map.jitmarketing.cn");

	lr_think_time(4);

	web_url("index.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("config.xml", 
		"URL=http://map.jitmarketing.cn:8083/map/config.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("w_link.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_link.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("WidgetContainerWidget.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/WidgetContainer/WidgetContainerWidget.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("w_close.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_close.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("i_pushpin.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/i_pushpin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t70.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("Hm_lvt_1c461506d0738315043e0ab9f52dde5a=1372991690; DOMAIN=report.jitmarketing.cn");

	web_url("crossdomain.xml", 
		"URL=http://report.jitmarketing.cn:7080/crossdomain.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("w_right.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_right.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("w_collapse_down.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_collapse_down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("MapServer", 
		"URL=http://report.jitmarketing.cn:7080/PBS/rest/services/GaoDeDiTuRoad/MapServer?f=json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("w_up.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_up.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("w_collapse.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_collapse.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("w_down.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("ProductWidget.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/FlexJS/ProductWidget.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t78.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("crossdomain.xml_2", 
		"URL=http://report.jitmarketing.cn:8080/crossdomain.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("MapServer_2", 
		"URL=http://report.jitmarketing.cn:8080/arcgis/rest/services/kpi_chinamap/MapServer?f=json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("w_left.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/w_left.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("NavigationWidget.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/NavigationJS/NavigationWidget.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t82.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("ProductWidget.xml", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/FlexJS/ProductWidget.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("export", 
		"URL=http://report.jitmarketing.cn:8080/arcgis/rest/services/kpi_chinamap/MapServer/export?bbox=5558036%2E8314934485%2C1356014%2E9252341609%2C17494443%2E168506548%2C7813415%2E074765839&f=image&bboxSR=3857&format=png8&imageSR=3857&size=1220%2C660&dpi=96&layers=show%3A1%2C2%2C3&transparent=true", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t84.inf", 
		LAST);

	web_custom_request("ServiceHandler.ashx", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=returnkpi&strKPI=1031&strType=1&idType=&ids=", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.html", 
		"Snapshot=t85.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("ServiceHandler.ashx_2", 
		"Action=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=savedata", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value="
		"%5B%7B%22KPILABEL%22%3A%2210%2C245%22%2C%22NAME%22%3A%22%u6D59%u6C5F%22%2C%22KPI%22%3A%2210245%22%7D%2C%7B%22KPILABEL%22%3A%222%2C500%22%2C%22NAME%22%3A%22%u4E91%u5357%22%2C%22KPI%22%3A%222500%22%7D%2C%7B%22KPILABEL%22%3A%221%2C375%22%2C%22NAME%22%3A%22%u65B0%u7586%22%2C%22KPI%22%3A%221375%22%7D%2C%7B%22KPILABEL%22%3A%22185%22%2C%22NAME%22%3A%22%u897F%u85CF%22%2C%22KPI%22%3A%22185%22%7D%2C%7B%22KPILABEL%22%3A%226%2C810%22%2C%22NAME%22%3A%22%u56DB%u5DDD%22%2C%22KPI%22%3A%226810%22%7D%2C%7B%22KPILAB"
		"EL%22%3A%223%2C196%22%2C%22NAME%22%3A%22%u9655%u897F%22%2C%22KPI%22%3A%223196%22%7D%2C%7B%22KPILABEL%22%3A%223%2C318%22%2C%22NAME%22%3A%22%u5C71%u897F%22%2C%22KPI%22%3A%223318%22%7D%2C%7B%22KPILABEL%22%3A%22351%22%2C%22NAME%22%3A%22%u9752%u6D77%22%2C%22KPI%22%3A%22351%22%7D%2C%7B%22KPILABEL%22%3A%22404%22%2C%22NAME%22%3A%22%u5B81%u590F%22%2C%22KPI%22%3A%22404%22%7D%2C%7B%22KPILABEL%22%3A%223%2C384%22%2C%22NAME%22%3A%22%u5185%u8499%u53E4%22%2C%22KPI%22%3A%223384%22%7D%2C%7B%22KPILABEL%22%3A%222%2C9"
		"56%22%2C%22NAME%22%3A%22%u6C5F%u897F%22%2C%22KPI%22%3A%222956%22%7D%2C%7B%22KPILABEL%22%3A%223%2C505%22%2C%22NAME%22%3A%22%u5409%u6797%22%2C%22KPI%22%3A%223505%22%7D%2C%7B%22KPILABEL%22%3A%225%2C840%22%2C%22NAME%22%3A%22%u6E56%u5357%22%2C%22KPI%22%3A%225840%22%7D%2C%7B%22KPILABEL%22%3A%227%2C014%22%2C%22NAME%22%3A%22%u6E56%u5317%22%2C%22KPI%22%3A%227014%22%7D%2C%7B%22KPILABEL%22%3A%224%2C039%22%2C%22NAME%22%3A%22%u9ED1%u9F99%u6C5F%22%2C%22KPI%22%3A%224039%22%7D%2C%7B%22KPILABEL%22%3A%228%2C004%22%"
		"2C%22NAME%22%3A%22%u6CB3%u5357%22%2C%22KPI%22%3A%228004%22%7D%2C%7B%22KPILABEL%22%3A%226%2C229%22%2C%22NAME%22%3A%22%u5317%u4EAC%22%2C%22KPI%22%3A%226229%22%7D%2C%7B%22KPILABEL%22%3A%222%2C903%22%2C%22NAME%22%3A%22%u5929%u6D25%22%2C%22KPI%22%3A%222903%22%7D%2C%7B%22KPILABEL%22%3A%226%2C822%22%2C%22NAME%22%3A%22%u6CB3%u5317%22%2C%22KPI%22%3A%226822%22%7D%2C%7B%22KPILABEL%22%3A%22639%22%2C%22NAME%22%3A%22%u6D77%u5357%22%2C%22KPI%22%3A%22639%22%7D%2C%7B%22KPILABEL%22%3A%221%2C483%22%2C%22NAME%22%3A%2"
		"2%u8D35%u5DDE%22%2C%22KPI%22%3A%221483%22%7D%2C%7B%22KPILABEL%22%3A%223%2C312%22%2C%22NAME%22%3A%22%u5E7F%u897F%22%2C%22KPI%22%3A%223312%22%7D%2C%7B%22KPILABEL%22%3A%221%2C395%22%2C%22NAME%22%3A%22%u7518%u8083%22%2C%22KPI%22%3A%221395%22%7D%2C%7B%22KPILABEL%22%3A%224%2C198%22%2C%22NAME%22%3A%22%u5B89%u5FBD%22%2C%22KPI%22%3A%224198%22%7D%2C%7B%22KPILABEL%22%3A%226%2C071%22%2C%22NAME%22%3A%22%u4E0A%u6D77%22%2C%22KPI%22%3A%226071%22%7D%2C%7B%22KPILABEL%22%3A%222%2C939%22%2C%22NAME%22%3A%22%u91CD%u5E8"
		"6%22%2C%22KPI%22%3A%222939%22%7D%2C%7B%22KPILABEL%22%3A%2213%2C607%22%2C%22NAME%22%3A%22%u6C5F%u82CF%22%2C%22KPI%22%3A%2213607%22%7D%2C%7B%22KPILABEL%22%3A%2214%2C620%22%2C%22NAME%22%3A%22%u5C71%u4E1C%22%2C%22KPI%22%3A%2214620%22%7D%2C%7B%22KPILABEL%22%3A%226%2C888%22%2C%22NAME%22%3A%22%u8FBD%u5B81%22%2C%22KPI%22%3A%226888%22%7D%2C%7B%22KPILABEL%22%3A%225%2C310%22%2C%22NAME%22%3A%22%u798F%u5EFA%22%2C%22KPI%22%3A%225310%22%7D%2C%7B%22KPILABEL%22%3A%2217%2C458%22%2C%22NAME%22%3A%22%u5E7F%u4E1C%22%2C"
		"%22KPI%22%3A%2217458%22%7D%5D", ENDITEM, 
		"Name=r", "Value=0.025655834357248552", ENDITEM, 
		LAST);

	web_submit_data("ServiceHandler.ashx_3", 
		"Action=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=savedata", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value="
		"%5B%7B%22KPILABEL%22%3A%2210%2C245%22%2C%22NAME%22%3A%22%u6D59%u6C5F%22%2C%22KPI%22%3A%2210245%22%7D%2C%7B%22KPILABEL%22%3A%222%2C500%22%2C%22NAME%22%3A%22%u4E91%u5357%22%2C%22KPI%22%3A%222500%22%7D%2C%7B%22KPILABEL%22%3A%221%2C375%22%2C%22NAME%22%3A%22%u65B0%u7586%22%2C%22KPI%22%3A%221375%22%7D%2C%7B%22KPILABEL%22%3A%22185%22%2C%22NAME%22%3A%22%u897F%u85CF%22%2C%22KPI%22%3A%22185%22%7D%2C%7B%22KPILABEL%22%3A%226%2C810%22%2C%22NAME%22%3A%22%u56DB%u5DDD%22%2C%22KPI%22%3A%226810%22%7D%2C%7B%22KPILAB"
		"EL%22%3A%223%2C196%22%2C%22NAME%22%3A%22%u9655%u897F%22%2C%22KPI%22%3A%223196%22%7D%2C%7B%22KPILABEL%22%3A%223%2C318%22%2C%22NAME%22%3A%22%u5C71%u897F%22%2C%22KPI%22%3A%223318%22%7D%2C%7B%22KPILABEL%22%3A%22351%22%2C%22NAME%22%3A%22%u9752%u6D77%22%2C%22KPI%22%3A%22351%22%7D%2C%7B%22KPILABEL%22%3A%22404%22%2C%22NAME%22%3A%22%u5B81%u590F%22%2C%22KPI%22%3A%22404%22%7D%2C%7B%22KPILABEL%22%3A%223%2C384%22%2C%22NAME%22%3A%22%u5185%u8499%u53E4%22%2C%22KPI%22%3A%223384%22%7D%2C%7B%22KPILABEL%22%3A%222%2C9"
		"56%22%2C%22NAME%22%3A%22%u6C5F%u897F%22%2C%22KPI%22%3A%222956%22%7D%2C%7B%22KPILABEL%22%3A%223%2C505%22%2C%22NAME%22%3A%22%u5409%u6797%22%2C%22KPI%22%3A%223505%22%7D%2C%7B%22KPILABEL%22%3A%225%2C840%22%2C%22NAME%22%3A%22%u6E56%u5357%22%2C%22KPI%22%3A%225840%22%7D%2C%7B%22KPILABEL%22%3A%227%2C014%22%2C%22NAME%22%3A%22%u6E56%u5317%22%2C%22KPI%22%3A%227014%22%7D%2C%7B%22KPILABEL%22%3A%224%2C039%22%2C%22NAME%22%3A%22%u9ED1%u9F99%u6C5F%22%2C%22KPI%22%3A%224039%22%7D%2C%7B%22KPILABEL%22%3A%228%2C004%22%"
		"2C%22NAME%22%3A%22%u6CB3%u5357%22%2C%22KPI%22%3A%228004%22%7D%2C%7B%22KPILABEL%22%3A%226%2C229%22%2C%22NAME%22%3A%22%u5317%u4EAC%22%2C%22KPI%22%3A%226229%22%7D%2C%7B%22KPILABEL%22%3A%222%2C903%22%2C%22NAME%22%3A%22%u5929%u6D25%22%2C%22KPI%22%3A%222903%22%7D%2C%7B%22KPILABEL%22%3A%226%2C822%22%2C%22NAME%22%3A%22%u6CB3%u5317%22%2C%22KPI%22%3A%226822%22%7D%2C%7B%22KPILABEL%22%3A%22639%22%2C%22NAME%22%3A%22%u6D77%u5357%22%2C%22KPI%22%3A%22639%22%7D%2C%7B%22KPILABEL%22%3A%221%2C483%22%2C%22NAME%22%3A%2"
		"2%u8D35%u5DDE%22%2C%22KPI%22%3A%221483%22%7D%2C%7B%22KPILABEL%22%3A%223%2C312%22%2C%22NAME%22%3A%22%u5E7F%u897F%22%2C%22KPI%22%3A%223312%22%7D%2C%7B%22KPILABEL%22%3A%221%2C395%22%2C%22NAME%22%3A%22%u7518%u8083%22%2C%22KPI%22%3A%221395%22%7D%2C%7B%22KPILABEL%22%3A%224%2C198%22%2C%22NAME%22%3A%22%u5B89%u5FBD%22%2C%22KPI%22%3A%224198%22%7D%2C%7B%22KPILABEL%22%3A%226%2C071%22%2C%22NAME%22%3A%22%u4E0A%u6D77%22%2C%22KPI%22%3A%226071%22%7D%2C%7B%22KPILABEL%22%3A%222%2C939%22%2C%22NAME%22%3A%22%u91CD%u5E8"
		"6%22%2C%22KPI%22%3A%222939%22%7D%2C%7B%22KPILABEL%22%3A%2213%2C607%22%2C%22NAME%22%3A%22%u6C5F%u82CF%22%2C%22KPI%22%3A%2213607%22%7D%2C%7B%22KPILABEL%22%3A%2214%2C620%22%2C%22NAME%22%3A%22%u5C71%u4E1C%22%2C%22KPI%22%3A%2214620%22%7D%2C%7B%22KPILABEL%22%3A%226%2C888%22%2C%22NAME%22%3A%22%u8FBD%u5B81%22%2C%22KPI%22%3A%226888%22%7D%2C%7B%22KPILABEL%22%3A%225%2C310%22%2C%22NAME%22%3A%22%u798F%u5EFA%22%2C%22KPI%22%3A%225310%22%7D%2C%7B%22KPILABEL%22%3A%2217%2C458%22%2C%22NAME%22%3A%22%u5E7F%u4E1C%22%2C"
		"%22KPI%22%3A%2217458%22%7D%5D", ENDITEM, 
		"Name=r", "Value=0.8378618629052088", ENDITEM, 
		LAST);

	web_submit_data("ServiceHandler.ashx_4", 
		"Action=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=savedata", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value="
		"%5B%7B%22KPILABEL%22%3A%2210%2C245%22%2C%22NAME%22%3A%22%u6D59%u6C5F%22%2C%22KPI%22%3A%2210245%22%7D%2C%7B%22KPILABEL%22%3A%222%2C500%22%2C%22NAME%22%3A%22%u4E91%u5357%22%2C%22KPI%22%3A%222500%22%7D%2C%7B%22KPILABEL%22%3A%221%2C375%22%2C%22NAME%22%3A%22%u65B0%u7586%22%2C%22KPI%22%3A%221375%22%7D%2C%7B%22KPILABEL%22%3A%22185%22%2C%22NAME%22%3A%22%u897F%u85CF%22%2C%22KPI%22%3A%22185%22%7D%2C%7B%22KPILABEL%22%3A%226%2C810%22%2C%22NAME%22%3A%22%u56DB%u5DDD%22%2C%22KPI%22%3A%226810%22%7D%2C%7B%22KPILAB"
		"EL%22%3A%223%2C196%22%2C%22NAME%22%3A%22%u9655%u897F%22%2C%22KPI%22%3A%223196%22%7D%2C%7B%22KPILABEL%22%3A%223%2C318%22%2C%22NAME%22%3A%22%u5C71%u897F%22%2C%22KPI%22%3A%223318%22%7D%2C%7B%22KPILABEL%22%3A%22351%22%2C%22NAME%22%3A%22%u9752%u6D77%22%2C%22KPI%22%3A%22351%22%7D%2C%7B%22KPILABEL%22%3A%22404%22%2C%22NAME%22%3A%22%u5B81%u590F%22%2C%22KPI%22%3A%22404%22%7D%2C%7B%22KPILABEL%22%3A%223%2C384%22%2C%22NAME%22%3A%22%u5185%u8499%u53E4%22%2C%22KPI%22%3A%223384%22%7D%2C%7B%22KPILABEL%22%3A%222%2C9"
		"56%22%2C%22NAME%22%3A%22%u6C5F%u897F%22%2C%22KPI%22%3A%222956%22%7D%2C%7B%22KPILABEL%22%3A%223%2C505%22%2C%22NAME%22%3A%22%u5409%u6797%22%2C%22KPI%22%3A%223505%22%7D%2C%7B%22KPILABEL%22%3A%225%2C840%22%2C%22NAME%22%3A%22%u6E56%u5357%22%2C%22KPI%22%3A%225840%22%7D%2C%7B%22KPILABEL%22%3A%227%2C014%22%2C%22NAME%22%3A%22%u6E56%u5317%22%2C%22KPI%22%3A%227014%22%7D%2C%7B%22KPILABEL%22%3A%224%2C039%22%2C%22NAME%22%3A%22%u9ED1%u9F99%u6C5F%22%2C%22KPI%22%3A%224039%22%7D%2C%7B%22KPILABEL%22%3A%228%2C004%22%"
		"2C%22NAME%22%3A%22%u6CB3%u5357%22%2C%22KPI%22%3A%228004%22%7D%2C%7B%22KPILABEL%22%3A%226%2C229%22%2C%22NAME%22%3A%22%u5317%u4EAC%22%2C%22KPI%22%3A%226229%22%7D%2C%7B%22KPILABEL%22%3A%222%2C903%22%2C%22NAME%22%3A%22%u5929%u6D25%22%2C%22KPI%22%3A%222903%22%7D%2C%7B%22KPILABEL%22%3A%226%2C822%22%2C%22NAME%22%3A%22%u6CB3%u5317%22%2C%22KPI%22%3A%226822%22%7D%2C%7B%22KPILABEL%22%3A%22639%22%2C%22NAME%22%3A%22%u6D77%u5357%22%2C%22KPI%22%3A%22639%22%7D%2C%7B%22KPILABEL%22%3A%221%2C483%22%2C%22NAME%22%3A%2"
		"2%u8D35%u5DDE%22%2C%22KPI%22%3A%221483%22%7D%2C%7B%22KPILABEL%22%3A%223%2C312%22%2C%22NAME%22%3A%22%u5E7F%u897F%22%2C%22KPI%22%3A%223312%22%7D%2C%7B%22KPILABEL%22%3A%221%2C395%22%2C%22NAME%22%3A%22%u7518%u8083%22%2C%22KPI%22%3A%221395%22%7D%2C%7B%22KPILABEL%22%3A%224%2C198%22%2C%22NAME%22%3A%22%u5B89%u5FBD%22%2C%22KPI%22%3A%224198%22%7D%2C%7B%22KPILABEL%22%3A%226%2C071%22%2C%22NAME%22%3A%22%u4E0A%u6D77%22%2C%22KPI%22%3A%226071%22%7D%2C%7B%22KPILABEL%22%3A%222%2C939%22%2C%22NAME%22%3A%22%u91CD%u5E8"
		"6%22%2C%22KPI%22%3A%222939%22%7D%2C%7B%22KPILABEL%22%3A%2213%2C607%22%2C%22NAME%22%3A%22%u6C5F%u82CF%22%2C%22KPI%22%3A%2213607%22%7D%2C%7B%22KPILABEL%22%3A%2214%2C620%22%2C%22NAME%22%3A%22%u5C71%u4E1C%22%2C%22KPI%22%3A%2214620%22%7D%2C%7B%22KPILABEL%22%3A%226%2C888%22%2C%22NAME%22%3A%22%u8FBD%u5B81%22%2C%22KPI%22%3A%226888%22%7D%2C%7B%22KPILABEL%22%3A%225%2C310%22%2C%22NAME%22%3A%22%u798F%u5EFA%22%2C%22KPI%22%3A%225310%22%7D%2C%7B%22KPILABEL%22%3A%2217%2C458%22%2C%22NAME%22%3A%22%u5E7F%u4E1C%22%2C"
		"%22KPI%22%3A%2217458%22%7D%5D", ENDITEM, 
		"Name=r", "Value=0.11030845482878665", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("LegendWidget.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/LegendJS/LegendWidget.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t89.inf", 
		LAST);

	web_custom_request("ServiceHandler.ashx_5", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentityfields&r=0.9881163821980992", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t90.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("ServiceHandler.ashx_6", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadgridcloumn&kpiid=1031&kpitype=1&r=0.4122076775942047", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t91.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("ServiceHandler.ashx_7", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentityfields&r=0.17533883939477218", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t92.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_url("ServiceHandler.ashx_8", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentitylist&_dc=1373280140064&limit=15&page=1&start=0", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t93.inf", 
		LAST);

	web_custom_request("ServiceHandler.ashx_9", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadgridcloumn&kpiid=1031&kpitype=1&r=0.8863220288676121", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t94.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_url("ServiceHandler.ashx_10", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentitylist&_dc=1373280140121&limit=15&page=1&start=0", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t95.inf", 
		LAST);

	web_custom_request("ServiceHandler.ashx_11", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentityfields&r=0.47940307908142465", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t96.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("ServiceHandler.ashx_12", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadgridcloumn&kpiid=1031&kpitype=1&r=0.6032995967139467", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t97.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_url("ServiceHandler.ashx_13", 
		"URL=http://map.jitmarketing.cn:8083/web/ServiceHandler.ashx?type=loadentitylist&_dc=1373280140173&limit=15&page=1&start=0", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://map.jitmarketing.cn:8083/default.aspx", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("exportMap.swf", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/ExportMapJS/exportMap.swf", 
		"Resource=1", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t99.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("NavigationWidget.xml", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/NavigationJS/NavigationWidget.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("LegendWidget.xml", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/LegendJS/LegendWidget.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("i_globe.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/jit/kpi/navigation/i_globe.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("i_zoomout.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/jit/kpi/navigation/i_zoomout.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("i_zoomin.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/jit/kpi/navigation/i_zoomin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("export_2", 
		"URL=http://report.jitmarketing.cn:8080/arcgis/rest/services/kpi_chinamap/MapServer/export?bbox=5638274%2E6105276365%2C1343520%2E1810705462%2C17574680%2E947540738%2C7800920%2E330602225&f=image&bboxSR=3857&format=png8&imageSR=3857&size=1220%2C660&dpi=96&layers=show%3A1%2C2%2C3&transparent=true", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t105.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("exportMap.xml", 
		"URL=http://map.jitmarketing.cn:8083/map/widgets/jit/product/ExportMapJS/exportMap.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("i_pan.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/jit/kpi/navigation/i_pan.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("i_exportmap.png", 
		"URL=http://map.jitmarketing.cn:8083/map/assets/images/jit/kpi/navigation/i_exportmap.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("title2.png", 
		"URL=http://180.153.154.42/framework/image/title2.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t109.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}
