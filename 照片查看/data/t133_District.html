//县
Ext.define("ContorlDistrictEntity", {
    extend: "Ext.data.Model",
    fields: [{
        name: "District",
        type: "string"
    }, {
        name: "DistrictID",
        type: "string"
    }, {
        name: "DistricteEn",
        type: "string"
    }]
});

//District县业务控件
Ext.define('Jit.biz.District', {
    alias: 'widget.jitbizdistrict',
    constructor: function (args) {
        var argsConfig = { emptyText: '--请选择--'};
        args = Ext.applyIf(args, argsConfig);
        var store = new Ext.data.Store({
            storeId: args.storeId || "districtStore",
            pageSize: args.pageSize || 15,
            model: "ContorlDistrictEntity",
            proxy: {
                type: 'ajax',
                reader: {
                    type: 'json'
                }
            },
            actionMethods: { read: 'get' },
            listeners: {
                load: function () {
                    if (args.isDefault != null && args.isDefault) {

                        if (Ext.getStore(args.storeId).data.items.length > 0 && Ext.getStore(args.storeId).data.items[0].CityID != 0) {
                            Ext.getStore(args.storeId).insert(0, {
                                "District": "--请选择--",
                                "DistrictID": "",
                                "DistrictEn": "--please select--"
                            });
                        }
                    }
                }
            }
        });
        Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetDistrictByCityID&CityID=0";
    
        defaultConfig = {
            store: Ext.getStore(args.storeId)
            , valueField: 'DistrictID'
            , displayField: 'District'
        };
        args = Ext.applyIf(args, defaultConfig);
        var instance = Ext.create('Jit.form.field.ComboBox', args);
        /*
        设置县的数据的方法
        无返回值
        */
        instance.jitSetValue = function (value) {
            if (value != null && value.toString() != "") {
                Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetDistrictByDistrictID&DistrictID=" + value;
                Ext.getStore(args.storeId).load({
                    callback: function () {
                        if (value != null && value.toString() != "") {
                            var values = value.toString().toLowerCase().split(',');
                            instance.setValue(values);
                        }
                    }
                });
            } else {              
                if (instance.CityID != null && instance.CityID != "") {
                    this.jitGetDistrictValue(instance.CityID);
                } else {
                    instance.setValue("");
                }
            }
        }
        instance.jitGetDistrictValue = function (value) {
            Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetDistrictByCityID&CityID=" + value;
            Ext.getStore(args.storeId).load({
                callback: function () {
                    instance.setValue("");
                }
            });
        }

        return instance;
    }
});