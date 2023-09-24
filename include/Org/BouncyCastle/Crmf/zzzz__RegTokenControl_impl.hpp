#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__RegTokenControl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::RegTokenControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::RegTokenControl::*)(Org::BouncyCastle::Asn1::DerUtf8String)>(&Org::BouncyCastle::Crmf::RegTokenControl::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11830dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerUtf8String>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::RegTokenControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::RegTokenControl::*)(::StringW)>(&Org::BouncyCastle::Crmf::RegTokenControl::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1187e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::RegTokenControl.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (Org::BouncyCastle::Crmf::RegTokenControl::*)()>(&Org::BouncyCastle::Crmf::RegTokenControl::get_Type)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1187e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::RegTokenControl.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable (Org::BouncyCastle::Crmf::RegTokenControl::*)()>(&Org::BouncyCastle::Crmf::RegTokenControl::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1187ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crmf::IControl
constexpr  Org::BouncyCastle::Crmf::RegTokenControl::operator Org::BouncyCastle::Crmf::IControl() const noexcept {
return Org::BouncyCastle::Crmf::IControl(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crmf::RegTokenControl::__set_type(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "type", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crmf::RegTokenControl::__get_type()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "type", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get>();
}
constexpr void Org::BouncyCastle::Crmf::RegTokenControl::__set_token(Org::BouncyCastle::Asn1::DerUtf8String value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerUtf8String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerUtf8String>(value));
}
constexpr Org::BouncyCastle::Asn1::DerUtf8String Org::BouncyCastle::Crmf::RegTokenControl::__get_token() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerUtf8String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crmf::RegTokenControl Org::BouncyCastle::Crmf::RegTokenControl::New_ctor(Org::BouncyCastle::Asn1::DerUtf8String token)  {
Org::BouncyCastle::Crmf::RegTokenControl o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crmf::RegTokenControl>(token))};
return o;
}
 void Org::BouncyCastle::Crmf::RegTokenControl::_ctor(Org::BouncyCastle::Asn1::DerUtf8String token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerUtf8String>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 Org::BouncyCastle::Crmf::RegTokenControl Org::BouncyCastle::Crmf::RegTokenControl::New_ctor(::StringW token)  {
Org::BouncyCastle::Crmf::RegTokenControl o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crmf::RegTokenControl>(token))};
return o;
}
 void Org::BouncyCastle::Crmf::RegTokenControl::_ctor(::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crmf::RegTokenControl::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Encodable Org::BouncyCastle::Crmf::RegTokenControl::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::RegTokenControl>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Encodable, false>(const_cast<void*>(instance), ___internal_method);
}
