#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcscpRespStatus_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcscpRespStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcscpRespStatus::*)()>(&Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10163c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcscpRespStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Ocsp::OcscpRespStatus Org::BouncyCastle::Ocsp::OcscpRespStatus::New_ctor()  {
Org::BouncyCastle::Ocsp::OcscpRespStatus o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::OcscpRespStatus>())};
return o;
}
 void Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcscpRespStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
