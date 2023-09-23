#pragma once
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInformation_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::OriginatorInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::OriginatorInformation::*)(Org::BouncyCastle::Asn1::Cms::OriginatorInfo)>(&Org::BouncyCastle::Cms::OriginatorInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x117b990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::OriginatorInformation.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::OriginatorInformation::*)()>(&Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x117b9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::OriginatorInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::OriginatorInformation.GetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::OriginatorInformation::*)()>(&Org::BouncyCastle::Cms::OriginatorInformation::GetCrls)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x117bec4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::OriginatorInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::OriginatorInformation.ToAsn1Structure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::OriginatorInfo (Org::BouncyCastle::Cms::OriginatorInformation::*)()>(&Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117c3d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::OriginatorInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::OriginatorInformation::__set_originatorInfo(Org::BouncyCastle::Asn1::Cms::OriginatorInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::OriginatorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::OriginatorInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::OriginatorInfo Org::BouncyCastle::Cms::OriginatorInformation::__get_originatorInfo() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::OriginatorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "originatorInfo", ty: "Org::BouncyCastle::Asn1::Cms::OriginatorInfo", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::OriginatorInformation::OriginatorInformation(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OriginatorInformation>(originatorInfo))) {}
 void Org::BouncyCastle::Cms::OriginatorInformation::_ctor(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, originatorInfo);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::OriginatorInformation::GetCrls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::OriginatorInfo Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::OriginatorInformation>::get(),
                            "ToAsn1Structure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::OriginatorInfo, false>(const_cast<void*>(instance), ___internal_method);
}
