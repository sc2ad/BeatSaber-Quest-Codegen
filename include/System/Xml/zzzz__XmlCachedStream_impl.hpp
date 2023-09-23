#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Xml/zzzz__XmlCachedStream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::Xml::XmlCachedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlCachedStream::*)(System::Uri, System::IO::Stream)>(&System::Xml::XmlCachedStream::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2710964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlCachedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlCachedStream::__set_uri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Xml::XmlCachedStream::__get_uri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 System::Xml::XmlCachedStream::XmlCachedStream(System::Uri uri, System::IO::Stream stream)  : System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<XmlCachedStream>(uri, stream))) {}
 void System::Xml::XmlCachedStream::_ctor(System::Uri uri, System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlCachedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, stream);
}
