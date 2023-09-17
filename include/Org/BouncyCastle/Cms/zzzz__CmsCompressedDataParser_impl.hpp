#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1152d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1152dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser.GetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1152e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "compressedData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsCompressedDataParser::CmsCompressedDataParser(::ArrayW<uint8_t> compressedData)  : ::Org::BouncyCastle::Cms::CmsContentInfoParser(THROW_UNLESS(::il2cpp_utils::New<CmsCompressedDataParser>(compressedData))) {}
 void ::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::ArrayW<uint8_t> compressedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, compressedData);
}
// Ctor Parameters [CppParam { name: "compressedData", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsCompressedDataParser::CmsCompressedDataParser(::System::IO::Stream compressedData)  : ::Org::BouncyCastle::Cms::CmsContentInfoParser(THROW_UNLESS(::il2cpp_utils::New<CmsCompressedDataParser>(compressedData))) {}
 void ::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::System::IO::Stream compressedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, compressedData);
}
 ::Org::BouncyCastle::Cms::CmsTypedStream ::Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
