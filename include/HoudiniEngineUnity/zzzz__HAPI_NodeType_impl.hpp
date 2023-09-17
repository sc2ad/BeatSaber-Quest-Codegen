#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ANY{-1};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_NONE{0};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_OBJ{1};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SOP{2};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_CHOP{4};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ROP{8};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SHOP{16};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_COP{32};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_VOP{64};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_DOP{128};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_TOP{256};
} // end anonymous namespace
