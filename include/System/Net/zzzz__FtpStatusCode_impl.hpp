#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::FtpStatusCode::FtpStatusCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::FtpStatusCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::FtpStatusCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::Undefined{0};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::RestartMarker{110};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServiceTemporarilyNotAvailable{120};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::DataAlreadyOpen{125};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::OpeningData{150};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandOK{200};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandExtraneous{202};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::DirectoryStatus{212};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileStatus{213};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::SystemType{215};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::SendUserCommand{220};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ClosingControl{221};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ClosingData{226};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::EnteringPassive{227};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::LoggedInProceed{230};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServerWantsSecureSession{234};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileActionOK{250};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::PathnameCreated{257};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::SendPasswordCommand{331};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::NeedLoginAccount{332};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileCommandPending{350};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ServiceNotAvailable{421};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::CantOpenData{425};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ConnectionClosed{426};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFileUnavailableOrBusy{450};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionAbortedLocalProcessingError{451};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenInsufficientSpace{452};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandSyntaxError{500};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ArgumentSyntaxError{501};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::CommandNotImplemented{502};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::BadCommandSequence{503};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::NotLoggedIn{530};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::AccountNeeded{532};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFileUnavailable{550};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionAbortedUnknownPageType{551};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::FileActionAborted{552};
constexpr System::Net::FtpStatusCode  System::Net::FtpStatusCode::ActionNotTakenFilenameNotAllowed{553};
