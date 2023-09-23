#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__AeadParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__CcmParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::CcmParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::CcmParameters::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::CcmParameters::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xea251c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::CcmParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }, CppParam { name: "macSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "associatedText", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::CcmParameters::CcmParameters(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText)  : Org::BouncyCastle::Crypto::Parameters::AeadParameters(THROW_UNLESS(::il2cpp_utils::New<CcmParameters>(key, macSize, nonce, associatedText))) {}
 void Org::BouncyCastle::Crypto::Parameters::CcmParameters::_ctor(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::CcmParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, macSize, nonce, associatedText);
}
