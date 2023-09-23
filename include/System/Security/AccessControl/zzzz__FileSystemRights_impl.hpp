#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemRights_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::FileSystemRights::FileSystemRights(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::FileSystemRights::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::FileSystemRights::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ListDirectory{1};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ReadData{1};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::CreateFiles{2};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::WriteData{2};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::AppendData{4};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::CreateDirectories{4};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ReadExtendedAttributes{8};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::WriteExtendedAttributes{16};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ExecuteFile{32};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Traverse{32};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::DeleteSubdirectoriesAndFiles{64};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ReadAttributes{128};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::WriteAttributes{256};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Write{278};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Delete{65536};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ReadPermissions{131072};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Read{131209};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ReadAndExecute{131241};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Modify{197055};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::ChangePermissions{262144};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::TakeOwnership{524288};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::Synchronize{1048576};
constexpr System::Security::AccessControl::FileSystemRights  System::Security::AccessControl::FileSystemRights::FullControl{2032127};
