#pragma once
namespace {
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObjectParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser.get_TagNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::*)()>(&::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::get_TagNo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser.GetObjectParser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible (::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::*)(int32_t, bool)>(&::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::GetObjectParser)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept {
return ::Org::BouncyCastle::Asn1::IAsn1Convertible(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::get_TagNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser>::get(),
                            "get_TagNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::IAsn1Convertible ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser::GetObjectParser(int32_t tag, bool isExplicit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser>::get(),
                            "GetObjectParser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible, false>(const_cast<void*>(instance), ___internal_method, tag, isExplicit);
}
} // end anonymous namespace
