#pragma once
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IO::Pem::PemObject (Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Utilities::IO::Pem::PemObject Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::IO::Pem::PemObject, false>(const_cast<void*>(instance), ___internal_method);
}
