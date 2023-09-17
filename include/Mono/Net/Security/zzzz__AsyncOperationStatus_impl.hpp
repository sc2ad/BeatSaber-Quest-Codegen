#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::AsyncOperationStatus::AsyncOperationStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Net::Security::AsyncOperationStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::AsyncOperationStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Net::Security::AsyncOperationStatus  ::Mono::Net::Security::AsyncOperationStatus::Initialize{0};
constexpr ::Mono::Net::Security::AsyncOperationStatus  ::Mono::Net::Security::AsyncOperationStatus::Continue{1};
constexpr ::Mono::Net::Security::AsyncOperationStatus  ::Mono::Net::Security::AsyncOperationStatus::ReadDone{2};
constexpr ::Mono::Net::Security::AsyncOperationStatus  ::Mono::Net::Security::AsyncOperationStatus::Complete{3};
} // end anonymous namespace
