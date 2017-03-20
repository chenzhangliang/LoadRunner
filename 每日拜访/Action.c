Action()
{

	lr_rendezvous("每日拜访查看");

	lr_start_transaction("每日拜访");

	lr_think_time(21);

	web_url("TaskData.aspx", 
		"URL=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("JITStoreGrid.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreGrid.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("ClientPosition.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientPosition.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("JITStoreSelectPannel.js", 
		"URL=http://112.124.44.147/Framework/javascript/pub/JITStoreSelectPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("City.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/City.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("JITStoreSearchPannel.js", 
		"URL=http://112.124.44.147/Framework/javascript/pub/JITStoreSearchPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("Province.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Province.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("options.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/options.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("ClientStructure.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientStructure.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("District.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/District.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("TaskDataVM.js", 
		"URL=http://112.124.44.147/Module/VisitingData/Data/Model/TaskDataVM.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("TaskDataVMStore.js", 
		"URL=http://112.124.44.147/Module/VisitingData/Data/Store/TaskDataVMStore.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("TaskDataView.js", 
		"URL=http://112.124.44.147/Module/VisitingData/Data/View/TaskDataView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("TaskDataCtl.js", 
		"URL=http://112.124.44.147/Module/VisitingData/Data/Controller/TaskDataCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t124.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("ClientPositionHandler.ashx", 
		"URL=http://112.124.44.147/Framework/Javascript/Biz/Handler/ClientPositionHandler.ashx?method=GetClientPositionByParentID&IsTree=false&ParentID=&IsClientDistributor=false&IsClientPosition=false&_dc=1373279637472&page=1&start=0&limit=15", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("trigger.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("exclamation.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/exclamation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("button.png", 
		"URL=http://112.124.44.147/Lib/Image/button/button.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("column-header-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/column-header-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("grid3-hd-btn.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/grid3-hd-btn.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("toolbar-default-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/toolbar/toolbar-default-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("page-first-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-first-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("text-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/text-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("date-trigger.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/date-trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("buttoncurrent.png", 
		"URL=http://112.124.44.147/Lib/Image/button/buttoncurrent.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("page-last-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("refresh.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/refresh.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("page-next-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("loading.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("spinner-small.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/spinner-small.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("page-prev-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-prev-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t141.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("TaskDataHandler.ashx", 
		"Action=http://112.124.44.147/Module/VisitingData/Data/Handler/TaskDataHandler.ashx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd&btncode=search&method=GetTaskDataList&_dc=1373279637975", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=ClientStructureID", "Value=", ENDITEM, 
		"Name=ClientPositionID", "Value=", ENDITEM, 
		"Name=ClientUserName", "Value=", ENDITEM, 
		"Name=ExecutionTime", "Value=2013-07-08", ENDITEM, 
		"Name=page", "Value=1", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=limit", "Value=15", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("page-last.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("page-next.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("column-header-over-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/column-header-over-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t145.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("每日拜访",LR_AUTO);

	return 0;
}
