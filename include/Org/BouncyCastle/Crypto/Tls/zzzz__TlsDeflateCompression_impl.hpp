#pragma once
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::*)(System::IO::Stream, Org::BouncyCastle::Utilities::Zlib::ZStream, bool)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xf15e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Zlib::ZStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::*)()>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf16074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::New_ctor(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z, bool compress)  {
Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream>(output, z, compress))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::_ctor(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z, bool compress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Zlib::ZStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output, z, compress);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf15d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf15d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Compress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf15e04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Decompress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf15ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCompression
constexpr  Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::operator Org::BouncyCastle::Crypto::Tls::TlsCompression() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCompression(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__set_zIn(Org::BouncyCastle::Utilities::Zlib::ZStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Zlib::ZStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Zlib::ZStream>(value));
}
constexpr Org::BouncyCastle::Utilities::Zlib::ZStream Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__get_zIn() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Zlib::ZStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__set_zOut(Org::BouncyCastle::Utilities::Zlib::ZStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Zlib::ZStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Zlib::ZStream>(value));
}
constexpr Org::BouncyCastle::Utilities::Zlib::ZStream Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__get_zOut() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Zlib::ZStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor(int32_t level)  {
Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>(level))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
 System::IO::Stream Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            "Compress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, output);
}
 System::IO::Stream Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression>::get(),
                            "Decompress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, output);
}
