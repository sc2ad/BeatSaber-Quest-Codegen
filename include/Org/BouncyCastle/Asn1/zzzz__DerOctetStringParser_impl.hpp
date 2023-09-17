#pragma once
namespace {
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream)>(&::Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x112f244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.GetOctetStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(&::Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1138560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            "GetOctetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(&::Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1138568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1OctetStringParser
constexpr  ::Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser() const noexcept {
return ::Org::BouncyCastle::Asn1::Asn1OctetStringParser(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  ::Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return ::Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::DerOctetStringParser::__set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream ::Org::BouncyCastle::Asn1::DerOctetStringParser::__get_stream() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "::Org::BouncyCastle::Asn1::DefiniteLengthInputStream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerOctetStringParser::DerOctetStringParser(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream stream)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DerOctetStringParser>(stream))) {}
 void ::Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 ::System::IO::Stream ::Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            "GetOctetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Asn1Object ::Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
