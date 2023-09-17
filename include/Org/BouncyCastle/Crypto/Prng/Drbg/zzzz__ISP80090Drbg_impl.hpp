#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.get_BlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)()>(&::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::get_BlockSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.Reseed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Reseed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 int32_t ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::get_BlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                            "get_BlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, output, additionalInput, predictionResistant);
}
 void ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Reseed(::ArrayW<uint8_t> additionalInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg>::get(),
                            "Reseed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, additionalInput);
}
} // end anonymous namespace
