#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__TypeSpec__DisplayNameFormat::System__TypeSpec__DisplayNameFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__TypeSpec__DisplayNameFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__TypeSpec__DisplayNameFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__TypeSpec__DisplayNameFormat  System::System__TypeSpec__DisplayNameFormat::Default{0};
constexpr System::System__TypeSpec__DisplayNameFormat  System::System__TypeSpec__DisplayNameFormat::WANT_ASSEMBLY{1};
constexpr System::System__TypeSpec__DisplayNameFormat  System::System__TypeSpec__DisplayNameFormat::NO_MODIFIERS{2};
//  Writing Method size for method: System::TypeSpec.get_HasModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeSpec::*)()>(&System::TypeSpec::get_HasModifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x249973c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "get_HasModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.GetDisplayFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeSpec::*)(System::System__TypeSpec__DisplayNameFormat)>(&System::TypeSpec::GetDisplayFullName)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x249974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "GetDisplayFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__TypeSpec__DisplayNameFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.GetModifierString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (System::TypeSpec::*)(System::Text::StringBuilder)>(&System::TypeSpec::GetModifierString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2499bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "GetModifierString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.get_DisplayFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeSpec::*)()>(&System::TypeSpec::get_DisplayFullName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2499ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "get_DisplayFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeSpec (*)(::StringW)>(&System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2499dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.UnescapeInternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::TypeSpec::UnescapeInternalName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x249aa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "UnescapeInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::TypeSpec::*)(System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>, bool, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::TypeSpec::Resolve)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x249ab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.AddName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeSpec::*)(::StringW)>(&System::TypeSpec::AddName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x249b40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "AddName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.AddModifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeSpec::*)(System::ModifierSpec)>(&System::TypeSpec::AddModifier)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x249b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "AddModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ModifierSpec>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.SkipSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>)>(&System::TypeSpec::SkipSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x249b61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "SkipSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.BoundCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::StringW)>(&System::TypeSpec::BoundCheck)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x249b6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "BoundCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.ParsedTypeIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeIdentifier (*)(::StringW)>(&System::TypeSpec::ParsedTypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249b524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "ParsedTypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeSpec (*)(::StringW, ByRef<int32_t>, bool, bool)>(&System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x2499e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TypeSpec._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TypeSpec::*)()>(&System::TypeSpec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249b754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::TypeSpec::__set_name(System::TypeIdentifier value)  {
::cordl_internals::setInstanceField<System::TypeIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::TypeIdentifier>(value));
}
constexpr System::TypeIdentifier System::TypeSpec::__get_name() const {
return ::cordl_internals::getInstanceField<System::TypeIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_assembly_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::TypeSpec::__get_assembly_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_nested(System::Collections::Generic::List_1<System::TypeIdentifier> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::TypeIdentifier>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::TypeIdentifier>>(value));
}
constexpr System::Collections::Generic::List_1<System::TypeIdentifier> System::TypeSpec::__get_nested() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::TypeIdentifier>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_generic_params(System::Collections::Generic::List_1<System::TypeSpec> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::TypeSpec>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::TypeSpec>>(value));
}
constexpr System::Collections::Generic::List_1<System::TypeSpec> System::TypeSpec::__get_generic_params() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::TypeSpec>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_modifier_spec(System::Collections::Generic::List_1<System::ModifierSpec> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::ModifierSpec>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::ModifierSpec>>(value));
}
constexpr System::Collections::Generic::List_1<System::ModifierSpec> System::TypeSpec::__get_modifier_spec() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::ModifierSpec>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_is_byref(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::TypeSpec::__get_is_byref() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::TypeSpec::__set_display_fullname(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::TypeSpec::__get_display_fullname() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::TypeSpec::get_HasModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "get_HasModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::TypeSpec::GetDisplayFullName(System::System__TypeSpec__DisplayNameFormat flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "GetDisplayFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__TypeSpec__DisplayNameFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 System::Text::StringBuilder System::TypeSpec::GetModifierString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "GetModifierString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 ::StringW System::TypeSpec::get_DisplayFullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "get_DisplayFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TypeSpec System::TypeSpec::Parse(::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeSpec, false>(nullptr, ___internal_method, typeName);
}
 ::StringW System::TypeSpec::UnescapeInternalName(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "UnescapeInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, displayName);
}
 System::Type System::TypeSpec::Resolve(System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly> assemblyResolver, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type> typeResolver, bool throwOnError, bool ignoreCase, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
}
 void System::TypeSpec::AddName(::StringW type_name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "AddName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type_name);
}
 void System::TypeSpec::AddModifier(System::ModifierSpec md)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "AddModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ModifierSpec>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, md);
}
 void System::TypeSpec::SkipSpace(::StringW name, ByRef<int32_t> pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "SkipSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, pos);
}
 void System::TypeSpec::BoundCheck(int32_t idx, ::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "BoundCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, idx, s);
}
 System::TypeIdentifier System::TypeSpec::ParsedTypeIdentifier(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "ParsedTypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeIdentifier, false>(nullptr, ___internal_method, displayName);
}
 System::TypeSpec System::TypeSpec::Parse(::StringW name, ByRef<int32_t> p, bool is_recurse, bool allow_aqn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeSpec, false>(nullptr, ___internal_method, name, p, is_recurse, allow_aqn);
}
 System::TypeSpec System::TypeSpec::New_ctor()  {
System::TypeSpec o{THROW_UNLESS(::il2cpp_utils::New<System::TypeSpec>())};
return o;
}
 void System::TypeSpec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeSpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
