Ext.define('Jit.window.JITStoreFrmWindow', {//Jit.biz.DynamicEditForm
    extend: 'Jit.window.Window'
, alias: 'widget.JITStoreFrmWindow'
, config: {
    showPannel: null,
    btnPannel: null,
    BtnCode: null,
    action: null,
    IsInit: null,
    ajaxPath: null,
    KeyValue: null,
    grid: null,
    id: null,
    clientDistributorID: null,
    tableName: null,
    btnSave: null
}
, constructor: function (cfg) {
    var defaultConfig = {};
    var me = this;
    //显示业务控件数据
    //自己的配置项处理
    var isclientDistributorID = false;
    if (cfg.clientDistributorID == null || cfg.clientDistributorID == 0)
        isclientDistributorID = false;
    else
        isclientDistributorID = true;
    if (cfg.BtnCode != 'delete')
        Ext.Ajax.request({
            url: cfg.ajaxPath
    , params: { btncode: cfg.BtnCode, method: 'EditView' }
    , method: 'POST'
    , async: false
    , callback: function (options, success, response) {
        //获取数据
        var json = Ext.JSON.decode(response.responseText);
        cfg.btnSave = Ext.create('Jit.button.Button', {
            //   text: "保存",
            // componentCls: 'save',
            isImgFirst: true,
            imgName: 'save',
            handler: function () { me.fnSubmit(me); }
        });
        if (cfg.BtnCode == "search") cfg.btnSave.setDisabled(true);
        var btnClose = Ext.create('Jit.button.Button', {
            // text: "关闭",
            //  componentCls: 'cancel',
            imgName: 'cancel',
            handler: function () { me.close(); }
        });
        var lshowitem = new Array();
        for (var i = 0; i < json.length; i++) {
            var strIsMustDo = '';
            if (json[i].IsMustDo == 1) strIsMustDo = '<font color=red>*</font>'
            switch (json[i].ControlType) {
                case 1: //文本
                    lshowitem.push(
                    {
                        xtype: 'jittextfield',
                        jitSize: 'big',
                        width: 300,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat,
                        MaxLength: json[i].MaxLength,
                        MinLength: json[i].MinLength
                    });
                    break;
                case 2: //整型文本
                    lshowitem.push(
                    {
                        xtype: 'jitnumberfield',
                        jitSize: 'big',
                        width: 300,
                        allowDecimals: false,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat,
                        MaxLength: json[i].MaxLength,
                        MinLength: json[i].MinLength
                    });
                    break;
                case 3: //数字文本
                    lshowitem.push(
                    {
                        xtype: 'jitnumberfield',
                        allowDecimals: true,
                        jitSize: 'big',
                        width: 300,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat,
                        MaxLength: json[i].MaxLength,
                        MinLength: json[i].MinLength
                    });
                    break;
                case 4: //日期
                    lshowitem.push(
                    {
                        xtype: 'jitdatefield',
                        jitSize: 'big',
                        width: 300,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 6: //自定义下拉
                    lshowitem.push(
                    {
                        xtype: 'jitbizoptions',
                        jitSize: 'big',
                        width: 300,
                        OptionName: json[i].CorrelationValue,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 7: //自定义层系
                    lshowitem.push(
                    {
                        xtype: 'jitbizhierarchyitem',
                        jitSize: 'big',
                        width: 300,
                        HierarchID: json[i].CorrelationValue,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 17: //部门
                    lshowitem.push(
                    {
                        xtype: 'jitbizclientstructure',
                        jitSize: 'big',
                        width: 300,
                        isSelectLeafOnly: false,
                        multiSelect: json[i].IsMoreRegard == 1 ? true : false,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 18: //品牌
                    lshowitem.push(
                    {
                        xtype: 'jitbizbrand',
                        jitSize: 'big',
                        width: 300,
                        isSelectLeafOnly: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 19: //品类
                    lshowitem.push(
                    {
                        xtype: 'jitbizcategory',
                        jitSize: 'big',
                        width: 300,
                        isSelectLeafOnly: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 20: //渠道
                    lshowitem.push(
                    {
                        xtype: 'jitbizchannel',
                        jitSize: 'big',
                        width: 300,
                        multiSelect: false,
                        isSelectLeafOnly: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 21: //连锁
                    lshowitem.push(
                    {
                        xtype: 'jitbizchain',
                        jitSize: 'big',
                        width: 300,
                        isSelectLeafOnly: true,
                        multiSelect: false,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 22: //职位
                    lshowitem.push(
                    {
                        xtype: 'jitbizclientposition',
                        jitSize: 'big',
                        isTree: false,
                        width: 300,
                        HierarchID: json[i].CorrelationValue,
                        isDefault: true,
                        fieldLabel: json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 23: //职位选人
                    lshowitem.push(
                            {
                                xtype: 'JITStoreSelectPannel',
                                id: cfg.id + '_' + json[i].ControlName,

                                width: 300,
                                fieldLabel: strIsMustDo + json[i].fieldLabel,
                                alertLabel: json[i].fieldLabel,
                                layout: 'column',
                                border: 0,
                                CheckMode: 'MULTI',
                                CorrelationValue: json[i].CorrelationValue,
                                KeyName: "ClientUserID", //主健ID
                                KeyText: "Name", //显示健值
                                ajaxPath: '/Module/BasicData/ClientUser/Handler/ClientUserPositionHandler.ashx',
                                ControlName: json[i].ControlName,
                                ControlType: json[i].ControlType,
                                CorrelationValue: json[i].CorrelationValue,
                                IsMustDo: json[i].IsMustDo,
                                IsRepeat: json[i].IsRepeat
                            });
                    break;
                case 25: //点选经销商
                    lshowitem.push(
                            {
                                xtype: 'JITStoreSelectPannel',
                                id: cfg.id + '_' + strIsMustDo + json[i].ControlName,
                                width: 300,
                                hidden: isclientDistributorID,
                                fieldLabel: strIsMustDo + json[i].fieldLabel,
                                alertLabel: json[i].fieldLabel,
                                layout: 'column',
                                border: 0,
                                CheckMode: 'SINGLE',
                                CorrelationValue: json[i].CorrelationValue,
                                KeyName: "DistributorID", //主健ID
                                KeyText: "Distributor", //显示健值
                                ajaxPath: '/Module/BasicData/Distributor/Handler/DistributorSelectHandler.ashx',
                                ControlName: json[i].ControlName,
                                ControlType: json[i].ControlType,
                                CorrelationValue: json[i].CorrelationValue,
                                IsMustDo: json[i].IsMustDo,
                                IsRepeat: json[i].IsRepeat
                            });
                    break;
                case 27: //省
                    lshowitem.push(
                    {
                        xtype: 'jitbizprovince',
                        jitSize: 'small',
                        width: 300,
                        HierarchID: json[i].CorrelationValue,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                        CityID: cfg.id + '_CityID',
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 28: //市
                    lshowitem.push(
                    { xtype: 'jitbizcity',
                        jitSize: 'small',
                        isDefault: true,
                        width: 300,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        alertLabel: json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                        DistrictID: cfg.id + '_' + 'DistrictID',
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    //设定市初始化状态
                    break;
                case 29: //县
                    lshowitem.push(
                    { xtype: 'jitbizdistrict',
                        jitSize: 'small',
                        width: 300,
                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                        alertLabel: json[i].fieldLabel,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 30: //地图
                    lshowitem.push(
                    { xtype: 'jitbizmapselect',
                        text: '选择',
                        width: 300,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat

                    });
                    break;
                case 31: //单位
                    lshowitem.push(
                    { xtype: 'jitbizunit',
                        jitSize: 'small',
                        width: 300,
                        alertLabel: json[i].fieldLabel,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 32: //仓库
                    lshowitem.push(
                    {
                        xtype: 'jitbizwarehouse',
                        multiSelect: true,
                        jitSize: 'small',
                        width: 300,
                        alertLabel: json[i].fieldLabel,
                        isDefault: true,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        id: cfg.id + '_' + json[i].ControlName,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
                case 33: //自动编号
                    lshowitem.push(
                    {
                        xtype: 'jitbizautonumber',
                        jitSize: 'small',
                        width: 300,
                        alertLabel: json[i].fieldLabel,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        id: cfg.id + '_' + json[i].ControlName,
                        numberType: json[i].CorrelationValue,  //编号类别 1为终端 2为经销商 3为产品 4为车辆 5为人员 6为仓库
                        isEdit: false, //是否可编辑     
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat,
                        MaxLength: json[i].MaxLength,
                        MinLength: json[i].MinLength
                    });
                    break;
                case 34: //照片
                    lshowitem.push(
                    {
                        xtype: 'jitbizphoto',
                        jitSize: 'small',
                        width: 300,
                        alertLabel: json[i].fieldLabel,
                        fieldLabel: strIsMustDo + json[i].fieldLabel,
                        id: cfg.id + '_' + json[i].ControlName,
                        photoType: json[i].CorrelationValue,  //照片类型 1为终端Store 2为经销商Dis 3为产品Sku 4为人员 User                
                        ControlName: json[i].ControlName,
                        ControlType: json[i].ControlType,
                        CorrelationValue: json[i].CorrelationValue,
                        IsMustDo: json[i].IsMustDo,
                        IsRepeat: json[i].IsRepeat
                    });
                    break;
            }
        }
        var showHeight = 34;
        var f = parseInt(json.length / 2) + json.length % 2;
        if (f > 15) f = 15;
        showHeight = showHeight * f;
        me.showPannel = Ext.create('Ext.panel.Panel', {
            items: lshowitem,
            bodyStyle: 'background:#F1F2F5;padding-top:10px;',
            layout: 'column',
            height: showHeight,
            border: 0,
            autoScroll: true
        });
        defaultConfig.height = showHeight + 80;
        defaultConfig.width = 680;
        defaultConfig.bodyStyle = 'background:#F1F2F5;';
        defaultConfig.items = [me.showPannel];
        defaultConfig.buttons = [cfg.btnSave, btnClose];
    }
        });
    //合并配置项
    cfg = Ext.applyIf(cfg, defaultConfig);
    //初始化配置项
    this.initConfig(cfg);
    //调用父类进行初始化
    this.callParent(arguments);
}
    //提交数据
, fnSubmit: function (me) {
    if (me.fnCheck(me) == false) {
        return false;
    }
    var l = new Array();
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var c = me.showPannel.items.items[i];
        if (c.jitGetValue(c) != null && c.jitGetValue(c) != "") {
            var o = Object();
            o.ControlType = c.ControlType;
            o.ControlValue = c.jitGetValue();
            o.ControlName = c.ControlName;
            o.CorrelationValue = c.CorrelationValue;
            l.push(o);
        }
    }
    var myMask = new Ext.LoadMask(Ext.getBody(), { msg: "系统处理中..." });
    myMask.show();
    Ext.Ajax.request({
        url: me.ajaxPath
    , params: { method: me.action, btncode: me.BtnCode, pEditValue: Ext.JSON.encode(l), pKeyValue: me.KeyValue }
    , method: 'POST'
    , callback: function (options, success, response) {
        myMask.hide();
        if (success == true) {
            Ext.Msg.alert("提示", '保存成功');
            me.close();
            if (me.action == "create")
                me.grid.pagebar.moveFirst();
            else
                me.grid.pagebar.doRefresh();
        }
        else {
            Ext.Msg.alert("提示", '保存失败');
        }
        // me.close();
    }
    });
}
    //删除数据
, fnDelete: function (me) {
    Ext.MessageBox.confirm('提示信息', '确认删除?', function deldbconfig(btn) {
        if (btn == 'yes')
            Ext.Ajax.request({
                url: me.ajaxPath
    , params: { btncode: me.BtnCode, method: "delete", pKeyValue: me.KeyValue }
    , method: 'POST'
    , callback: function (options, success, response) {
        if (success == true) {
            var jdata = Ext.JSON.decode(response.responseText);
            if (jdata.success) {
                Ext.Msg.show({
                    title: '提示',
                    msg: '删除成功',
                    buttons: Ext.Msg.OK,
                    icon: Ext.Msg.INFO
                });
                me.grid.pagebar.doRefresh();
            }
            else {
                Ext.Msg.show({
                    title: '错误',
                    msg: jdata.msg,
                    buttons: Ext.Msg.OK,
                    icon: Ext.Msg.ERROR
                });
            }
        }
        else {
            Ext.Msg.show({
                title: '错误',
                msg: "删除失败",
                buttons: Ext.Msg.OK,
                icon: Ext.Msg.ERROR
            });
        }
    }
            });
    });
}

    //导出数据-tiansheng.zhu
, fnExport: function (me) {
    //导出条件
    var sme = me.pnlSearch;
    var l = new Array();
    if (sme != null && sme.showPannel != null) {
        try {
            for (var i = 0; i < sme.showPannel.items.items.length; i++) {
                var c = sme.showPannel.items.items[i];
                if (c.jitGetValue() != null && c.jitGetValue() != "" && c.jitGetValue() != "0") {
                    var o = new Object();
                    o.ControlType = c.ControlType;
                    o.ControlValue = c.jitGetValue();
                    o.ControlName = c.ControlName;
                    o.CorrelationValue = c.CorrelationValue;
                    l.push(o);
                }
            }
        } catch (e) {
            l = new Array();
        }
    }
    var search = Ext.JSON.encode(l);
    //确定是否导出当前数据
    Ext.MessageBox.confirm('提示信息', '确定导出当前数据?', function deldbconfig(btn) {
        if (btn == 'yes') {
            //导出当前数据
            window.open(me.ajaxPath + "&btncode=" + me.BtnCode + "&method=export&pSearch=" + search);
        }
    });
}

    //显示添加页面
, fnShowAdd: function (me) {
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        o.jitSetValue("");
        //如果是自动生成编号
        if (me.showPannel.items.items[i].ControlType == 33) {
            o.jitRefreshValue(); //自动生成
        }
    }
    me.action = "create";
    me.btnSave.setDisabled(false);
    me.KeyValue = "";
    me.show();

}
    //显示修改页面
, fnShowUpdate: function (me) {
    if (me.action == "search") {
        me.btnSave.setDisabled(true);
    }
    else {
        me.btnSave.setDisabled(false);
    }
    var myMask = new Ext.LoadMask(Ext.getBody(), { msg: "系统处理中..." });
    myMask.show();
    Ext.Ajax.request({
        url: me.ajaxPath
    , params: { btncode: me.action, method: "EditViewData", pKeyValue: me.KeyValue }
    , method: 'POST'
    , callback: function (options, success, response) {
        var json = Ext.JSON.decode(response.responseText);
        for (var i = 0; i < json.length; i++) {
            var c = me.fnGetCol(me, json[i].ControlName);
            c.jitSetValue(json[i].ControlValue);
        }
        me.show();
        myMask.hide();
    }
    });
}
    //根据名称获取控件
, fnGetCol: function (me, pName) {
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        if (o.ControlName == pName) {
            return o;
        }
    }
}
, fnContainSpecial: function (value) {


}
, fnGetStrLen: function (str) {
    ///<summary>获得字符串实际长度，中文2，英文1</summary>
    ///<param name="str">要获得长度的字符串</param>
    var realLength = 0, len = str.length, charCode = -1;
    for (var i = 0; i < len; i++) {
        charCode = str.charCodeAt(i);
        if (charCode >= 0 && charCode <= 128) realLength += 1;
        else realLength += 2;
    }
    return realLength;
}
    //检查表单数据正确性
, fnCheck: function (me) {
    //检查必填字段
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        if (o.IsMustDo == 1)
            if (o.jitGetValue(me) == "") {
                Ext.Msg.alert("提示", o.alertLabel + '不能为空');
                return false;
            }
    }
    //检查数据长度或者数字大小限制
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        switch (o.ControlType) {
            case 1:
                if (o.jitGetValue() != "" && o.jitGetValue() != null) {
                    if (o.MinLength != null) {
                        if (len(o.jitGetValue()) < o.MinLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据长度小于最小值设定');
                            return false;
                        }
                    }
                    if (o.MaxLength != null) {
                        if (me.fnGetStrLen(o.jitGetValue()) > o.MaxLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据长度大于最大值设定');
                            return false;
                        }
                    }
                }
                break;
            case 2:
                if (o.jitGetValue() != "" && o.jitGetValue() != null) {
                    if (o.MinLength != null) {
                        if (parseInt(o.jitGetValue()) < o.MinLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据小于最小值设定');
                            return false;
                        }
                    }
                    if (o.MaxLength != null) {
                        if (parseInt(o.jitGetValue()) > o.MaxLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据小于最大值设定');
                            return false;
                        }
                    }
                }
                break;
            case 3:
                if (o.jitGetValue() != "" && o.jitGetValue() != null) {
                    if (o.MinLength != null) {
                        if (parseInt(o.jitGetValue()) < o.MinLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据小于最小值设定');
                            return false;
                        }
                    }
                    if (o.MaxLength != null) {
                        if (parseInt(o.jitGetValue()) > o.MaxLength) {
                            Ext.Msg.alert("提示", o.alertLabel + '数据小于最大值设定');
                            return false;
                        }
                    }
                }
                break;

        }

    }
    //数据类型判断
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        if (o.jitGetValue() != "" && o.jitGetValue() != null) {
            switch (o.ControlType) {
                case 2:
                    if (isNaN(o.jitGetValue())) {
                        Ext.Msg.alert("提示", o.alertLabel + '不是正确的数字类型');
                        return false;
                    }
                    break;
                case 3:
                    if (isNaN(o.jitGetValue())) {
                        Ext.Msg.alert("提示", o.alertLabel + '不是正确的数字类型');
                        return false;
                    }
                    break;

            }

        }

    }

    //文本特殊字符判断
    /*
    for (var i = 0; i < me.showPannel.items.items.length; i++) {


    }
    */



    // 检查单个重复
    var IsRepeatArray = new Array();
    var isCheck = true;
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        if (o.IsRepeat == 1) {
            var c = new Object();
            c.ControlType = o.ControlType;
            c.ControlValue = o.jitGetValue();
            c.ControlName = o.ControlName;
            c.CorrelationValue = o.CorrelationValue;
            IsRepeatArray = new Array();
            IsRepeatArray.push(c);
            var p = Ext.JSON.encode(IsRepeatArray);
            Ext.Ajax.request({
                url: me.ajaxPath
                            , params: { btncode: me.action, method: "CheckIsRepeat", pKeyValue: me.KeyValue, pSearch: Ext.JSON.encode(IsRepeatArray) }
                            , method: 'POST'
                            , async: false
                            , callback: function (options, success, response) {
                                var RowCount = parseInt(response.responseText);
                                if (RowCount > 0) {
                                    if (c.ControlType == 33) {
                                        Ext.Msg.alert("提示", o.alertLabel + '数据中有重复值,请重新提交');
                                        o.jitRefreshValue(); //重新生成
                                    } else {
                                        Ext.Msg.alert("提示", o.alertLabel + '数据中有重复值');
                                    }
                                    isCheck = false;
                                }
                            }
            });
        }
    }
    if (isCheck == false) return false;
    //检查多个重复
    IsRepeatArray = new Array(); //多个重复
    for (var i = 0; i < me.showPannel.items.items.length; i++) {
        var o = me.showPannel.items.items[i];
        if (o.IsRepeat == 2) {
            var c = new Object();
            c.ControlType = o.ControlType;
            c.ControlValue = o.jitGetValue(c);
            c.ControlName = o.ControlName;
            c.CorrelationValue = o.CorrelationValue;
            c.alertLabel = o.alertLabel;
            IsRepeatArray.push(c);
        }
    }
    if (IsRepeatArray.length > 0) {
        Ext.Ajax.request({
            url: me.ajaxPath
        , params: { btncode: me.action, method: "CheckIsRepeat", pKeyValue: me.KeyValue, pSearch: Ext.JSON.encode(IsRepeatArray) }
        , method: 'POST'
        , async: false
        , callback: function (options, success, response) {
            var RowCount = parseInt(response.responseText);
            if (RowCount > 0) {
                var msg = '';
                for (var i = 0; i < IsRepeatArray.length; i++) {
                    msg = msg + '[' + IsRepeatArray[i].alertLabel + ']';
                }
                Ext.Msg.alert("提示", msg + '数据有重复值');
                isCheck = false;
            }
        }
        });
    }
    if (isCheck == false) return false;
    return true;
}

});


