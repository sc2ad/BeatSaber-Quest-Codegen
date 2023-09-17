#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/TextCore/LowLevel/zzzz__FontFeatureLookupFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::FontFeatureLookupFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::None{0};
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::IgnoreLigatures{4};
constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags::IgnoreSpacingAdjustments{256};
} // end anonymous namespace
