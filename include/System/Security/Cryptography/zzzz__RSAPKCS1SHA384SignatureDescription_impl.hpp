#pragma once
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__RSAPKCS1SHA384SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::*)()>(&::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22fef98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::RSAPKCS1SHA384SignatureDescription()  : ::System::Security::Cryptography::RSAPKCS1SignatureDescription(THROW_UNLESS(::il2cpp_utils::New<RSAPKCS1SHA384SignatureDescription>())) {}
 void ::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
