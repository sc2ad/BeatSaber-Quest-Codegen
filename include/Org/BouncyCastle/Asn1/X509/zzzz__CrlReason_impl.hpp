#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlReason_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::CrlReason._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::CrlReason::*)(int32_t)>(&Org::BouncyCastle::Asn1::X509::CrlReason::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1100ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::CrlReason._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::CrlReason::*)(Org::BouncyCastle::Asn1::DerEnumerated)>(&Org::BouncyCastle::Asn1::X509::CrlReason::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1100f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerEnumerated>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::CrlReason.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::CrlReason::*)()>(&Org::BouncyCastle::Asn1::X509::CrlReason::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1100f9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::X509::CrlReason),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::X509::CrlReason::__set_ReasonString(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "ReasonString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> Org::BouncyCastle::Asn1::X509::CrlReason::__get_ReasonString()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "ReasonString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get>();
}
 Org::BouncyCastle::Asn1::X509::CrlReason Org::BouncyCastle::Asn1::X509::CrlReason::New_ctor(int32_t reason)  {
Org::BouncyCastle::Asn1::X509::CrlReason o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::X509::CrlReason>(reason))};
return o;
}
 void Org::BouncyCastle::Asn1::X509::CrlReason::_ctor(int32_t reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 Org::BouncyCastle::Asn1::X509::CrlReason Org::BouncyCastle::Asn1::X509::CrlReason::New_ctor(Org::BouncyCastle::Asn1::DerEnumerated reason)  {
Org::BouncyCastle::Asn1::X509::CrlReason o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::X509::CrlReason>(reason))};
return o;
}
 void Org::BouncyCastle::Asn1::X509::CrlReason::_ctor(Org::BouncyCastle::Asn1::DerEnumerated reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerEnumerated>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 ::StringW Org::BouncyCastle::Asn1::X509::CrlReason::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::CrlReason>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
