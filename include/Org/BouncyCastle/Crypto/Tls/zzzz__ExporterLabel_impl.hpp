#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExporterLabel_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::ExporterLabel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::ExporterLabel::*)()>(&Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf0427c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExporterLabel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Tls::ExporterLabel::__set_extended_master_secret(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "extended_master_secret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExporterLabel>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Crypto::Tls::ExporterLabel::__get_extended_master_secret()  {
return ::cordl_internals::getStaticField<::StringW, "extended_master_secret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExporterLabel>::get>();
}
 Org::BouncyCastle::Crypto::Tls::ExporterLabel Org::BouncyCastle::Crypto::Tls::ExporterLabel::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::ExporterLabel o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::ExporterLabel>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ExporterLabel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
