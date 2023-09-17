#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__CloudStorageDataStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::CloudStorageDataStatus::CloudStorageDataStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::CloudStorageDataStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::CloudStorageDataStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::Unknown{0};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::InSync{1};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::NeedsDownload{2};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::RemoteDownloading{3};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::NeedsUpload{4};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::LocalUploading{5};
constexpr ::Oculus::Platform::CloudStorageDataStatus  ::Oculus::Platform::CloudStorageDataStatus::InConflict{6};
} // end anonymous namespace
