#pragma once
namespace {
#include "Oculus/Platform/zzzz__CloudStorage2_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::CloudStorage2.GetUserDirectoryPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW> (*)()>(&::Oculus::Platform::CloudStorage2::GetUserDirectoryPath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2593b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage2>::get(),
                            "GetUserDirectoryPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request_1<::StringW> ::Oculus::Platform::CloudStorage2::GetUserDirectoryPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage2>::get(),
                            "GetUserDirectoryPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
