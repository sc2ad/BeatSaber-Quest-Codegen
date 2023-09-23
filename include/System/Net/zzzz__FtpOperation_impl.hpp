#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__FtpOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::FtpOperation::FtpOperation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::FtpOperation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::FtpOperation  System::Net::FtpOperation::DownloadFile{0};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::ListDirectory{1};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::ListDirectoryDetails{2};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::UploadFile{3};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::UploadFileUnique{4};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::AppendFile{5};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::DeleteFile{6};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::GetDateTimestamp{7};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::GetFileSize{8};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::Rename{9};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::MakeDirectory{10};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::RemoveDirectory{11};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::PrintWorkingDirectory{12};
constexpr System::Net::FtpOperation  System::Net::FtpOperation::Other{13};
