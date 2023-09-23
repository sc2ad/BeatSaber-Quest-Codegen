#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerSequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::DerSequenceParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerSequenceParser::*)(Org::BouncyCastle::Asn1::Asn1StreamParser)>(&Org::BouncyCastle::Asn1::DerSequenceParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x112f21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::DerSequenceParser.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible (Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(&Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1138d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::DerSequenceParser.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(&Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1138d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Asn1::Asn1SequenceParser
constexpr  Org::BouncyCastle::Asn1::DerSequenceParser::operator Org::BouncyCastle::Asn1::Asn1SequenceParser() const noexcept {
return Org::BouncyCastle::Asn1::Asn1SequenceParser(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  Org::BouncyCastle::Asn1::DerSequenceParser::operator Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::DerSequenceParser::__set__parser(Org::BouncyCastle::Asn1::Asn1StreamParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1StreamParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1StreamParser Org::BouncyCastle::Asn1::DerSequenceParser::__get__parser() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::DerSequenceParser::DerSequenceParser(Org::BouncyCastle::Asn1::Asn1StreamParser parser)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DerSequenceParser>(parser))) {}
 void Org::BouncyCastle::Asn1::DerSequenceParser::_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parser);
}
 Org::BouncyCastle::Asn1::IAsn1Convertible Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::IAsn1Convertible, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::DerSequenceParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
