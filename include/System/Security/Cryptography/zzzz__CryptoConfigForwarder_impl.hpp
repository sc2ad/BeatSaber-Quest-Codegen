#pragma once
namespace {
#include "System/Security/Cryptography/zzzz__CryptoConfigForwarder_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfigForwarder.CreateFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfigForwarder::CreateFromName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2309854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoConfigForwarder>::get(),
                            "CreateFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::System::Security::Cryptography::CryptoConfigForwarder::CreateFromName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoConfigForwarder>::get(),
                            "CreateFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, name);
}
} // end anonymous namespace
