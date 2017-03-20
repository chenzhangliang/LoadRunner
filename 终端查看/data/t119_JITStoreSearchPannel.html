Ext.define('Jit.panel.JITStoreSearchPannel', {//Jit.biz.DynamicSearchPanel
    extend: 'Ext.panel.Panel'
    , alias: 'widget.JITStoreSearchPannel'
    , config: {
        showPannel: null,
        btnPannel: null,
        grid: null,
        ajaxPath: '/Module/BasicData/Store/Handler/StoreHandler.ashx',
        btnSearch: null,
        id: null,
        BtnCode: null,
        btnMoreSearch: null

    }
    , constructor: function (cfg) {
        var defaultConfig = {};
        var me = this;
        //显示业务控件数据

        //自己的配置项处理

        Ext.Ajax.request({
            url: cfg.ajaxPath
                , params: { btncode: cfg.BtnCode, method: 'QueryView' }
                , method: 'POST'
                , async: false
                , callback: function (options, success, response) {
                    //获取数据
                    var json = Ext.JSON.decode(response.responseText);
                    me.btnSearch = Ext.create('Jit.button.Button', {
                        imgName: 'search',
                        margin: '0 0 0 0',
                        isImgFirst: true,
                        handler: function () { me.fnSearch(me); }
                    });
                    me.btnReset = Ext.create('Jit.button.Button', {
                        margin: '0 0 0 0',
                        imgName: 'reset',
                        handler: function () { me.fnReset(me); }
                    });

                    var btnhidden = true;
                    if (json.length > 4) btnhidden = false;
                    cfg.btnMoreSearch = Ext.create('Jit.button.Button', {
                        //text: "展开",
                        // componentCls: 'open',
                        imgName: 'open',
                        margin: '10 0 0 0',
                        show: true,
                        hidden: btnhidden,
                        handler: function () {

                            me.fnMoreSearchView(me, cfg.btnMoreSearch);
                        }
                    });


                    var hidden = false;
                    var lshowitem = new Array();
                    for (var i = 0; i < json.length; i++) {
                        if (i > 3) hidden = true;
                        switch (json[i].ControlType) {
                            case 1:
                                lshowitem.push(
                                {
                                    xtype: 'jittextfield',
                                    jitSize: 'small',
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 2: //整型文本
                                lshowitem.push(
                                {
                                    xtype: 'jitnumberfield',
                                    jitSize: 'small',
                                    allowDecimals: false,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden

                                });
                                break;
                            case 3: //数字文本
                                lshowitem.push(
                                {
                                    xtype: 'jitnumberfield',
                                    allowDecimals: true,
                                    jitSize: 'small',
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden

                                });
                                break;
                            case 4: //日期
                                lshowitem.push(
                                {
                                    xtype: 'jitdatefield',
                                    jitSize: 'small',
                                    fieldLabel: json[i].fieldLabel,

                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden

                                });
                                break;
                            case 18: //品牌
                                lshowitem.push(
                                {
                                    xtype: 'jitbizbrand',
                                    jitSize: 'small',
                                    isSelectLeafOnly: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 19: //品类
                                lshowitem.push(
                                {
                                    xtype: 'jitbizcategory',
                                    jitSize: 'small',
                                    isSelectLeafOnly: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 20: //渠道
                                lshowitem.push(
                                {
                                    xtype: 'jitbizchannel',
                                    isDefault: true,
                                    jitSize: 'small',
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 21: //连锁
                                lshowitem.push(
                                {
                                    xtype: 'jitbizchain',
                                    jitSize: 'small',
                                    isDefault: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 17: //部门
                                lshowitem.push(
                                {
                                    xtype: 'jitbizclientstructure',
                                    jitSize: 'small',
                                    isDefault: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 6: //自定义下拉
                                lshowitem.push(
                                {
                                    xtype: 'jitbizoptions',
                                    jitSize: 'small',
                                    OptionName: json[i].CorrelationValue,
                                    isDefault: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 7: //自定义层系
                                lshowitem.push(
                                {
                                    xtype: 'jitbizhierarchyitem',
                                    jitSize: 'small',
                                    HierarchID: json[i].CorrelationValue,
                                    isDefault: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 22: //职位
                                lshowitem.push(
                                {
                                    xtype: 'jitbizclientposition',
                                    jitSize: 'small',
                                    isDefault: true,
                                    fieldLabel: json[i].fieldLabel,
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    id: cfg.id + '_' + json[i].ControlName,
                                    hidden: hidden
                                });
                                break;
                            case 23: //职位选人
                                lshowitem.push(
                                        {
                                            xtype: 'JITStoreSelectPannel',
                                            id: cfg.id + '_' + json[i].ControlName,
                                            //width: 385,
                                            fieldLabel: json[i].fieldLabel,
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
                                            hidden: hidden
                                        });
                                break;
                            case 25: //点选经销商
                                lshowitem.push(
                                {
                                    xtype: 'JITStoreSelectPannel',
                                    id: cfg.id + '_' + json[i].ControlName,
                                    //width: 385,
                                    fieldLabel: json[i].fieldLabel,
                                    layout: 'column',
                                    border: 0,
                                    CheckMode: 'MULTI',
                                    CorrelationValue: json[i].CorrelationValue,
                                    KeyName: "DistributorID", //主健ID
                                    KeyText: "Distributor", //显示健值
                                    ajaxPath: '/Module/BasicData/Distributor/Handler/DistributorSelectHandler.ashx',
                                    ControlName: json[i].ControlName,
                                    ControlType: json[i].ControlType,
                                    CorrelationValue: json[i].CorrelationValue,
                                    hidden: hidden
                                });
                                break;
                            case 27: //省
                                lshowitem.push(
                                    {
                                        xtype: 'jitbizprovince',
                                        jitSize: 'small',
                                        HierarchID: json[i].CorrelationValue,
                                        isDefault: true,
                                        fieldLabel: json[i].fieldLabel,
                                        ControlName: json[i].ControlName,
                                        ControlType: json[i].ControlType,
                                        id: cfg.id + '_' + json[i].ControlName,
                                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                                        CityID: cfg.id + '_CityID',
                                        CorrelationValue: json[i].CorrelationValue,
                                        hidden: hidden
                                    });
                                break;
                            case 28: //市
                                lshowitem.push(
                                    {
                                        xtype: 'jitbizcity',
                                        jitSize: 'small',
                                        isDefault: true,
                                        fieldLabel: json[i].fieldLabel,
                                        ControlName: json[i].ControlName,
                                        ControlType: json[i].ControlType,
                                        id: cfg.id + '_' + json[i].ControlName,
                                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                                        DistrictID: cfg.id + '_' + 'DistrictID',
                                        CorrelationValue: json[i].CorrelationValue,
                                        hidden: hidden
                                    });
                                break;
                            case 29: //县
                                lshowitem.push(
                                    {
                                        xtype: 'jitbizdistrict',
                                        jitSize: 'small',
                                        storeId: cfg.id + '_' + json[i].ControlName + '_store',
                                        isDefault: true,
                                        fieldLabel: json[i].fieldLabel,
                                        ControlName: json[i].ControlName,
                                        ControlType: json[i].ControlType,
                                        id: cfg.id + '_' + json[i].ControlName,
                                        CorrelationValue: json[i].CorrelationValue,
                                        hidden: hidden

                                    });
                                break;
                            case 31: //单位
                                lshowitem.push(
                                    {
                                        xtype: 'jitbizunit',
                                        jitSize: 'small',
                                        isDefault: true,
                                        fieldLabel: json[i].fieldLabel,
                                        ControlName: json[i].ControlName,
                                        ControlType: json[i].ControlType,
                                        id: cfg.id + '_' + json[i].ControlName,
                                        CorrelationValue: json[i].CorrelationValue,
                                        hidden: hidden

                                    });
                                break;
                            case 32: //仓库
                                lshowitem.push(
                                    {
                                        xtype: 'jitbizwarehouse',
                                        multiSelect: true,
                                        jitSize: 'small',
                                        isDefault: true,
                                        fieldLabel: json[i].fieldLabel,
                                        ControlName: json[i].ControlName,
                                        ControlType: json[i].ControlType,
                                        id: cfg.id + '_' + json[i].ControlName,
                                        CorrelationValue: json[i].CorrelationValue,
                                        hidden: hidden

                                    });
                                break;
                        }


                    }

                    me.showPannel = Ext.create('Ext.panel.Panel', {
                        items: lshowitem,
                        margin: '10 0 0 0',
                        layout: 'column',
                        width: 815,
                        border: 0
                    });

                    me.btnPannel = Ext.create('Ext.panel.Panel', {
                        items: [me.btnSearch, {
                            width: 100,
                            cls: 'panel_searchLeft',
                            hidden: __getHidden("search"),
                            items: [me.btnReset],
                            margin: '0 0 0 0',
                            layout: 'column',
                            height: 25,
                            border: 0
                        }],
                        margin: '0 0 10 0',
                        cls: 'panel_searchLeft',
                        layout: 'column',
                        width: 815,
                        height: 25,
                        border: 0
                    });
                    defaultConfig.items = [me.showPannel, cfg.btnMoreSearch, me.btnPannel];

                }
        });

        //合并配置项
        cfg = Ext.applyIf(cfg, defaultConfig);
        //初始化配置项
        this.initConfig(cfg);
        //调用父类进行初始化
        this.callParent(arguments);
    }
    , fnSearch: function (me) {
        var l = new Array();
        for (var i = 0; i < me.showPannel.items.items.length; i++) {
            var c = me.showPannel.items.items[i];
            if (c.jitGetValue() != null && c.jitGetValue() != "" && c.jitGetValue() != "0") {
                var o = new Object();
                o.ControlType = c.ControlType;
                o.ControlValue = c.jitGetValue();
                o.ControlName = c.ControlName;
                o.CorrelationValue = c.CorrelationValue;
                l.push(o);
            }
        }
        me.grid.searchConditions = Ext.JSON.encode(l)
        if (me.grid.CheckStore != null) me.grid.CheckStore.removeAll();
        if (me.grid.selModel.jitClearValue != undefined) me.grid.selModel.jitClearValue();
        me.grid.pagebar.moveFirst();
    }
    , fnReset: function (me) {
        for (var i = 0; i < me.showPannel.items.items.length; i++) {
            var c = me.showPannel.items.items[i];

            c.jitSetValue("");

        }

    }
    , jitSetValue: function (json) {
        var me = this;
        me.btnMoreSearch.show = true;
        me.fnMoreSearchView(me, me.btnMoreSearch);
        for (var i = 0; i < json.length; i++) {
            var c = me.fnGetCol(me, json[i].ControlName);
            c.jitSetValue(json[i].ControlValue);
        }

    }
    , fnGetCol: function (me, pName) {
        for (var i = 0; i < me.showPannel.items.items.length; i++) {
            var o = me.showPannel.items.items[i];
            if (o.ControlName == pName) {
                return o;
            }
        }
    }
    , fnMoreSearchView: function (me, btn, b) {
        if (btn.show == true) {
            for (var i = 0; i < me.showPannel.items.items.length; i++) {
                var c = me.showPannel.items.items[i];
                c.setVisible(true);
            }
            btn.setText("&nbsp;&nbsp;&nbsp;&nbsp;收&nbsp;&nbsp;起");
            btn.removeCls("opentwo");
            btn.addCls("closetwo");
            btn.show = false;
        }
        else {
            for (var i = 4; i < me.showPannel.items.items.length; i++) {
                var c = me.showPannel.items.items[i];
                c.setVisible(false);
                c.jitSetValue("");

            }
            btn.setText("&nbsp;&nbsp;&nbsp;&nbsp;更&nbsp;&nbsp;多");
            btn.removeCls("closetwo");
            btn.addCls("opentwo");
            btn.show = true;

        }
    }
}
);


