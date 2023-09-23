#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::SignedData (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdf06c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cms::SignedData::*)(Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::Cms::ContentInfo, Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xdf0ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::ContentInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.CalculateVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Asn1::Cms::SignedData::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0xdf0eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "CalculateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.CheckForVersion3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Cms::SignedData::*)(Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xdf1580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "CheckForVersion3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cms::SignedData::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0xdf076c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf1854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_DigestAlgorithms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf185c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_DigestAlgorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_EncapContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::ContentInfo (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf1864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_EncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_Certificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf186c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_CRLs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf1874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_CRLs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.get_SignerInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf187c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_SignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cms::SignedData.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xdf1884;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cms::SignedData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::Cms::SignedData::__set_Version1(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>(std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::__get_Version1()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>();
}
 void Org::BouncyCastle::Asn1::Cms::SignedData::__set_Version3(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>(std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::__get_Version3()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>();
}
 void Org::BouncyCastle::Asn1::Cms::SignedData::__set_Version4(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>(std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::__get_Version4()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>();
}
 void Org::BouncyCastle::Asn1::Cms::SignedData::__set_Version5(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>(std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::__get_Version5()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerInteger, "Version5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get>();
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_version(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::__get_version() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_digestAlgorithms(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::__get_digestAlgorithms() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::ContentInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::ContentInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo Org::BouncyCastle::Asn1::Cms::SignedData::__get_contentInfo() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::ContentInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_certificates(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::__get_certificates() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_crls(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::__get_crls() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_signerInfos(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::__get_signerInfos() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_certsBer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Asn1::Cms::SignedData::__get_certsBer() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__set_crlsBer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Asn1::Cms::SignedData::__get_crlsBer() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::Cms::SignedData Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::SignedData, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "digestAlgorithms", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "contentInfo", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }, CppParam { name: "certificates", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "crls", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "signerInfos", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Cms::SignedData::SignedData(Org::BouncyCastle::Asn1::Asn1Set digestAlgorithms, Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Asn1Set certificates, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfos)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<SignedData>(digestAlgorithms, contentInfo, certificates, crls, signerInfos))) {}
 void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(Org::BouncyCastle::Asn1::Asn1Set digestAlgorithms, Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Asn1Set certificates, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::ContentInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestAlgorithms, contentInfo, certificates, crls, signerInfos);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion(Org::BouncyCastle::Asn1::DerObjectIdentifier contentOid, Org::BouncyCastle::Asn1::Asn1Set certs, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "CalculateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method, contentOid, certs, crls, signerInfs);
}
 bool Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3(Org::BouncyCastle::Asn1::Asn1Set signerInfs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "CheckForVersion3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, signerInfs);
}
// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Cms::SignedData::SignedData(Org::BouncyCastle::Asn1::Asn1Sequence seq)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<SignedData>(seq))) {}
 void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cms::SignedData::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_DigestAlgorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::ContentInfo Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_EncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::ContentInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_CRLs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "get_SignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cms::SignedData>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
