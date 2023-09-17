#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::WrapperProvider.CreateWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Crypto::Operators::WrapperProvider::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Operators::WrapperProvider::CreateWrapper)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Operators::WrapperProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::WrapperProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Crypto::Operators::WrapperProvider::CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::WrapperProvider>::get(),
                            "CreateWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, forWrapping, parameters);
}
} // end anonymous namespace
