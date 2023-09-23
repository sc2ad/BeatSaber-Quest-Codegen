#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExtensionType_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::ExtensionType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::ExtensionType::*)()>(&Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf042d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Tls::ExtensionType::__set_DRAFT_token_binding(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "DRAFT_token_binding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::__get_DRAFT_token_binding()  {
return ::cordl_internals::getStaticField<int32_t, "DRAFT_token_binding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get>();
}
 void Org::BouncyCastle::Crypto::Tls::ExtensionType::__set_negotiated_ff_dhe_groups(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "negotiated_ff_dhe_groups", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::__get_negotiated_ff_dhe_groups()  {
return ::cordl_internals::getStaticField<int32_t, "negotiated_ff_dhe_groups", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::ExtensionType::ExtensionType()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ExtensionType>())) {}
 void Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExtensionType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
