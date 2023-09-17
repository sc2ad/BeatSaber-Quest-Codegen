#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider.CreateVerifierFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory (::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::*)(::bs_hook::Il2CppWrapperType)>(&::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Crypto::IVerifierFactory ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory(::bs_hook::Il2CppWrapperType algorithmDetails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider>::get(),
                            "CreateVerifierFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IVerifierFactory, false>(const_cast<void*>(instance), ___internal_method, algorithmDetails);
}
} // end anonymous namespace
