#pragma once
namespace {
#include "System/Net/zzzz__TcpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::TcpValidationHelpers.ValidatePortNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Net::TcpValidationHelpers::ValidatePortNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27f8b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TcpValidationHelpers>::get(),
                            "ValidatePortNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Net::TcpValidationHelpers::ValidatePortNumber(int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TcpValidationHelpers>::get(),
                            "ValidatePortNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, port);
}
} // end anonymous namespace
