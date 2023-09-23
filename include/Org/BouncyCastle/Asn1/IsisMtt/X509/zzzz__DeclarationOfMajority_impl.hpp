#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice  Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::NotYoungerThan{0};
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice  Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::FullAgeAtCountry{1};
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice  Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice::DateOfBirth{2};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(int32_t)>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xee9d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(bool, ::StringW)>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xee9dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(Org::BouncyCastle::Asn1::DerGeneralizedTime)>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee9fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xeea060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(Org::BouncyCastle::Asn1::Asn1TaggedObject)>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xeea1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeea2a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xeea2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_NotYoungerThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeea2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_FullAgeAtCountry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Sequence (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xeea30c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_DateOfBirth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerGeneralizedTime (Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xeea344;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr  Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::operator Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1Choice(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__set_declaration(Org::BouncyCastle::Asn1::Asn1TaggedObject value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1TaggedObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1TaggedObject>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1TaggedObject Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__get_declaration() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1TaggedObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "notYoungerThan", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority(int32_t notYoungerThan)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<DeclarationOfMajority>(notYoungerThan))) {}
 void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(int32_t notYoungerThan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, notYoungerThan);
}
// Ctor Parameters [CppParam { name: "fullAge", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "country", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority(bool fullAge, ::StringW country)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<DeclarationOfMajority>(fullAge, country))) {}
 void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(bool fullAge, ::StringW country)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fullAge, country);
}
// Ctor Parameters [CppParam { name: "dateOfBirth", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority(Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<DeclarationOfMajority>(dateOfBirth))) {}
 void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(Org::BouncyCastle::Asn1::DerGeneralizedTime dateOfBirth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dateOfBirth);
}
 Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "o", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority(Org::BouncyCastle::Asn1::Asn1TaggedObject o)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<DeclarationOfMajority>(o))) {}
 void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::IsisMtt::X509::Org__BouncyCastle__Asn1__IsisMtt__X509__DeclarationOfMajority__Choice, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "get_NotYoungerThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "get_FullAgeAtCountry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Sequence, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority>::get(),
                            "get_DateOfBirth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerGeneralizedTime, false>(const_cast<void*>(instance), ___internal_method);
}
