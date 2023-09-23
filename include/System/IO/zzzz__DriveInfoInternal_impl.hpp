#pragma once
#include "System/IO/zzzz__DriveInfoInternal_def.hpp"
//  Writing Method size for method: System::IO::DriveInfoInternal.GetLogicalDrives
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::IO::DriveInfoInternal::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d55e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveInfoInternal>::get(),
                            "GetLogicalDrives",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<::StringW> System::IO::DriveInfoInternal::GetLogicalDrives()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveInfoInternal>::get(),
                            "GetLogicalDrives",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
