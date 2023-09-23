#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerApplicationSpecific_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerApplicationSpecific_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::BerApplicationSpecific._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerApplicationSpecific::*)(int32_t, Org::BouncyCastle::Asn1::Asn1EncodableVector)>(&Org::BouncyCastle::Asn1::BerApplicationSpecific::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11309e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecific>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vec", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::BerApplicationSpecific::BerApplicationSpecific(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1EncodableVector vec)  : Org::BouncyCastle::Asn1::DerApplicationSpecific(THROW_UNLESS(::il2cpp_utils::New<BerApplicationSpecific>(tagNo, vec))) {}
 void Org::BouncyCastle::Asn1::BerApplicationSpecific::_ctor(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1EncodableVector vec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::BerApplicationSpecific>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagNo, vec);
}
