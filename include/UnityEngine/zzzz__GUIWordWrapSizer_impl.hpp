#pragma once
#include "UnityEngine/zzzz__GUILayoutEntry_impl.hpp"
#include "UnityEngine/zzzz__GUIWordWrapSizer_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
//  Writing Method size for method: UnityEngine::GUIWordWrapSizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIWordWrapSizer::*)(UnityEngine::GUIStyle, UnityEngine::GUIContent, ::ArrayW<UnityEngine::GUILayoutOption>)>(&UnityEngine::GUIWordWrapSizer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b83dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GUIStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GUIContent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GUILayoutOption>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::GUIWordWrapSizer.CalcWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIWordWrapSizer::*)()>(&UnityEngine::GUIWordWrapSizer::CalcWidth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b83f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::GUIWordWrapSizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::GUIWordWrapSizer.CalcHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIWordWrapSizer::*)()>(&UnityEngine::GUIWordWrapSizer::CalcHeight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b83fd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::GUIWordWrapSizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_Content(UnityEngine::GUIContent value)  {
::cordl_internals::setInstanceField<UnityEngine::GUIContent, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GUIContent>(value));
}
constexpr UnityEngine::GUIContent UnityEngine::GUIWordWrapSizer::__get_m_Content() const {
return ::cordl_internals::getInstanceField<UnityEngine::GUIContent, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_ForcedMinHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::GUIWordWrapSizer::__get_m_ForcedMinHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_ForcedMaxHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::GUIWordWrapSizer::__get_m_ForcedMaxHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::GUIWordWrapSizer UnityEngine::GUIWordWrapSizer::New_ctor(UnityEngine::GUIStyle style, UnityEngine::GUIContent content, ::ArrayW<UnityEngine::GUILayoutOption> options)  {
UnityEngine::GUIWordWrapSizer o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::GUIWordWrapSizer>(style, content, options))};
return o;
}
 void UnityEngine::GUIWordWrapSizer::_ctor(UnityEngine::GUIStyle style, UnityEngine::GUIContent content, ::ArrayW<UnityEngine::GUILayoutOption> options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GUIStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GUIContent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GUILayoutOption>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, style, content, options);
}
 void UnityEngine::GUIWordWrapSizer::CalcWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                            "CalcWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::GUIWordWrapSizer::CalcHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUIWordWrapSizer>::get(),
                            "CalcHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
