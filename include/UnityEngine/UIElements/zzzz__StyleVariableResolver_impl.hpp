#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxParser_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValueMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::____UnityEngine__UIElements__StyleVariableResolver__Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result  ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::Valid{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result  ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::Invalid{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result  ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result::NotFound{2};
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext(::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) noexcept : ::bs_hook::ValueTypeWrapper() {this->sheet = sheet;
this->handles = handles;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext::__set_sheet(::UnityEngine::UIElements::StyleSheet value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheet>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext::__set_handles(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext::__get_handles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, 0x8>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheet (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_currentSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf2cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_currentSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle> (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_currentHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf2cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_currentHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_resolvedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf2cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_resolvedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_variableContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleVariableContext (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf2d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_variableContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.set_variableContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleVariableContext)>(&::UnityEngine::UIElements::StyleVariableResolver::set_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf2d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "set_variableContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleProperty, ::UnityEngine::UIElements::StyleSheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariableResolver::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf2d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PushContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleSheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariableResolver::PushContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cf2dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "PushContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PopContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::PopContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cf2e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "PopContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleVariableResolver::AddValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cf2eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)(ByRef<int32_t>)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2cf2f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(ByRef<int32_t>, int32_t, ::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2cf30d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ValidateResolvedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2cf3734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ValidateResolvedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVariable)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2cf3230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(ByRef<int32_t>)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveFallback)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2cf34b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ParseVarFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::StyleSheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, ByRef<int32_t>, ByRef<int32_t>, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf3024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ParseVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cf39fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::StyleVariableResolver::__set_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, "s_SyntaxParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get>(std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser>(value));
}
 ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser ::UnityEngine::UIElements::StyleVariableResolver::__get_s_SyntaxParser()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, "s_SyntaxParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get>();
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher ::UnityEngine::UIElements::StyleVariableResolver::__get_m_Matcher() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> ::UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::StringW> ::UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedVarStack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_Property(::UnityEngine::UIElements::StyleProperty value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleProperty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleProperty>(value));
}
constexpr ::UnityEngine::UIElements::StyleProperty ::UnityEngine::UIElements::StyleVariableResolver::__get_m_Property() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleProperty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> ::UnityEngine::UIElements::StyleVariableResolver::__get_m_ContextStack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set_m_CurrentContext(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext ::UnityEngine::UIElements::StyleVariableResolver::__get_m_CurrentContext() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleVariableResolver::__set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleVariableContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleVariableContext>(value));
}
constexpr ::UnityEngine::UIElements::StyleVariableContext ::UnityEngine::UIElements::StyleVariableResolver::__get__variableContext_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleVariableContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::StyleSheet ::UnityEngine::UIElements::StyleVariableResolver::get_currentSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_currentSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheet, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> ::UnityEngine::UIElements::StyleVariableResolver::get_currentHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_currentHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue> ::UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_resolvedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::StyleVariableContext ::UnityEngine::UIElements::StyleVariableResolver::get_variableContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "get_variableContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleVariableContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::set_variableContext(::UnityEngine::UIElements::StyleVariableContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "set_variableContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::Init(::UnityEngine::UIElements::StyleProperty property, ::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, property, sheet, handles);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::PushContext(::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "PushContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sheet, handles);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::PopContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "PopContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::AddValue(::UnityEngine::UIElements::StyleValueHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle);
}
 bool ::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result ::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(ByRef<int32_t> index, int32_t argc, ::StringW varName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result, false>(const_cast<void*>(instance), ___internal_method, index, argc, varName);
}
 bool ::UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ValidateResolvedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result ::UnityEngine::UIElements::StyleVariableResolver::ResolveVariable(::StringW variableName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result, false>(const_cast<void*>(instance), ___internal_method, variableName);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result ::UnityEngine::UIElements::StyleVariableResolver::ResolveFallback(ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ResolveFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__Result, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void ::UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction(::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles, ByRef<int32_t> index, ByRef<int32_t> argCount, ByRef<::StringW> variableName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            "ParseVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sheet, handles, index, argCount, variableName);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::StyleVariableResolver::StyleVariableResolver()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StyleVariableResolver>())) {}
 void ::UnityEngine::UIElements::StyleVariableResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
