#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICustomStyle_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::CustomStyleResolvedEvent.get_customStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ICustomStyle (UnityEngine::UIElements::CustomStyleResolvedEvent::*)()>(&UnityEngine::UIElements::CustomStyleResolvedEvent::get_customStyle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cce128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CustomStyleResolvedEvent>::get(),
                            "get_customStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::CustomStyleResolvedEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CustomStyleResolvedEvent::*)()>(&UnityEngine::UIElements::CustomStyleResolvedEvent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cd9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CustomStyleResolvedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::ICustomStyle UnityEngine::UIElements::CustomStyleResolvedEvent::get_customStyle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CustomStyleResolvedEvent>::get(),
                            "get_customStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ICustomStyle, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::CustomStyleResolvedEvent UnityEngine::UIElements::CustomStyleResolvedEvent::New_ctor()  {
UnityEngine::UIElements::CustomStyleResolvedEvent o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::CustomStyleResolvedEvent>())};
return o;
}
 void UnityEngine::UIElements::CustomStyleResolvedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CustomStyleResolvedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
