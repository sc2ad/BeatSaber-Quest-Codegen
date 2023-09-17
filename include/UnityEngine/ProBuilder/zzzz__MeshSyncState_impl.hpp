#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__MeshSyncState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshSyncState::MeshSyncState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::MeshSyncState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::MeshSyncState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::MeshSyncState  ::UnityEngine::ProBuilder::MeshSyncState::Null{0};
constexpr ::UnityEngine::ProBuilder::MeshSyncState  ::UnityEngine::ProBuilder::MeshSyncState::InstanceIDMismatch{1};
constexpr ::UnityEngine::ProBuilder::MeshSyncState  ::UnityEngine::ProBuilder::MeshSyncState::Lightmap{2};
constexpr ::UnityEngine::ProBuilder::MeshSyncState  ::UnityEngine::ProBuilder::MeshSyncState::InSync{3};
} // end anonymous namespace
