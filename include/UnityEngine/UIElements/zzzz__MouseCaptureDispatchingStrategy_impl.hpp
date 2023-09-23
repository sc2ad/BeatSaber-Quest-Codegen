#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior  UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior  UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::IsCapturable{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior  UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior::IsSentExclusivelyToCapturingElement{2};
//  Writing Method size for method: UnityEngine::UIElements::MouseCaptureDispatchingStrategy.CanDispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::MouseCaptureDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd5e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MouseCaptureDispatchingStrategy.DispatchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)(UnityEngine::UIElements::EventBase, UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::MouseCaptureDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x2cd5ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MouseCaptureDispatchingStrategy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)()>(&UnityEngine::UIElements::MouseCaptureDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd65b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr  UnityEngine::UIElements::MouseCaptureDispatchingStrategy::operator UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept {
return UnityEngine::UIElements::IEventDispatchingStrategy(::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::MouseCaptureDispatchingStrategy::CanDispatchEvent(UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            "CanDispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::MouseCaptureDispatchingStrategy::DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            "DispatchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, panel);
}
// Ctor Parameters []
 UnityEngine::UIElements::MouseCaptureDispatchingStrategy::MouseCaptureDispatchingStrategy()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MouseCaptureDispatchingStrategy>())) {}
 void UnityEngine::UIElements::MouseCaptureDispatchingStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseCaptureDispatchingStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
