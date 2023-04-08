#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleX
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleX.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f76aef429e937abd_47_new,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX","new",0xd67be164,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb18ceb27f94e49_28_boot,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX","boot",0xce0256ae,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX.boot","flixel/system/debug/interaction/tools/Transform.hx",28,0xb006466c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Transform{

void GraphicTransformCursorScaleX_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_f76aef429e937abd_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleX_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicTransformCursorScaleX_obj::__CreateEmpty() { return new GraphicTransformCursorScaleX_obj; }

void *GraphicTransformCursorScaleX_obj::_hx_vtable = 0;

Dynamic GraphicTransformCursorScaleX_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicTransformCursorScaleX_obj > _hx_result = new GraphicTransformCursorScaleX_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransformCursorScaleX_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x321a0f26;
	}
}

::String GraphicTransformCursorScaleX_obj::resourceName;


::hx::ObjectPtr< GraphicTransformCursorScaleX_obj > GraphicTransformCursorScaleX_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicTransformCursorScaleX_obj > __this = new GraphicTransformCursorScaleX_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicTransformCursorScaleX_obj > GraphicTransformCursorScaleX_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicTransformCursorScaleX_obj *__this = (GraphicTransformCursorScaleX_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransformCursorScaleX_obj), true, "flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX"));
	*(void **)__this = GraphicTransformCursorScaleX_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicTransformCursorScaleX_obj::GraphicTransformCursorScaleX_obj()
{
}

bool GraphicTransformCursorScaleX_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicTransformCursorScaleX_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicTransformCursorScaleX_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicTransformCursorScaleX_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicTransformCursorScaleX_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicTransformCursorScaleX_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicTransformCursorScaleX_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicTransformCursorScaleX_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicTransformCursorScaleX_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicTransformCursorScaleX_obj::__mClass;

static ::String GraphicTransformCursorScaleX_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicTransformCursorScaleX_obj::__register()
{
	GraphicTransformCursorScaleX_obj _hx_dummy;
	GraphicTransformCursorScaleX_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleX",72,9f,d6,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicTransformCursorScaleX_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicTransformCursorScaleX_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicTransformCursorScaleX_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicTransformCursorScaleX_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicTransformCursorScaleX_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicTransformCursorScaleX_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransformCursorScaleX_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransformCursorScaleX_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicTransformCursorScaleX_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7cb18ceb27f94e49_28_boot)
HXDLIN(  28)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleX",aa,65,6b,08);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Transform