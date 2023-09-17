#pragma once
#include "System/Xml/zzzz__Base64Encoder_impl.hpp"
namespace {
#include "System/Xml/zzzz__XmlRawWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::System::Xml::XmlRawWriter)>(&::System::Xml::XmlRawWriterBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26bb260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlRawWriterBase64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26bb284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRawWriterBase64Encoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::XmlRawWriterBase64Encoder::__set_rawWriter(::System::Xml::XmlRawWriter value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlRawWriter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlRawWriter>(value));
}
constexpr ::System::Xml::XmlRawWriter ::System::Xml::XmlRawWriterBase64Encoder::__get_rawWriter() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlRawWriter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "rawWriter", ty: "::System::Xml::XmlRawWriter", modifiers: "", def_value: None }]
 ::System::Xml::XmlRawWriterBase64Encoder::XmlRawWriterBase64Encoder(::System::Xml::XmlRawWriter rawWriter)  : ::System::Xml::Base64Encoder(THROW_UNLESS(::il2cpp_utils::New<XmlRawWriterBase64Encoder>(rawWriter))) {}
 void ::System::Xml::XmlRawWriterBase64Encoder::_ctor(::System::Xml::XmlRawWriter rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rawWriter);
}
 void ::System::Xml::XmlRawWriterBase64Encoder::WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
} // end anonymous namespace
