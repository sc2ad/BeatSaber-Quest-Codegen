#pragma once
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleMatchingContext.get_styleSheetCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleMatchingContext::*)()>(&UnityEngine::UIElements::StyleMatchingContext::get_styleSheetCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c4905c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "get_styleSheetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleMatchingContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleMatchingContext::*)(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>)>(&UnityEngine::UIElements::StyleMatchingContext::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c490a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleMatchingContext.AddStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleMatchingContext::*)(UnityEngine::UIElements::StyleSheet)>(&UnityEngine::UIElements::StyleMatchingContext::AddStyleSheet)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c49168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "AddStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleMatchingContext.RemoveStyleSheetRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleMatchingContext::*)(int32_t, int32_t)>(&UnityEngine::UIElements::StyleMatchingContext::RemoveStyleSheetRange)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c49254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "RemoveStyleSheetRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleMatchingContext.GetStyleSheetAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::StyleSheet (UnityEngine::UIElements::StyleMatchingContext::*)(int32_t)>(&UnityEngine::UIElements::StyleMatchingContext::GetStyleSheetAt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c492bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "GetStyleSheetAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_m_StyleSheetStack(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheet> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheet>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheet>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheet> UnityEngine::UIElements::StyleMatchingContext::__get_m_StyleSheetStack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheet>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_variableContext(UnityEngine::UIElements::StyleVariableContext value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleVariableContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::StyleVariableContext>(value));
}
constexpr UnityEngine::UIElements::StyleVariableContext UnityEngine::UIElements::StyleMatchingContext::__get_variableContext() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleVariableContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_currentElement(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::StyleMatchingContext::__get_currentElement() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_processResult(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>>(value));
}
constexpr System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> UnityEngine::UIElements::StyleMatchingContext::__get_processResult() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t UnityEngine::UIElements::StyleMatchingContext::get_styleSheetCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "get_styleSheetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "processResult", ty: "System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>", modifiers: "", def_value: None }]
 UnityEngine::UIElements::StyleMatchingContext::StyleMatchingContext(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> processResult)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StyleMatchingContext>(processResult))) {}
 void UnityEngine::UIElements::StyleMatchingContext::_ctor(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo> processResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::StyleSheets::MatchResultInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, processResult);
}
 void UnityEngine::UIElements::StyleMatchingContext::AddStyleSheet(UnityEngine::UIElements::StyleSheet sheet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "AddStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sheet);
}
 void UnityEngine::UIElements::StyleMatchingContext::RemoveStyleSheetRange(int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "RemoveStyleSheetRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, count);
}
 UnityEngine::UIElements::StyleSheet UnityEngine::UIElements::StyleMatchingContext::GetStyleSheetAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleMatchingContext>::get(),
                            "GetStyleSheetAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StyleSheet, false>(const_cast<void*>(instance), ___internal_method, index);
}
