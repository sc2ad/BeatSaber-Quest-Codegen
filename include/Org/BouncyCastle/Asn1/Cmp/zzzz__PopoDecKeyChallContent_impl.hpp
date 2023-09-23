#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PopoDecKeyChallContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__Challenge_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xde0e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::GetInstance)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xddc2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent.ToChallengeArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Asn1::Cmp::Challenge> (Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::*)()>(&Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::ToChallengeArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xde0e4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::*)()>(&Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde0f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::__set_content(Org::BouncyCastle::Asn1::Asn1Sequence value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Sequence>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::__get_content() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::PopoDecKeyChallContent(Org::BouncyCastle::Asn1::Asn1Sequence seq)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<PopoDecKeyChallContent>(seq))) {}
 void Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent, false>(nullptr, ___internal_method, obj);
}
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::Challenge> Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::ToChallengeArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            "ToChallengeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Asn1::Cmp::Challenge>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
