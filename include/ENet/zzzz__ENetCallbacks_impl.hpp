#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "ENet/zzzz__NoMemoryCallback_def.hpp"
#include "ENet/zzzz__FreeCallback_def.hpp"
// Ctor Parameters [CppParam { name: "malloc", ty: "::ENet::AllocCallback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "free", ty: "::ENet::FreeCallback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "noMemory", ty: "::ENet::NoMemoryCallback", modifiers: "", def_value: Some("csnull") }]
constexpr ::ENet::ENetCallbacks::ENetCallbacks(::ENet::AllocCallback malloc, ::ENet::FreeCallback free, ::ENet::NoMemoryCallback noMemory) noexcept : ::bs_hook::ValueTypeWrapper() {this->malloc = malloc;
this->free = free;
this->noMemory = noMemory;
}
constexpr void ::ENet::ENetCallbacks::__set_malloc(::ENet::AllocCallback value)  {
::cordl_internals::setInstanceField<::ENet::AllocCallback, 0x0>(this->__instance, std::forward<::ENet::AllocCallback>(value));
}
constexpr ::ENet::AllocCallback ::ENet::ENetCallbacks::__get_malloc() const {
return ::cordl_internals::getInstanceField<::ENet::AllocCallback, 0x0>(this->__instance);
}
constexpr void ::ENet::ENetCallbacks::__set_free(::ENet::FreeCallback value)  {
::cordl_internals::setInstanceField<::ENet::FreeCallback, 0x8>(this->__instance, std::forward<::ENet::FreeCallback>(value));
}
constexpr ::ENet::FreeCallback ::ENet::ENetCallbacks::__get_free() const {
return ::cordl_internals::getInstanceField<::ENet::FreeCallback, 0x8>(this->__instance);
}
constexpr void ::ENet::ENetCallbacks::__set_noMemory(::ENet::NoMemoryCallback value)  {
::cordl_internals::setInstanceField<::ENet::NoMemoryCallback, 0x10>(this->__instance, std::forward<::ENet::NoMemoryCallback>(value));
}
constexpr ::ENet::NoMemoryCallback ::ENet::ENetCallbacks::__get_noMemory() const {
return ::cordl_internals::getInstanceField<::ENet::NoMemoryCallback, 0x10>(this->__instance);
}
} // end anonymous namespace
