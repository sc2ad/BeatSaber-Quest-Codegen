#pragma once
#include "System/Security/Cryptography/zzzz__SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::StringW, ::StringW)>(&System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22fee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDescription::__set__hashAlgorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Security::Cryptography::RSAPKCS1SignatureDescription::__get__hashAlgorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::Cryptography::RSAPKCS1SignatureDescription System::Security::Cryptography::RSAPKCS1SignatureDescription::New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm)  {
System::Security::Cryptography::RSAPKCS1SignatureDescription o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Cryptography::RSAPKCS1SignatureDescription>(hashAlgorithm, digestAlgorithm))};
return o;
}
 void System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashAlgorithm, digestAlgorithm);
}
