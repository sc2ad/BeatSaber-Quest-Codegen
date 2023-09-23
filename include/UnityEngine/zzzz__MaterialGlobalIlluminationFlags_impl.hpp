#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MaterialGlobalIlluminationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::MaterialGlobalIlluminationFlags::MaterialGlobalIlluminationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::MaterialGlobalIlluminationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::MaterialGlobalIlluminationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::MaterialGlobalIlluminationFlags  UnityEngine::MaterialGlobalIlluminationFlags::None{0};
constexpr UnityEngine::MaterialGlobalIlluminationFlags  UnityEngine::MaterialGlobalIlluminationFlags::RealtimeEmissive{1};
constexpr UnityEngine::MaterialGlobalIlluminationFlags  UnityEngine::MaterialGlobalIlluminationFlags::BakedEmissive{2};
constexpr UnityEngine::MaterialGlobalIlluminationFlags  UnityEngine::MaterialGlobalIlluminationFlags::EmissiveIsBlack{4};
constexpr UnityEngine::MaterialGlobalIlluminationFlags  UnityEngine::MaterialGlobalIlluminationFlags::AnyEmissive{3};
