#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Result::HAPI_Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_SUCCESS{0};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_FAILURE{1};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ALREADY_INITIALIZED{2};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NOT_INITIALIZED{3};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOADFILE{4};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_PARM_SET_FAILED{5};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_INVALID_ARGUMENT{6};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOAD_GEO{7};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_GENERATE_PRESET{8};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOAD_PRESET{9};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ASSET_DEF_ALREADY_LOADED{10};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NO_LICENSE_FOUND{110};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND{120};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE{130};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE{140};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE{150};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN{160};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ASSET_INVALID{200};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NODE_INVALID{210};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_USER_INTERRUPTED{300};
constexpr ::HoudiniEngineUnity::HAPI_Result  ::HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_INVALID_SESSION{400};
} // end anonymous namespace
