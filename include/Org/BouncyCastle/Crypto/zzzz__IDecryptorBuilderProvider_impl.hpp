#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/zzzz__IDecryptorBuilderProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider.CreateDecryptorBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder (::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::*)(::bs_hook::Il2CppWrapperType)>(&::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Crypto::ICipherBuilder ::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder(::bs_hook::Il2CppWrapperType algorithmDetails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider>::get(),
                            "CreateDecryptorBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherBuilder, false>(const_cast<void*>(instance), ___internal_method, algorithmDetails);
}
} // end anonymous namespace
