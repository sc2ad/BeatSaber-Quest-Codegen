#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipher.GetMaxOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::ICipher::*)(int32_t)>(&Org::BouncyCastle::Crypto::ICipher::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipher.GetUpdateOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::ICipher::*)(int32_t)>(&Org::BouncyCastle::Crypto::ICipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::ICipher.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Crypto::ICipher::*)()>(&Org::BouncyCastle::Crypto::ICipher::get_Stream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::ICipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 int32_t Org::BouncyCastle::Crypto::ICipher::GetMaxOutputSize(int32_t inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputLen);
}
 int32_t Org::BouncyCastle::Crypto::ICipher::GetUpdateOutputSize(int32_t inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                            "GetUpdateOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputLen);
}
 System::IO::Stream Org::BouncyCastle::Crypto::ICipher::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::ICipher>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
