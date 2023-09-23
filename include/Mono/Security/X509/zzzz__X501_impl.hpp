#pragma once
#include "Mono/Security/X509/zzzz__X501_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: Mono::Security::X509::X501.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Mono::Security::ASN1)>(&Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2282cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X501.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Mono::Security::ASN1, bool, ::StringW, bool)>(&Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x228acac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X501.AppendEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, Mono::Security::ASN1, bool)>(&Mono::Security::X509::X501::AppendEntry)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x228a4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "AppendEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void Mono::Security::X509::X501::__set_countryName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "countryName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_countryName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "countryName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_organizationName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_organizationName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_organizationalUnitName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_organizationalUnitName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_commonName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "commonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_commonName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "commonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_localityName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "localityName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_localityName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "localityName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_stateOrProvinceName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_stateOrProvinceName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_streetAddress(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "streetAddress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_streetAddress()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "streetAddress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_serialNumber(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "serialNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_serialNumber()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "serialNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_domainComponent(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "domainComponent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_domainComponent()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "domainComponent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_userid(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "userid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_userid()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "userid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_email(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "email", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_email()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "email", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_dnQualifier(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dnQualifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_dnQualifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dnQualifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_title(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "title", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_title()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "title", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_surname(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "surname", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_surname()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "surname", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_givenName(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "givenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_givenName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "givenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 void Mono::Security::X509::X501::__set_initial(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "initial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::X509::X501::__get_initial()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "initial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get>();
}
 ::StringW Mono::Security::X509::X501::ToString(Mono::Security::ASN1 seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, seq);
}
 ::StringW Mono::Security::X509::X501::ToString(Mono::Security::ASN1 seq, bool reversed, ::StringW separator, bool quotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, seq, reversed, separator, quotes);
}
 void Mono::Security::X509::X501::AppendEntry(System::Text::StringBuilder sb, Mono::Security::ASN1 entry, bool quotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X501>::get(),
                            "AppendEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, entry, quotes);
}
