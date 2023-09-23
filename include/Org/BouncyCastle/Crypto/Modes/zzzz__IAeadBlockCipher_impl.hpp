#pragma once
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher.GetBlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher.GetUnderlyingCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockCipher (Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr  Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::operator Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept {
return Org::BouncyCastle::Crypto::Modes::IAeadCipher(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::GetBlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher>::get(),
                            "GetBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IBlockCipher Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher::GetUnderlyingCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher>::get(),
                            "GetUnderlyingCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBlockCipher, false>(const_cast<void*>(instance), ___internal_method);
}
