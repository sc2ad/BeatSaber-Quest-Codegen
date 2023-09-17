#pragma once
namespace {
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1ApplicationSpecificParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible (::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser::*)()>(&::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser::ReadObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  ::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return ::Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Asn1::IAsn1Convertible ::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
