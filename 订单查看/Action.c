Action()
{

	lr_think_time(20);

	web_url("export_3", 
		"URL=http://report.jitmarketing.cn:8080/arcgis/rest/services/kpi_chinamap/MapServer/export?bbox=5638274%2E610527635%2C1343520%2E181070547%2C17584464%2E887161236%2C7800920%2E330602225&f=image&bboxSR=3857&format=png8&imageSR=3857&size=1221%2C660&dpi=96&layers=show%3A1%2C2%2C3&transparent=true", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://map.jitmarketing.cn:8083/map/index.swf", 
		"Snapshot=t110.inf", 
		LAST);

	lr_rendezvous("订单查看");

	lr_think_time(16);

	web_url("IE9CompatViewList.xml", 
		"URL=http://ie9cvlist.ie.microsoft.com/IE9CompatViewList.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(11);

	web_url("default.aspx_3", 
		"URL=http://112.124.44.147/default.aspx?r=0.8158822551354015", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("订单查看");

	lr_think_time(6);

	web_url("订单信息管理", 
		"URL=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Options.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Options.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("OrderVMStore.js", 
		"URL=http://112.124.44.147/Module/Order/Order/Store/OrderVMStore.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("OrderView.js", 
		"URL=http://112.124.44.147/Module/Order/Order/View/OrderView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("ClientStructure.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientStructure.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("OrderVM.js", 
		"URL=http://112.124.44.147/Module/Order/Order/Model/OrderVM.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("OrderCtl.js", 
		"URL=http://112.124.44.147/Module/Order/Order/Controller/OrderCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t119.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("WarehouseHandler.ashx", 
		"URL=http://112.124.44.147/Framework/Javascript/Biz/Handler/WarehouseHandler.ashx?method=GetWarehouseList&_dc=1373208050285&page=1&start=0&limit=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("buttoncurrent.png", 
		"URL=http://112.124.44.147/Lib/Image/button/buttoncurrent.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("exclamation.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/exclamation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("trigger.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("text-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/text-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("button.png", 
		"URL=http://112.124.44.147/Lib/Image/button/button.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("page-prev-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-prev-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("page-next-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("page-last-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("refresh.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/refresh.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("loading.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("spinner-small.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/spinner-small.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("column-header-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/column-header-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("toolbar-default-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/toolbar/toolbar-default-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("page-first-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-first-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("grid3-hd-btn.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/grid3-hd-btn.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t135.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("OrderHandler.ashx", 
		"Action=http://112.124.44.147/Module/Order/Order/Handler/OrderHandler.ashx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054&btncode=search&_dc=1373208050694", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=form", "Value={\"OrdersNo\":\"\",\"selClientStructureID\":\"\",\"WarehouseID\":null}", ENDITEM, 
		"Name=selClientStructureID", "Value=", ENDITEM, 
		"Name=page", "Value=1", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=limit", "Value=15", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("page-last.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("page-next.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/Order/Order/Order.aspx?mid=b164bcd6-256b-4f05-bde6-4fc41fa7a054", 
		"Snapshot=t138.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("订单查看",LR_AUTO);

	return 0;
}
