#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__CloudStorageUpdateStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::CloudStorageUpdateStatus::CloudStorageUpdateStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::CloudStorageUpdateStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::CloudStorageUpdateStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::CloudStorageUpdateStatus  ::Oculus::Platform::CloudStorageUpdateStatus::Unknown{0};
constexpr ::Oculus::Platform::CloudStorageUpdateStatus  ::Oculus::Platform::CloudStorageUpdateStatus::Ok{1};
constexpr ::Oculus::Platform::CloudStorageUpdateStatus  ::Oculus::Platform::CloudStorageUpdateStatus::BetterVersionStored{2};
constexpr ::Oculus::Platform::CloudStorageUpdateStatus  ::Oculus::Platform::CloudStorageUpdateStatus::ManualMergeRequired{3};
} // end anonymous namespace