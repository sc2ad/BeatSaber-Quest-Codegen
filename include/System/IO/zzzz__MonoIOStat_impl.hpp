#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/IO/zzzz__MonoIOStat_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "fileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreationTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastAccessTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastWriteTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoIOStat::MonoIOStat(::System::IO::FileAttributes fileAttributes, int64_t Length, int64_t CreationTime, int64_t LastAccessTime, int64_t LastWriteTime) noexcept : ::bs_hook::ValueTypeWrapper() {this->fileAttributes = fileAttributes;
this->Length = Length;
this->CreationTime = CreationTime;
this->LastAccessTime = LastAccessTime;
this->LastWriteTime = LastWriteTime;
}
constexpr void ::System::IO::MonoIOStat::__set_fileAttributes(::System::IO::FileAttributes value)  {
::cordl_internals::setInstanceField<::System::IO::FileAttributes, 0x0>(this->__instance, std::forward<::System::IO::FileAttributes>(value));
}
constexpr ::System::IO::FileAttributes ::System::IO::MonoIOStat::__get_fileAttributes() const {
return ::cordl_internals::getInstanceField<::System::IO::FileAttributes, 0x0>(this->__instance);
}
constexpr void ::System::IO::MonoIOStat::__set_Length(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::IO::MonoIOStat::__get_Length() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void ::System::IO::MonoIOStat::__set_CreationTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::IO::MonoIOStat::__get_CreationTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void ::System::IO::MonoIOStat::__set_LastAccessTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::IO::MonoIOStat::__get_LastAccessTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->__instance);
}
constexpr void ::System::IO::MonoIOStat::__set_LastWriteTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::IO::MonoIOStat::__get_LastWriteTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->__instance);
}
} // end anonymous namespace
