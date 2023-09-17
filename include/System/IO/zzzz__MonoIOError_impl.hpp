#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__MonoIOError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoIOError::MonoIOError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::MonoIOError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::MonoIOError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_SUCCESS{0};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_FILE_NOT_FOUND{2};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_PATH_NOT_FOUND{3};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_TOO_MANY_OPEN_FILES{4};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_ACCESS_DENIED{5};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_INVALID_HANDLE{6};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_INVALID_DRIVE{15};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_NOT_SAME_DEVICE{17};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_NO_MORE_FILES{18};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_NOT_READY{21};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_WRITE_FAULT{29};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_READ_FAULT{30};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_GEN_FAILURE{31};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_SHARING_VIOLATION{32};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_LOCK_VIOLATION{33};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_HANDLE_DISK_FULL{39};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_NOT_SUPPORTED{50};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_FILE_EXISTS{80};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_CANNOT_MAKE{82};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_INVALID_PARAMETER{87};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_BROKEN_PIPE{109};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_INVALID_NAME{123};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_DIR_NOT_EMPTY{145};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_ALREADY_EXISTS{183};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_FILENAME_EXCED_RANGE{206};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_DIRECTORY{267};
constexpr ::System::IO::MonoIOError  ::System::IO::MonoIOError::ERROR_ENCRYPTION_FAILED{6000};
} // end anonymous namespace
