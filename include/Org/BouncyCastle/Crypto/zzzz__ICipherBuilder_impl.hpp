#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipherBuilder.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::ICipherBuilder::*)()>(&Org::BouncyCastle::Crypto::ICipherBuilder::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipherBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipherBuilder.GetMaxOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::ICipherBuilder::*)(int32_t)>(&Org::BouncyCastle::Crypto::ICipherBuilder::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipherBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipherBuilder.BuildCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipher (Org::BouncyCastle::Crypto::ICipherBuilder::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::ICipherBuilder::BuildCipher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipherBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::ICipherBuilder::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::ICipherBuilder::GetMaxOutputSize(int32_t inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputLen);
}
 Org::BouncyCastle::Crypto::ICipher Org::BouncyCastle::Crypto::ICipherBuilder::BuildCipher(System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipherBuilder>::get(),
                            "BuildCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipher, false>(const_cast<void*>(instance), ___internal_method, stream);
}
