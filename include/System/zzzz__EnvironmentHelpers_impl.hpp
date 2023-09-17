#pragma once
namespace {
#include "System/zzzz__EnvironmentHelpers_def.hpp"
//  Writing Method size for method: ::System::EnvironmentHelpers.IsWindowsVistaOrAbove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::EnvironmentHelpers::IsWindowsVistaOrAbove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27bba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers>::get(),
                            "IsWindowsVistaOrAbove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::System::EnvironmentHelpers::IsWindowsVistaOrAbove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers>::get(),
                            "IsWindowsVistaOrAbove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
