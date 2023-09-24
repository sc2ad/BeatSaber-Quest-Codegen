#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509DefaultEntryConverter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter.GetConvertedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::StringW)>(&Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::GetConvertedValue)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x1113710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::*)()>(&Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1113aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::GetConvertedValue(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter>::get(),
                            "GetConvertedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method, oid, value);
}
 Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::New_ctor()  {
Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter>())};
return o;
}
 void Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
