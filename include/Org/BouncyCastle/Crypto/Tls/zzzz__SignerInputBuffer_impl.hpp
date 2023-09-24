#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignerInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignerInputBuffer_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::*)(Org::BouncyCastle::Crypto::ISigner)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf09900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::WriteByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf09930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf099dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::__set_s(Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::__get_s() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::New_ctor(Org::BouncyCastle::Crypto::ISigner s)  {
Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>(s))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::_ctor(Org::BouncyCastle::Crypto::ISigner s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream::Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::SignerInputBuffer.UpdateSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::*)(Org::BouncyCastle::Crypto::ISigner)>(&Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::UpdateSigner)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf09888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::SignerInputBuffer>::get(),
                            "UpdateSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::SignerInputBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::*)()>(&Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf09928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::SignerInputBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::UpdateSigner(Org::BouncyCastle::Crypto::ISigner s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::SignerInputBuffer>::get(),
                            "UpdateSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 Org::BouncyCastle::Crypto::Tls::SignerInputBuffer Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::SignerInputBuffer o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::SignerInputBuffer>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::SignerInputBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::SignerInputBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
