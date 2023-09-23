#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::BatchVisibility::BatchVisibility(int32_t offset, int32_t instancesCount, int32_t visibleCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->offset = offset;
this->instancesCount = instancesCount;
this->visibleCount = visibleCount;
}
constexpr void UnityEngine::Rendering::BatchVisibility::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::BatchVisibility::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchVisibility::__set_instancesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::BatchVisibility::__get_instancesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchVisibility::__set_visibleCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::BatchVisibility::__get_visibleCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
