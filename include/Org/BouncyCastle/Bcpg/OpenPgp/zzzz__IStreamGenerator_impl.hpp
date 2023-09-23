#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
