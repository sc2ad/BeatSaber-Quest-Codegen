#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ErrorCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_ErrorCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_ErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode  ::HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND{1};
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode  ::HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ERRORCODE_PYTHON_NODE_ERROR{2};
} // end anonymous namespace
