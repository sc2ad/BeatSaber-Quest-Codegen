#pragma once
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedDataGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x101999c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1019a50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream(::System::IO::Stream output)  : ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream>(output))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::_ctor(::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::*)(::System::IO::Stream, int32_t, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1019990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1019ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream(::System::IO::Stream output, int32_t level, bool nowrap)  : ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream>(output, level, nowrap))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::_ctor(::System::IO::Stream output, int32_t level, bool nowrap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output, level, nowrap);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x101943c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1019444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1019568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1019818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.doOpen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x10196b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "doOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10199a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator
constexpr  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator() const noexcept {
return ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__get_algorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__set_compression(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__get_compression() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__set_dOut(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__get_dOut() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::BcpgOutputStream>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__get_pkOut() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::PgpCompressedDataGenerator(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpCompressedDataGenerator>(algorithm))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "compression", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::PgpCompressedDataGenerator(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpCompressedDataGenerator>(algorithm, compression))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, compression);
}
 ::System::IO::Stream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr);
}
 ::System::IO::Stream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream outStr, ::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr, buffer);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "doOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
