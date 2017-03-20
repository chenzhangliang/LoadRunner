function InitView() {

    //searchpanel area
    Ext.create('Ext.form.Panel', {
        id: 'searchPanel',
        items: [
        {
            xtype: "jittextfield",
            id: "txtOrderNo",
            name: "OrdersNo",
            fieldLabel: "订单编号",
            jitSize: 'small'
        },
        {
            xtype: "jitbizoptions",
            id: "cbOrdersType",
            fieldLabel: "订单类型",
            OptionName: 'OrdersType',
            name: "OrdersType",
            isDefault: true
        },
        {
            xtype: "jitbizclientstructure",
            fieldLabel: "部门",
            multiSelect: false,
            rootText: '全国',
            rootID: '-1',
            margin: '0 10 10 10',
            id: "selClientStructureID",
            name: "selClientStructureID"
            // , initSelectedItems: initValues     //初始选中的项,该参数为一个数组，数组中的每个元素都包含id和text属性
        },
        {
            xtype: "jitbizoptions",
            id: "cbOrdersStatus",
            fieldLabel: "订单状态",
            OptionName: 'OrdersStatus',
            name: "Status",
            isDefault: true
        }, {
            xtype: "jitbizwarehouse",
            fieldLabel: "仓库名称",
            id: "cbWarehouseID",
            name: "WarehouseID"
        }

],
        renderTo: 'span_panel',
        margin: '10 0 0 0',
        layout: 'column',
        border: 0
    });
	
	
	  Ext.create('Ext.form.Panel', {

            width: '100%',
            cls: 'panel_search',
            items: [{
                xtype: "jitbutton",
                //text: __getText("search"),
                hidden: __getHidden("search"),
                imgName: 'search',
                isImgFirst: true,
                handler: fnSearch
            },
            {
                xtype: "jitbutton",
                imgName: 'reset',
                isImgFirst: false,
                handler: fnReset
            }],
			 renderTo: 'span_panel2',
            margin: '0 0 10 0',
            layout: 'column',
            border: 0
        });
	
    //sds 
//    Ext.create('Jit.button.Button', {
//        xtype: "jitbutton",
//        //text: __getText("search"),
//        hidden: __getHidden("search"),
//        renderTo: "span_search",
//        imgName: 'search',
//        isImgFirst: true,
//        handler: fnSearch
//    });

//    //reset
//    Ext.create('Jit.button.Button', {
//        xtype: "jitbutton",
//        renderTo: "span_reset",
//        imgName: 'reset',
//        isImgFirst: true,
//        handler: fnReset
//    });
    //operator area
    Ext.create('Jit.button.Button', {
        //text: __getText("create"),
        imgName: 'create',
        isImgFirst: true,
        renderTo: "span_create",
        hidden: __getHidden("create"),
        handler: fnCreate
    });
    //list area

    Ext.create('Ext.grid.Panel', {
        store: Ext.getStore("OrderStore"),
        id: "gridView",
        columnLines: true,
        columns: [{
            text: '操作',
            width: 60,
            sortable: true,
            dataIndex: 'OrdersID',
            align: 'left',
            hidden: __getHidden("delete"),
            renderer: fnColumnDelete
        }, {
            text: '订单编号',
            xtype: 'jitcolumn',
            jitDataType: 'String',
            width: 140,
            sortable: true,
            dataIndex: 'OrdersNo',
            align: 'left',
            hidden: __getHidden("update"),
            renderer: fnColumnUpdate
        }, {
            text: '订单时间',
            xtype: 'jitcolumn',
            jitDataType: 'DateTime',
            width: 140,
            sortable: true,
            dataIndex: 'OrdersTime',
            align: 'left'
        }, {
            text: '订单类型',
            xtype: 'jitcolumn',
            jitDataType: 'String',
            width: 90,
            sortable: true,
            dataIndex: 'OrdersTypeName',
            align: 'left'
        }, {
            text: '所属仓库',
            xtype: 'jitcolumn',
            jitDataType: 'String',
            width: 90,
            sortable: true,
            dataIndex: 'WarehouseName',
            align: 'left'
        }, {
            text: '业务员',
            xtype: 'jitcolumn',
            jitDataType: 'String',
            width: 90,
            sortable: true,
            dataIndex: 'Name',
            align: 'left'
        }, {
            text: '客户名称',
            width: 110,
            sortable: true,
            dataIndex: 'StoreName',
            align: 'left'
        }, {
            text: '订单金额',
            xtype: 'jitcolumn',
            jitDataType: 'Decimal',
            width: 90,
            sortable: true,
            dataIndex: 'OrdersAmount',
            align: 'left'
        }, {
            text: '订单状态',
            width: 90,
            sortable: true,
            dataIndex: 'StatusName',
            align: 'left'
        }, {
            text: '处理人',
            width: 90,
            sortable: true,
            dataIndex: 'Operater',
            align: 'left'
        }, {
            text: '备货日期',
            xtype: 'jitcolumn',
            jitDataType: 'Date',
            width: 100,
            sortable: true,
            dataIndex: 'StockUpTime',
            align: 'left'
        }, {
            text: '配送日期',
            xtype: 'jitcolumn',
            jitDataType: 'Date',
            width: 100,
            sortable: true,
            dataIndex: 'DeliveryTime',
            align: 'left'
        }],
        height: 450,
        stripeRows: true,
        width: "100%",
//        selModel: Ext.create('Ext.selection.CheckboxModel', {
//            mode: 'MULTI'
//        }),
        bbar: new Ext.PagingToolbar({
            displayInfo: true,
            id: "pageBar",
            defaultType: 'button',
            store: Ext.getStore("OrderStore"),
            pageSize: JITPage.PageSize.getValue()
        }), listeners: {
            render: function (p) {
                p.setLoading({
                    msg: JITPage.Msg.GetData,
                    store: p.getStore()
                }).hide();
            }
        }
,
        renderTo: "DivGridView"
    });
}