#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__BerApplicationSpecificParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1ApplicationSpecificParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::BerApplicationSpecificParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)(int32_t, Org::BouncyCastle::Asn1::Asn1StreamParser)>(&Org::BouncyCastle::Asn1::BerApplicationSpecificParser::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x112b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::BerApplicationSpecificParser.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible (Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)()>(&Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11309e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::BerApplicationSpecificParser.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)()>(&Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x112b298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser
constexpr  Org::BouncyCastle::Asn1::BerApplicationSpecificParser::operator Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  Org::BouncyCastle::Asn1::BerApplicationSpecificParser::operator Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__set_tag(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_tag() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__set_parser(Org::BouncyCastle::Asn1::Asn1StreamParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1StreamParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1StreamParser Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_parser() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::BerApplicationSpecificParser::BerApplicationSpecificParser(int32_t tag, Org::BouncyCastle::Asn1::Asn1StreamParser parser)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BerApplicationSpecificParser>(tag, parser))) {}
 void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::_ctor(int32_t tag, Org::BouncyCastle::Asn1::Asn1StreamParser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tag, parser);
}
 Org::BouncyCastle::Asn1::IAsn1Convertible Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::IAsn1Convertible, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecificParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
