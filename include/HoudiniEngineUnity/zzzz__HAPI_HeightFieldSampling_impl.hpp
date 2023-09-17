#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_HeightFieldSampling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HeightFieldSampling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_HeightFieldSampling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_HeightFieldSampling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling  ::HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HEIGHTFIELD_SAMPLING_CENTER{0};
constexpr ::HoudiniEngineUnity::HAPI_HeightFieldSampling  ::HoudiniEngineUnity::HAPI_HeightFieldSampling::HAPI_HEIGHTFIELD_SAMPLING_CORNER{1};
} // end anonymous namespace
