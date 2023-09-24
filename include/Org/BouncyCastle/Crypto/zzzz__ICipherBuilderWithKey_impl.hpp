#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipherBuilderWithKey.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (Org::BouncyCastle::Crypto::ICipherBuilderWithKey::*)()>(&Org::BouncyCastle::Crypto::ICipherBuilderWithKey::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipherBuilderWithKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilderWithKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherBuilder
constexpr  Org::BouncyCastle::Crypto::ICipherBuilderWithKey::operator Org::BouncyCastle::Crypto::ICipherBuilder() const noexcept {
return Org::BouncyCastle::Crypto::ICipherBuilder(::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::ICipherBuilderWithKey::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilderWithKey>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(const_cast<void*>(instance), ___internal_method);
}
