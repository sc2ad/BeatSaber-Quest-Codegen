#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Asn1OctetStringParser.GetOctetStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Asn1::Asn1OctetStringParser::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetStringParser::GetOctetStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Asn1OctetStringParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OctetStringParser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  Org::BouncyCastle::Asn1::Asn1OctetStringParser::operator Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
 System::IO::Stream Org::BouncyCastle::Asn1::Asn1OctetStringParser::GetOctetStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OctetStringParser>::get(),
                            "GetOctetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
