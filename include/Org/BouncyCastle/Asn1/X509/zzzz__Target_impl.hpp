#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Target_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice::Org__BouncyCastle__Asn1__X509__Target__Choice(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice  Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice::Name{0};
constexpr Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice  Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice::Group{1};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Target (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::X509::Target::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x110d924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::Target::*)(Org::BouncyCastle::Asn1::Asn1TaggedObject)>(&Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x110daac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::Target::*)(Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x110dbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target.get_TargetGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::GeneralName (Org::BouncyCastle::Asn1::X509::Target::*)()>(&Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x110dc3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::X509::Target),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target.get_TargetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::GeneralName (Org::BouncyCastle::Asn1::X509::Target::*)()>(&Org::BouncyCastle::Asn1::X509::Target::get_TargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x110dc44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::X509::Target),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::Target.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::X509::Target::*)()>(&Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x110dc4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::X509::Target),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr  Org::BouncyCastle::Asn1::X509::Target::operator Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1Choice(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__set_targetName(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::X509::Target::__get_targetName() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__set_targetGroup(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::X509::Target::__get_targetGroup() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::X509::Target Org::BouncyCastle::Asn1::X509::Target::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::Target, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "tagObj", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::X509::Target::Target(Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<Target>(tagObj))) {}
 void Org::BouncyCastle::Asn1::X509::Target::_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagObj);
}
// Ctor Parameters [CppParam { name: "type", ty: "Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice", modifiers: "", def_value: None }, CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::X509::Target::Target(Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice type, Org::BouncyCastle::Asn1::X509::GeneralName name)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<Target>(type, name))) {}
 void Org::BouncyCastle::Asn1::X509::Target::_ctor(Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice type, Org::BouncyCastle::Asn1::X509::GeneralName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Org__BouncyCastle__Asn1__X509__Target__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, name);
}
 Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            "get_TargetGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::GeneralName, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::X509::Target::get_TargetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            "get_TargetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::GeneralName, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::Target>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
