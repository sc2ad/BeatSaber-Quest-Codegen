#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__DisableBatchingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::DisableBatchingType::DisableBatchingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::DisableBatchingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::DisableBatchingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::DisableBatchingType  UnityEngine::DisableBatchingType::False{0};
constexpr UnityEngine::DisableBatchingType  UnityEngine::DisableBatchingType::True{1};
constexpr UnityEngine::DisableBatchingType  UnityEngine::DisableBatchingType::WhenLODFading{2};
