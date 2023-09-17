#pragma once
namespace {
#include "Oculus/Platform/zzzz__Entitlements_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Entitlements.IsUserEntitledToApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)()>(&::Oculus::Platform::Entitlements::IsUserEntitledToApplication)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2593c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Entitlements>::get(),
                            "IsUserEntitledToApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request ::Oculus::Platform::Entitlements::IsUserEntitledToApplication()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Entitlements>::get(),
                            "IsUserEntitledToApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
