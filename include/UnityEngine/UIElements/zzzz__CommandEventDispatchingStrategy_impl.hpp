#pragma once
#include "UnityEngine/UIElements/zzzz__CommandEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::CommandEventDispatchingStrategy.CanDispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::CommandEventDispatchingStrategy::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::CommandEventDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cdbf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::CommandEventDispatchingStrategy.DispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CommandEventDispatchingStrategy::*)(UnityEngine::UIElements::EventBase, UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::CommandEventDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2cdbf94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::CommandEventDispatchingStrategy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CommandEventDispatchingStrategy::*)()>(&UnityEngine::UIElements::CommandEventDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdc2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr  UnityEngine::UIElements::CommandEventDispatchingStrategy::operator UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept {
return UnityEngine::UIElements::IEventDispatchingStrategy(::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::CommandEventDispatchingStrategy::CanDispatchEvent(UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::CommandEventDispatchingStrategy::DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, panel);
}
// Ctor Parameters []
 UnityEngine::UIElements::CommandEventDispatchingStrategy::CommandEventDispatchingStrategy()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CommandEventDispatchingStrategy>())) {}
 void UnityEngine::UIElements::CommandEventDispatchingStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CommandEventDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
