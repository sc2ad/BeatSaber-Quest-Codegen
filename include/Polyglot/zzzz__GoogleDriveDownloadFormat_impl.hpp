#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Polyglot::GoogleDriveDownloadFormat::GoogleDriveDownloadFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Polyglot::GoogleDriveDownloadFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Polyglot::GoogleDriveDownloadFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Polyglot::GoogleDriveDownloadFormat  Polyglot::GoogleDriveDownloadFormat::CSV{0};
constexpr Polyglot::GoogleDriveDownloadFormat  Polyglot::GoogleDriveDownloadFormat::TSV{1};
