#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_CacheProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CacheProperty(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_CacheProperty::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_CacheProperty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_CURRENT{0};
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_HAS_MIN{1};
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_MIN{2};
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_HAS_MAX{3};
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_MAX{4};
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty  ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_CULL_LEVEL{5};
} // end anonymous namespace
