#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CrlID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Ocsp::CrlID._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Ocsp::CrlID::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Ocsp::CrlID::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xef21b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerIA5String (Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xef2574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xef257c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerGeneralizedTime (Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xef2584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Ocsp::CrlID.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&Org::BouncyCastle::Asn1::Ocsp::CrlID::ToAsn1Object)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xef258c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Ocsp::CrlID),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__set_crlUrl(Org::BouncyCastle::Asn1::DerIA5String value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerIA5String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerIA5String>(value));
}
constexpr Org::BouncyCastle::Asn1::DerIA5String Org::BouncyCastle::Asn1::Ocsp::CrlID::__get_crlUrl() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerIA5String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__set_crlNum(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Ocsp::CrlID::__get_crlNum() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__set_crlTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerGeneralizedTime>(value));
}
constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Asn1::Ocsp::CrlID::__get_crlTime() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Ocsp::CrlID::CrlID(Org::BouncyCastle::Asn1::Asn1Sequence seq)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<CrlID>(seq))) {}
 void Org::BouncyCastle::Asn1::Ocsp::CrlID::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::DerIA5String Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlUrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerIA5String, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlNum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "get_CrlTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerGeneralizedTime, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::Ocsp::CrlID::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Ocsp::CrlID>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
