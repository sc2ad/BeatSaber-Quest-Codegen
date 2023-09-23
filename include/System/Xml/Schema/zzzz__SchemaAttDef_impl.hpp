#pragma once
#include "System/Xml/Schema/zzzz__SchemaDeclBase_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::System__Xml__Schema__SchemaAttDef__Reserve(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve  System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::None{0};
constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve  System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::XmlSpace{1};
constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve  System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve::XmlLang{2};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(System::Xml::XmlQualifiedName, ::StringW)>(&System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27309ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2730a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2730ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LocalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2730b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LocalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_LinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsNonCDataType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2730bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsNonCDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdAttributeInfo_get_IsXmlAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2730c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2730c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_LinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_LinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&System::Xml::Schema::SchemaAttDef::set_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_LineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_LineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&System::Xml::Schema::SchemaAttDef::set_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_ValueLinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_ValueLinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&System::Xml::Schema::SchemaAttDef::set_ValueLinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_ValueLineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_ValueLineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(int32_t)>(&System::Xml::Schema::SchemaAttDef::set_ValueLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_DefaultValueExpanded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x272ceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_DefaultValueExpanded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(::StringW)>(&System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_TokenizedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlTokenizedType (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_TokenizedType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2730be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_TokenizedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_TokenizedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(System::Xml::XmlTokenizedType)>(&System::Xml::Schema::SchemaAttDef::set_TokenizedType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2730cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_TokenizedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlTokenizedType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.get_Reserved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve (System::Xml::Schema::SchemaAttDef::*)()>(&System::Xml::Schema::SchemaAttDef::get_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_Reserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.set_Reserved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve)>(&System::Xml::Schema::SchemaAttDef::set_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_Reserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SchemaAttDef.CheckXmlSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaAttDef::*)(System::Xml::IValidationEventHandling)>(&System::Xml::Schema::SchemaAttDef::CheckXmlSpace)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2730d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "CheckXmlSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IValidationEventHandling>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IDtdDefaultAttributeInfo
constexpr  System::Xml::Schema::SchemaAttDef::operator System::Xml::IDtdDefaultAttributeInfo() const noexcept {
return System::Xml::IDtdDefaultAttributeInfo(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Xml::IDtdAttributeInfo
constexpr  System::Xml::Schema::SchemaAttDef::operator System::Xml::IDtdAttributeInfo() const noexcept {
return System::Xml::IDtdAttributeInfo(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_defExpanded(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Schema::SchemaAttDef::__get_defExpanded() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_lineNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::SchemaAttDef::__get_lineNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_linePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::SchemaAttDef::__get_linePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_valueLineNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::SchemaAttDef::__get_valueLineNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_valueLinePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::SchemaAttDef::__get_valueLinePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::SchemaAttDef::__set_reserved(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve>(value));
}
constexpr System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve System::Xml::Schema::SchemaAttDef::__get_reserved() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Xml::Schema::SchemaAttDef::__set_Empty(System::Xml::Schema::SchemaAttDef value)  {
::cordl_internals::setStaticField<System::Xml::Schema::SchemaAttDef, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get>(std::forward<System::Xml::Schema::SchemaAttDef>(value));
}
 System::Xml::Schema::SchemaAttDef System::Xml::Schema::SchemaAttDef::__get_Empty()  {
return ::cordl_internals::getStaticField<System::Xml::Schema::SchemaAttDef, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get>();
}
// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::XmlQualifiedName", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }]
 System::Xml::Schema::SchemaAttDef::SchemaAttDef(System::Xml::XmlQualifiedName name, ::StringW prefix)  : System::Xml::Schema::SchemaDeclBase(THROW_UNLESS(::il2cpp_utils::New<SchemaAttDef>(name, prefix))) {}
 void System::Xml::Schema::SchemaAttDef::_ctor(System::Xml::XmlQualifiedName name, ::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, prefix);
}
// Ctor Parameters []
 System::Xml::Schema::SchemaAttDef::SchemaAttDef()  : System::Xml::Schema::SchemaDeclBase(THROW_UNLESS(::il2cpp_utils::New<SchemaAttDef>())) {}
 void System::Xml::Schema::SchemaAttDef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LocalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LocalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsNonCDataType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsNonCDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Schema::SchemaAttDef::System_Xml_IDtdAttributeInfo_get_IsXmlAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdAttributeInfo.get_IsXmlAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::SchemaAttDef::System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::SchemaAttDef::get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_LinePosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Xml::Schema::SchemaAttDef::get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_LineNumber(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Xml::Schema::SchemaAttDef::get_ValueLinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_ValueLinePosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_ValueLinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Xml::Schema::SchemaAttDef::get_ValueLineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_ValueLineNumber(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_ValueLineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Xml::Schema::SchemaAttDef::get_DefaultValueExpanded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_DefaultValueExpanded(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_DefaultValueExpanded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Xml::XmlTokenizedType System::Xml::Schema::SchemaAttDef::get_TokenizedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_TokenizedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlTokenizedType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_TokenizedType(System::Xml::XmlTokenizedType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_TokenizedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlTokenizedType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve System::Xml::Schema::SchemaAttDef::get_Reserved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "get_Reserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SchemaAttDef::set_Reserved(System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "set_Reserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::System__Xml__Schema__SchemaAttDef__Reserve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::Schema::SchemaAttDef::CheckXmlSpace(System::Xml::IValidationEventHandling validationEventHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SchemaAttDef>::get(),
                            "CheckXmlSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IValidationEventHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, validationEventHandling);
}
