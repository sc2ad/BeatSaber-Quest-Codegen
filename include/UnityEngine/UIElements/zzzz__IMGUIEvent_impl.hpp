#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__IMGUIEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIEvent.GetPooled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IMGUIEvent (*)(::UnityEngine::Event)>(&::UnityEngine::UIElements::IMGUIEvent::GetPooled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cd26f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIEvent.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIEvent::*)()>(&::UnityEngine::UIElements::IMGUIEvent::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cd2828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::IMGUIEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIEvent.LocalInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIEvent::*)()>(&::UnityEngine::UIElements::IMGUIEvent::LocalInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cd287c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIEvent::*)()>(&::UnityEngine::UIElements::IMGUIEvent::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cd2888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::UIElements::IMGUIEvent ::UnityEngine::UIElements::IMGUIEvent::GetPooled(::UnityEngine::Event systemEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMGUIEvent, false>(nullptr, ___internal_method, systemEvent);
}
 void ::UnityEngine::UIElements::IMGUIEvent::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::IMGUIEvent::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::IMGUIEvent::IMGUIEvent()  : ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMGUIEvent>(THROW_UNLESS(::il2cpp_utils::New<IMGUIEvent>())) {}
 void ::UnityEngine::UIElements::IMGUIEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
