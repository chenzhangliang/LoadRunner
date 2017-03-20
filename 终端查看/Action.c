Action()
{

	lr_rendezvous("查看终端");

	lr_start_transaction("查看终端");

	lr_think_time(21);

	web_url("Store.aspx", 
		"URL=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ClientStructure.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientStructure.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("Chain.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Chain.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("JITStoreFrmWindow.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreFrmWindow.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("JITStoreSelectPannel.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreSelectPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("Channel.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Channel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("CheckHeader.css", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/ux/css/CheckHeader.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("JITStoreGrid.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreGrid.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("options.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/options.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("JITStoreSearchPannel.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreSearchPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("Province.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Province.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("City.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/City.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("District.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/District.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("ClientPosition.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientPosition.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("MapSelect.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/MapSelect.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("AutoNumber.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/AutoNumber.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("StoreDef.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/View/StoreDef.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("Photo.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Photo.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("StoreCtl.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/Controller/StoreCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("StoreView.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/View/StoreView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("HierarchyItem.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/HierarchyItem.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t130.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("CheckColumn.js", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/ux/CheckColumn.js?_dc=1373280162753", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t131.inf", 
		LAST);

	web_submit_data("StoreHandler.ashx", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=btncode", "Value=search", ENDITEM, 
		"Name=method", "Value=QueryView", ENDITEM, 
		LAST);

	web_submit_data("StoreHandler.ashx_2", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=btncode", "Value=search", ENDITEM, 
		"Name=method", "Value=InitGridData", ENDITEM, 
		"Name=pPageIndex", "Value=0", ENDITEM, 
		"Name=pPageSize", "Value=15", ENDITEM, 
		"Name=pKeyValue", "Value=", ENDITEM, 
		"Name=CorrelationValue", "Value=", ENDITEM, 
		LAST);

	web_submit_data("StoreHandler.ashx_3", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=btncode", "Value=search", ENDITEM, 
		"Name=method", "Value=PageGridData", ENDITEM, 
		"Name=pSearch", "Value=", ENDITEM, 
		"Name=pPageIndex", "Value=0", ENDITEM, 
		"Name=pPageSize", "Value=15", ENDITEM, 
		"Name=pKeyValue", "Value=", ENDITEM, 
		"Name=CorrelationValue", "Value=", ENDITEM, 
		LAST);

	web_submit_data("StoreHandler.ashx_4", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=btncode", "Value=search", ENDITEM, 
		"Name=method", "Value=EditView", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("page-first-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-first-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("page-last-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("button.png", 
		"URL=http://112.124.44.147/Lib/Image/button/button.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("text-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/text-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("trigger.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("opensmall.png", 
		"URL=http://112.124.44.147/Lib/Image/button/opensmall.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("exclamation.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/exclamation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("toolbar-default-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/toolbar/toolbar-default-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("page-prev-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-prev-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("page-next-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("loading.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("refresh.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/refresh.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("column-header-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/column-header-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("buttoncurrent.png", 
		"URL=http://112.124.44.147/Lib/Image/button/buttoncurrent.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("spinner-small.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/spinner-small.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("icon_noworld.jpg", 
		"URL=http://112.124.44.147/Lib/Image/icon_noworld.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("page-last.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("page-next.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t153.inf", 
		LAST);

	web_url("select.png", 
		"URL=http://112.124.44.147/Lib/Image/button/select.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t154.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("查看终端",LR_AUTO);

	return 0;
}
