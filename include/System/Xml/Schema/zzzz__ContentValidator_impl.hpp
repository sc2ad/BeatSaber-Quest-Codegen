#pragma once
namespace {
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType)>(&::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x271b3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x271b3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271b42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_IsOpen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_IsOpen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x271b434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            "get_IsOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::ContentValidator::__set_contentType(::System::Xml::Schema::XmlSchemaContentType value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaContentType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaContentType>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaContentType ::System::Xml::Schema::ContentValidator::__get_contentType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaContentType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::ContentValidator::__set_isOpen(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Xml::Schema::ContentValidator::__get_isOpen() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::ContentValidator::__set_isEmptiable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Xml::Schema::ContentValidator::__get_isEmptiable() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Xml::Schema::ContentValidator::__set_Empty(::System::Xml::Schema::ContentValidator value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>(std::forward<::System::Xml::Schema::ContentValidator>(value));
}
 ::System::Xml::Schema::ContentValidator ::System::Xml::Schema::ContentValidator::__get_Empty()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>();
}
 void ::System::Xml::Schema::ContentValidator::__set_TextOnly(::System::Xml::Schema::ContentValidator value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator, "TextOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>(std::forward<::System::Xml::Schema::ContentValidator>(value));
}
 ::System::Xml::Schema::ContentValidator ::System::Xml::Schema::ContentValidator::__get_TextOnly()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator, "TextOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>();
}
 void ::System::Xml::Schema::ContentValidator::__set_Mixed(::System::Xml::Schema::ContentValidator value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator, "Mixed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>(std::forward<::System::Xml::Schema::ContentValidator>(value));
}
 ::System::Xml::Schema::ContentValidator ::System::Xml::Schema::ContentValidator::__get_Mixed()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator, "Mixed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>();
}
 void ::System::Xml::Schema::ContentValidator::__set_Any(::System::Xml::Schema::ContentValidator value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>(std::forward<::System::Xml::Schema::ContentValidator>(value));
}
 ::System::Xml::Schema::ContentValidator ::System::Xml::Schema::ContentValidator::__get_Any()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get>();
}
// Ctor Parameters [CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }]
 ::System::Xml::Schema::ContentValidator::ContentValidator(::System::Xml::Schema::XmlSchemaContentType contentType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ContentValidator>(contentType))) {}
 void ::System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentType);
}
// Ctor Parameters [CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }]
 ::System::Xml::Schema::ContentValidator::ContentValidator(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ContentValidator>(contentType, isOpen, isEmptiable))) {}
 void ::System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentType, isOpen, isEmptiable);
}
 ::System::Xml::Schema::XmlSchemaContentType ::System::Xml::Schema::ContentValidator::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::Schema::ContentValidator::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator>::get(),
                            "get_IsOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
