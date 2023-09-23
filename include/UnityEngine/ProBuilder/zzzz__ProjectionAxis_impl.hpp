#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProjectionAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::ProjectionAxis::ProjectionAxis(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::ProjectionAxis::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::ProjectionAxis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::X{0};
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::Y{1};
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::Z{2};
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::XNegative{3};
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::YNegative{4};
constexpr UnityEngine::ProBuilder::ProjectionAxis  UnityEngine::ProBuilder::ProjectionAxis::ZNegative{5};
