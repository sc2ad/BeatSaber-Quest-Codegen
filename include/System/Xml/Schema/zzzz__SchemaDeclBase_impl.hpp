#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::____System__Xml__Schema__SchemaDeclBase__Use(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use  ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::Default{0};
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use  ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::Required{1};
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use  ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::Implied{2};
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use  ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::Fixed{3};
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use  ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use::RequiredFixed{4};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::XmlQualifiedName, ::StringW)>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27309f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2730a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2731018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Prefix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2730b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_IsDeclaredInExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2731020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_IsDeclaredInExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(bool)>(&::System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2731028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Presence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2731034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Presence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use)>(&::System::Xml::Schema::SchemaDeclBase::set_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273103c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_SchemaType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaType)>(&::System::Xml::Schema::SchemaDeclBase::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2731044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Datatype
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273104c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Datatype
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaDatatype)>(&::System::Xml::Schema::SchemaDeclBase::set_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2731054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::AddValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x273105c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW> (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273114c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2731154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_DefaultValueRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27311a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_DefaultValueTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::bs_hook::Il2CppWrapperType)>(&::System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27311b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_name(::System::Xml::XmlQualifiedName value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlQualifiedName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlQualifiedName>(value));
}
constexpr ::System::Xml::XmlQualifiedName ::System::Xml::Schema::SchemaDeclBase::__get_name() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::Schema::SchemaDeclBase::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_isDeclaredInExternal(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Xml::Schema::SchemaDeclBase::__get_isDeclaredInExternal() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_presence(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use>(value));
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use ::System::Xml::Schema::SchemaDeclBase::__get_presence() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_schemaType(::System::Xml::Schema::XmlSchemaType value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaType>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaType ::System::Xml::Schema::SchemaDeclBase::__get_schemaType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_datatype(::System::Xml::Schema::XmlSchemaDatatype value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaDatatype, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaDatatype>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype ::System::Xml::Schema::SchemaDeclBase::__get_datatype() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaDatatype, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_defaultValueRaw(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::Schema::SchemaDeclBase::__get_defaultValueRaw() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_defaultValueTyped(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::SchemaDeclBase::__get_defaultValueTyped() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_maxLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Xml::Schema::SchemaDeclBase::__get_maxLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_minLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Xml::Schema::SchemaDeclBase::__get_minLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::SchemaDeclBase::__set_values(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::System::Xml::Schema::SchemaDeclBase::__get_values() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::System::Xml::XmlQualifiedName", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Xml::Schema::SchemaDeclBase::SchemaDeclBase(::System::Xml::XmlQualifiedName name, ::StringW prefix)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SchemaDeclBase>(name, prefix))) {}
 void ::System::Xml::Schema::SchemaDeclBase::_ctor(::System::Xml::XmlQualifiedName name, ::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, prefix);
}
// Ctor Parameters []
 ::System::Xml::Schema::SchemaDeclBase::SchemaDeclBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SchemaDeclBase>())) {}
 void ::System::Xml::Schema::SchemaDeclBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Xml::XmlQualifiedName ::System::Xml::Schema::SchemaDeclBase::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Xml::Schema::SchemaDeclBase::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use ::System::Xml::Schema::SchemaDeclBase::get_Presence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::SchemaDeclBase::set_Presence(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Xml::Schema::SchemaDeclBase::set_SchemaType(::System::Xml::Schema::XmlSchemaType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Xml::Schema::XmlSchemaDatatype ::System::Xml::Schema::SchemaDeclBase::get_Datatype()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::SchemaDeclBase::set_Datatype(::System::Xml::Schema::XmlSchemaDatatype value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Xml::Schema::SchemaDeclBase::AddValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::StringW> ::System::Xml::Schema::SchemaDeclBase::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_DefaultValueRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase>::get(),
                            "set_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
