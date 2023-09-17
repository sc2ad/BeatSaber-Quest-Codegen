#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__CollisionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionFlags::CollisionFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::CollisionFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::CollisionFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::None{0};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::Sides{1};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::Above{2};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::Below{4};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::CollidedSides{1};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::CollidedAbove{2};
constexpr ::UnityEngine::CollisionFlags  ::UnityEngine::CollisionFlags::CollidedBelow{4};
} // end anonymous namespace
