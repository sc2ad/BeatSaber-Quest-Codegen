#pragma once
#include "UnityEngine/UIElements/zzzz__DefaultDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DefaultDispatchingStrategy.CanDispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::DefaultDispatchingStrategy::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::DefaultDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cd59d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DefaultDispatchingStrategy.DispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDispatchingStrategy::*)(UnityEngine::UIElements::EventBase, UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::DefaultDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2cd5a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DefaultDispatchingStrategy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultDispatchingStrategy::*)()>(&UnityEngine::UIElements::DefaultDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd5c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr  UnityEngine::UIElements::DefaultDispatchingStrategy::operator UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept {
return UnityEngine::UIElements::IEventDispatchingStrategy(::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::DefaultDispatchingStrategy::CanDispatchEvent(UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::DefaultDispatchingStrategy::DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, panel);
}
// Ctor Parameters []
 UnityEngine::UIElements::DefaultDispatchingStrategy::DefaultDispatchingStrategy()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultDispatchingStrategy>())) {}
 void UnityEngine::UIElements::DefaultDispatchingStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DefaultDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
