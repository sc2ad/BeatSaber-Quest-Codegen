#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableFile_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1159fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo, int32_t)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x115a00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x115a03c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsProcessableFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x115a0d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsProcessableFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x115a154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsProcessableFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsProcessable
constexpr  ::Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsProcessable() const noexcept {
return ::Org::BouncyCastle::Cms::CmsProcessable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsReadable
constexpr  ::Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsReadable() const noexcept {
return ::Org::BouncyCastle::Cms::CmsReadable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsProcessableFile::__set__file(::System::IO::FileInfo value)  {
::cordl_internals::setInstanceField<::System::IO::FileInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::FileInfo>(value));
}
constexpr ::System::IO::FileInfo ::Org::BouncyCastle::Cms::CmsProcessableFile::__get__file() const {
return ::cordl_internals::getInstanceField<::System::IO::FileInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsProcessableFile::__set__bufSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Cms::CmsProcessableFile::__get__bufSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "file", ty: "::System::IO::FileInfo", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsProcessableFile::CmsProcessableFile(::System::IO::FileInfo file)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsProcessableFile>(file))) {}
 void ::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo file)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, file);
}
// Ctor Parameters [CppParam { name: "file", ty: "::System::IO::FileInfo", modifiers: "", def_value: None }, CppParam { name: "bufSize", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsProcessableFile::CmsProcessableFile(::System::IO::FileInfo file, int32_t bufSize)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsProcessableFile>(file, bufSize))) {}
 void ::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo file, int32_t bufSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, file, bufSize);
}
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Cms::CmsProcessableFile::Write(::System::IO::Stream zOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, zOut);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Cms::CmsProcessableFile::GetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
