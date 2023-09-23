#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::IVerifierFactory.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::IVerifierFactory::*)()>(&Org::BouncyCastle::Crypto::IVerifierFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IVerifierFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IVerifierFactory>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::IVerifierFactory.CreateCalculator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IStreamCalculator (Org::BouncyCastle::Crypto::IVerifierFactory::*)()>(&Org::BouncyCastle::Crypto::IVerifierFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IVerifierFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IVerifierFactory>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::IVerifierFactory::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IVerifierFactory>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IStreamCalculator Org::BouncyCastle::Crypto::IVerifierFactory::CreateCalculator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IVerifierFactory>::get(),
                            "CreateCalculator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IStreamCalculator, false>(const_cast<void*>(instance), ___internal_method);
}
