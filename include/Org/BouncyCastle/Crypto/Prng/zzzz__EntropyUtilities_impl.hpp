#pragma once
#include "Org/BouncyCastle/Crypto/Prng/zzzz__EntropyUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::EntropyUtilities.GenerateSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::IEntropySource, int32_t)>(&Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GenerateSeed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xeb4678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::EntropyUtilities>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::EntropyUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::EntropyUtilities::*)()>(&Org::BouncyCastle::Crypto::Prng::EntropyUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb47d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::EntropyUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GenerateSeed(Org::BouncyCastle::Crypto::IEntropySource entropySource, int32_t numBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::EntropyUtilities>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, entropySource, numBytes);
}
 Org::BouncyCastle::Crypto::Prng::EntropyUtilities Org::BouncyCastle::Crypto::Prng::EntropyUtilities::New_ctor()  {
Org::BouncyCastle::Crypto::Prng::EntropyUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::EntropyUtilities>())};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::EntropyUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::EntropyUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
