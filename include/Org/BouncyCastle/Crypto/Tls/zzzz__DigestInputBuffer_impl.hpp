#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::*)(Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xed95e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::WriteByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xed9610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xed96bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::__set_d(Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::__get_d() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "d", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream(Org::BouncyCastle::Crypto::IDigest d)  : Org::BouncyCastle::Utilities::IO::BaseOutputStream(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>(d))) {}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::_ctor(Org::BouncyCastle::Crypto::IDigest d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, d);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream::Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigestInputBuffer.UpdateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)(Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xed7b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigestInputBuffer>::get(),
                            "UpdateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigestInputBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)()>(&Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed789c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigestInputBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest(Org::BouncyCastle::Crypto::IDigest d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigestInputBuffer>::get(),
                            "UpdateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, d);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::DigestInputBuffer()  : System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<DigestInputBuffer>())) {}
 void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigestInputBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
