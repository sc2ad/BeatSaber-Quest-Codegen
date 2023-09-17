#pragma once
#include "System/zzzz__SystemException_impl.hpp"
namespace {
#include "Mono/Xml/zzzz__SmallXmlParserException_def.hpp"
//  Writing Method size for method: ::Mono::Xml::SmallXmlParserException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParserException::*)(::StringW, int32_t, int32_t)>(&::Mono::Xml::SmallXmlParserException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22a6208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParserException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Xml::SmallXmlParserException::__set_line(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Xml::SmallXmlParserException::__get_line() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Xml::SmallXmlParserException::__set_column(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Xml::SmallXmlParserException::__get_column() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "column", ty: "int32_t", modifiers: "", def_value: None }]
 ::Mono::Xml::SmallXmlParserException::SmallXmlParserException(::StringW msg, int32_t line, int32_t column)  : ::System::SystemException(THROW_UNLESS(::il2cpp_utils::New<SmallXmlParserException>(msg, line, column))) {}
 void ::Mono::Xml::SmallXmlParserException::_ctor(::StringW msg, int32_t line, int32_t column)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParserException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg, line, column);
}
} // end anonymous namespace
