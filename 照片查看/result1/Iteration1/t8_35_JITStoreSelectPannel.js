Ext.define('Jit.panel.JITStoreSelectPannel', {//Jit.biz.SelectionPanel
    extend: 'Ext.panel.Panel'
    , alias: 'widget.JITStoreSelectPannel'
    , config: {
        fieldLabel: null,
        selectBtn: null, //选择Btn
        selectText: null, //选择文本框
        selectRows: null,
        grid: null, //查询列表
        CheckMode: null,
        searchPannel: null, //查询面板
        CorrelationValue: null,
        Value: null,
        Text: null,
        selectRowData: null,
        showWindow: null,
        KeyName: null, //主健ID
        KeyText: null, //显示健值
        width: null,
        searchConditions: null,
        readOnly: null


    }
    , constructor: function (cfg) {
        if (cfg.width == null) cfg.width = 183;
        var defaultConfig = { margin: '0 10 10 10', width: cfg.width ,minHeight:22,layout: 'column',
        border: 0};
        var me = this;
        //显示业务控件数据
       //自己的配置项处理
        me.selectBtn = Ext.create('Jit.button.Button',
         {
             ///  text: "<font style='font-size:2px'>...</font>",
             //, componentCls: 'jitbutton'
                  margin: '0 0 0 0'
                , height: 22
                , width: 17
                , border: 0
                , imgName: 'select'
               , handler: function () {
                   if (cfg.readOnly == false || cfg.readOnly == null)
                       me.showWin(me)

               }
         });
        me.selectText = Ext.create('Jit.form.field.Text',
        {
            fieldLabel: cfg.fieldLabel,
            jitSize: 'small',
            height: 22,
            //  readOnly: true,
            margin: '0 0 0 0',
            width: cfg.width - 17
        });
        me.selectText.addListener('focus', function () {
            if (cfg.readOnly == false || cfg.readOnly == null)
                me.showWin(me)
        });
        defaultConfig.items = [me.selectText, me.selectBtn];
         //合并配置项
        cfg = Ext.applyIf(cfg, defaultConfig);
        //初始化配置项
        this.initConfig(cfg);
        //调用父类进行初始化
        this.callParent(arguments);
    }
    , jitSetValue: function (Value) {
        var me = this;
        me.Value = Value;
        me.Text = "";
        me.selectText.setValue("");
        Ext.Ajax.request({
            url: me.ajaxPath
             , params: { method: 'selectSetValue', pKeyValue: Value }
             , method: 'POST'

             , callback: function (options, success, response) {
                 var json = Ext.JSON.decode(response.responseText);
                 for (var i = 0; i < json.length; i++) {
                     if (i == 0) {
                         me.Text = json[i][me.KeyText];
                     }
                     else {
                         me.Text = me.Text + "," + json[i][me.KeyText]
                     }
                 }
                 me.selectText.setValue(me.Text);

             }

        });
    }
    , jitGetValue: function () {
        var me = this;
        return me.Value;
    }
    , showWin: function (me) {
        me.selectRowData = new Array();
        var CheckStore = null;
        me.selectRows = Ext.create('Ext.form.Label', { margin: '10 0 0 10' });
        me.selectRows.setText('选中0条记录');
        if (me.Value != null && me.Text != "") {
            Ext.define("CheckStoreModel", {
                extend: 'Ext.data.Model',
                fields: [{ name: 'Value', type: 'String' },
                           { name: 'Text', type: 'String'}],
                idProperty: 'Value'
            });
            CheckStore = new Ext.data.Store({ model: 'CheckStoreModel' });
            if (me.Value == null) me.Value = '';
            if (me.Text == null) me.Text = '';
            var ValueArray = me.Value.split(',');
            var TextArray = me.Text.split(',');
            var CheckArray = new Array();

            for (var i = 0; i < ValueArray.length; i++) {
                var o = new Object();
                o.Value = ValueArray[i].toLowerCase();
                o.Text = TextArray[i];
                CheckArray.push(o);
            }
            CheckStore.loadData(CheckArray);
            me.selectRows.setText('选中' + CheckStore.getCount() + '条记录');
        }

        var gridStoreList = Ext.create('Ext.JITStoreGrid.Panel',
                            {
                                jitSize: "big",
                                height: 300,
                                pageSize: 10,
                                width: 991,
                                pageIndex: 1,
                                CheckStore: CheckStore,
                                CorrelationValue: me.CorrelationValue,
                                KeyName: me.KeyName,
                                KeyText: me.KeyText,
                                KeyValue: me.Value,
                                CheckMode: me.CheckMode,
                                ajaxPath: me.ajaxPath,
                                searchConditions: me.searchConditions

                            });

        me.searchPannel = Ext.create('Jit.panel.JITStoreSearchPannel',
         {  
             layout: 'column',
             border: 0,
             id: me.id + 'Search',
             grid: gridStoreList,
             ajaxPath: me.ajaxPath//,
              //style: 'border-bottom:1px solid #000',
         });


        var btnDelete = Ext.create('Jit.button.Button', {
            imgName: 'clear',
            handler: function () { me.Clear(me, gridStoreList); }
        });
        var btnSave = Ext.create('Jit.button.Button', {
            isImgFirst: true,
            imgName: 'ok',
            handler: function () { me.Save(me, gridStoreList); }
        });
        var Pannelbo= Ext.create('Ext.panel.Panel', {
            layout: 'column',
            border:0,
            height:10,
            style: 'border-top:1px solid #C2C3C8;border-bottom:1px solid #C2C3C8;background:#ffffff',
            padding: '0 0 0 0'
            //bodyStyle: 'background:#ffffff'
        
        });
        var Pannel1 = Ext.create('Ext.panel.Panel', {
            items: [btnSave, btnDelete, me.selectRows],
            layout: 'column',
            border:0,
           // style: 'border-top:1px solid #000',
             padding: '10 0 0 0'
        
        });

        var Pannel3 = Ext.create('Ext.panel.Panel', {
            items: [me.searchPannel, Pannelbo,Pannel1, gridStoreList],
            autoScroll: true,
            bodyStyle: 'background:#F1F2F5',
            border: 1,
            width:1000,
            height: 460,
           padding:'5 0 0 5'
            //  margin: '10 10 10 0'
        });
        me.showWindow = Ext.create('Jit.window.Window', {
            jitSize: "large",
            closeAction: 'destroy',
            items: [Pannel3],
            title: me.fieldLabel,
            width: 1024,
            bodyStyle: 'background:#F1F2F5',
            padding:'5 5 5 5',
            height: 500
        });
        me.showWindow.show();
        gridStoreList.store.each(function (rec) {
            if (gridStoreList.CheckStore.getById(rec.data[me.KeyName]) != null) {
                gridStoreList.selModel.select(rec, true);
            }
        });
        gridStoreList.selModel.addListener('deselect', function (a, b, c) {

            if (gridStoreList.CheckStore.getCount() > 0)
                me.selectRows.setText('选中' + gridStoreList.CheckStore.getCount() + '条记录');
            for (var i = 0; i < me.selectRowData.length; i++) {
                if (me.selectRowData[i].data[me.KeyName] == b.data[me.KeyName]) {
                    me.selectRowData.splice(i, 1);
                }
            }


        });
        var cm = gridStoreList.getSelectionModel().getSelection();
        for (var i = 0; i < cm.length; i++) {
            me.selectRowData.push(cm[i]);
        }
        gridStoreList.selModel.addListener('select', function (a, b, c) {
            if (gridStoreList.CheckStore.getCount() > 0)
                me.selectRows.setText('选中' + gridStoreList.CheckStore.getCount() + '条记录');
            me.selectRowData.push(b);


        });
        me.searchPannel.btnSearch.addListener('click', function (a, b, c) {
            me.selectRows.setText('选中0条记录');
        });
    }
    , Clear: function (me, grid) {
        if (grid.CheckStore != null) {
            grid.CheckStore.removeAll();
            grid.pageIndex = 1;
            grid.fnPageSearch(grid);
            me.selectRows.setText('选中0条记录');
        }

    }
    , Save: function (me, grid) {
        var a = grid.CheckStore.data.items;
        var Text = '';
        var Value = '';
        for (var i = 0; i < a.length; i++) {
            if (i == 0) {
                Text = a[i].data.Text;
                Value = a[i].data.Value;
            }
            else {
                Text = Text + ',' + a[i].data.Text;
                Value = Value + ',' + a[i].data.Value;
            }
        }
        me.Value = Value;
        me.Text = Text;
        me.selectText.setValue(Text);
        me.showWindow.close();
    }
}
);


