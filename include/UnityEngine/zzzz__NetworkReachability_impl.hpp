#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::NetworkReachability::NetworkReachability(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::NetworkReachability::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::NetworkReachability::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::NotReachable{0};
constexpr UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::ReachableViaCarrierDataNetwork{1};
constexpr UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::ReachableViaLocalAreaNetwork{2};
