#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__Gost28147Parameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject, bool)>(&Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdfe834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::GetInstance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xdfe84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xdfe9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xdfeaf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::__set_iv(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::__get_iv() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::__set_paramSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::__get_paramSet() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, false>(nullptr, ___internal_method, obj, explicitly);
}
 Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::Gost28147Parameters(Org::BouncyCastle::Asn1::Asn1Sequence seq)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<Gost28147Parameters>(seq))) {}
 void Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
