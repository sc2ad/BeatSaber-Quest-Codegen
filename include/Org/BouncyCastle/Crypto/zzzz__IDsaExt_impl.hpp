#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IDsaExt.get_Order
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::IDsaExt::*)()>(&::Org::BouncyCastle::Crypto::IDsaExt::get_Order)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::IDsaExt),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDsaExt>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsa
constexpr  ::Org::BouncyCastle::Crypto::IDsaExt::operator ::Org::BouncyCastle::Crypto::IDsa() const noexcept {
return ::Org::BouncyCastle::Crypto::IDsa(::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::IDsaExt::get_Order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDsaExt>::get(),
                            "get_Order",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
