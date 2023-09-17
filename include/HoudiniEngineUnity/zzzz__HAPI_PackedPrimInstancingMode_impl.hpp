#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PackedPrimInstancingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PackedPrimInstancingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED{0};
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY{1};
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT{2};
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode::HAPI_PACKEDPRIM_INSTANCING_MODE_MAX{3};
} // end anonymous namespace
