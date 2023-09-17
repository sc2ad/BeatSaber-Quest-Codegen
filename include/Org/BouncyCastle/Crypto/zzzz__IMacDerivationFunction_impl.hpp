#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/zzzz__IMacDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IMacDerivationFunction.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IMac (::Org::BouncyCastle::Crypto::IMacDerivationFunction::*)()>(&::Org::BouncyCastle::Crypto::IMacDerivationFunction::GetMac)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::IMacDerivationFunction),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IMacDerivationFunction>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationFunction
constexpr  ::Org::BouncyCastle::Crypto::IMacDerivationFunction::operator ::Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept {
return ::Org::BouncyCastle::Crypto::IDerivationFunction(::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Crypto::IMac ::Org::BouncyCastle::Crypto::IMacDerivationFunction::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IMacDerivationFunction>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
