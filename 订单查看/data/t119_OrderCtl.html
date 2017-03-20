Ext.onReady(function () {
    //加载需要的文件
    InitVE();
    InitStore();
    InitView();

    //页面加载
    JITPage.PageSize.setValue(15);
    JITPage.HandlerUrl.setValue("Handler/OrderHandler.ashx?mid=" + __mid);
    fnSearch();
});
//重置查询条件
function fnReset() {
    Ext.getCmp("txtOrderNo").setValue("");
    Ext.getCmp("cbOrdersType").setValue("");
    Ext.getCmp("selClientStructureID").setValue("");
    Ext.getCmp("cbOrdersStatus").setValue("");
    Ext.getCmp("cbWarehouseID").setValue("");
}
//添加订单
function fnCreate() {
    window.location = "OrderEdit.aspx?mid=" + __mid;
}
//查询订单
function fnSearch() {
    Ext.getCmp("pageBar").store.proxy.url = JITPage.HandlerUrl.getValue()
        + "&btncode=search";
    Ext.getCmp("pageBar").store.pageSize = JITPage.PageSize.getValue();
    Ext.getCmp("pageBar").store.proxy.extraParams = {
        form: Ext.JSON.encode(Ext.getCmp("searchPanel").getValues()),
        selClientStructureID: Ext.getCmp("selClientStructureID").jitGetValue()
    };
    //Ext.getStore("OrderStore").load();
    Ext.getCmp("pageBar").moveFirst();
}
//删除订单
function fnDelete() {
    var cm = Ext.getCmp("gridView").getSelectionModel().getSelection();
    if (cm[0].data.Status > 1 && cm[0].data.Status != 7) {
            Ext.Msg.show({
                title: '警告',
                msg: '状态不为"等待审批"和"审批失败"状态，不可删除此订单！',
                buttons: Ext.Msg.OK,
                icon: Ext.Msg.INFO
            });
            return false;
    }
    JITPage.deleteList({
        ids: JITPage.getSelected({ gridView: Ext.getCmp("gridView"), id: "OrdersID" }),
        url: JITPage.HandlerUrl.getValue() + "&btncode=delete",
        params: {
            ids: JITPage.getSelected({ gridView: Ext.getCmp("gridView"), id: "OrdersID" })
        },
        handler: function () {
            Ext.getStore("OrderStore").load();
        }
    });

}
//删除列数据控制方法
function fnColumnUpdate(value, p, r) {
    if (__getHidden("update")) {
        //无权限
        //return "<a href=\"javascript:;\">" + value + "</a>";
        return "<a style='color:blue;' href=\"OrderEdit.aspx?mid=" + __mid + "&id=" + r.data.OrdersID + "&showcode=View\">" + value + "</a>";
    }
    else {
        //有权限  测试暂时使用反置权限设置
        //return "<a style='color:blue;' href=\"OrderEdit.aspx?mid=" + __mid + "&id=" + r.data.OrdersID + "&showcode=View\">" + value + "</a>";
        return "<a style='color:blue;' href=\"OrderEdit.aspx?mid=" + __mid + "&id=" + r.data.OrdersID + "\">" + value + "</a>";
    }
}
//删除列数据控制方法
function fnColumnDelete(value, p, r) {

    if (__getHidden("delete")) {
        //无权限
        return "<a href=\"javascript:;\">" + value + "</a>";
    }
    else {
        //有权限
        return "<a style='color:blue;' href=\"javascript:;\" onclick=\"fnDelete()\">删除</a>";
    }
    //return "<a style='color:blue;' href=\"javascript:;\" onclick=\"fnDelete()\">删除</a>";
}