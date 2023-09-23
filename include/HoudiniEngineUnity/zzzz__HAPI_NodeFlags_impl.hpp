#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NodeFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_NodeFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_NodeFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_ANY{-1};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NONE{0};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_DISPLAY{1};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_RENDER{2};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_TEMPLATED{4};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_LOCKED{8};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_EDITABLE{16};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_BYPASS{32};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NETWORK{64};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_GEOMETRY{128};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_CAMERA{256};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_LIGHT{512};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_SUBNET{1024};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_SOP_CURVE{2048};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_SOP_GUIDE{4096};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_TOP_NONSCHEDULER{8192};
constexpr HoudiniEngineUnity::HAPI_NodeFlags  HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NON_BYPASS{16384};
