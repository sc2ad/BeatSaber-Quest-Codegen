#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__FtpMethodFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::FtpMethodFlags::FtpMethodFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::FtpMethodFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpMethodFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::None{0};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::IsDownload{1};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::IsUpload{2};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::TakesParameter{4};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::MayTakeParameter{8};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::DoesNotTakeParameter{16};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::ParameterIsDirectory{32};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::ShouldParseForResponseUri{64};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::HasHttpCommand{128};
constexpr System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::MustChangeWorkingDirectoryToPath{256};
