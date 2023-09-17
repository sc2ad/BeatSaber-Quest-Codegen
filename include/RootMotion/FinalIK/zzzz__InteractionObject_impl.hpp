#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::*)(::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::Activate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x11f9bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fb454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_pause(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_pause() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_pickUp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_pickUp() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_animations(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent> ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_animations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_messages(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message> ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_messages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__set_unityEvent(::UnityEngine::Events::UnityEvent value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Events::UnityEvent>(value));
}
constexpr ::UnityEngine::Events::UnityEvent ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::__get_unityEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::Activate(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::____RootMotion__FinalIK__InteractionObject__InteractionEvent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionObject__InteractionEvent>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::*)(::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::Send)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x11fb35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fb45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::__set_function(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::__get_function() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::__set_recipient(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::__get_recipient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::Send(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::____RootMotion__FinalIK__InteractionObject__Message()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionObject__Message>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::*)(bool)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11fb280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animator)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x11fb464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animation)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11fb514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11fb5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_animator(::UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Animator>(value));
}
constexpr ::UnityEngine::Animator ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_animation(::UnityEngine::Animation value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Animation>(value));
}
constexpr ::UnityEngine::Animation ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_animation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_animationState(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_animationState() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_crossfadeTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_crossfadeTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_layer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_layer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__set_resetNormalizedTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::__get_resetNormalizedTime() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate(bool pickUp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pickUp);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animator animator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animator);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animation animation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animation);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::____RootMotion__FinalIK__InteractionObject__AnimatorEvent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionObject__AnimatorEvent>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__AnimatorEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PositionWeight{0};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::RotationWeight{1};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PositionOffsetX{2};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PositionOffsetY{3};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PositionOffsetZ{4};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::Pull{5};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::Reach{6};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::RotateBoneWeight{7};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::Push{8};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PushParent{9};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::PoserWeight{10};
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type  ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type::BendGoalWeight{11};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::*)(float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::GetValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11fab90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fb600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::__set_type(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::__set_curve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::__get_curve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::GetValue(float_t timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, timer);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::____RootMotion__FinalIK__InteractionObject__WeightCurve()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionObject__WeightCurve>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::*)(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve, float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::GetValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11fb198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11fb608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__set_curve(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__get_curve() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__set_multiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__get_multiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__set_result(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::__get_result() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::GetValue(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve weightCurve, float_t timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, weightCurve, timer);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::____RootMotion__FinalIK__InteractionObject__Multiplier()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionObject__Multiplier>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fa6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fa6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(float_t)>(&::RootMotion::FinalIK::InteractionObject::set_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fa700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "set_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lastUsedInteractionSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionSystem (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fa708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_lastUsedInteractionSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem)>(&::RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fa710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "set_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Initiate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x11fa718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lookAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_lookAtTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11fa8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_lookAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionTarget (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionSystem)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x11fa948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.CurveUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::CurveUsed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11f8490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "CurveUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTargets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionTarget> (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::GetTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11faac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTargets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::StringW)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x11f834c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OnStartInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem)>(&::RootMotion::FinalIK::InteractionObject::OnStartInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11f8488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OnStartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionTarget, float_t, float_t)>(&::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x11f9008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, ::RootMotion::FinalIK::InteractionTarget, float_t)>(&::RootMotion::FinalIK::InteractionObject::GetValue)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x11f9848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_targetsRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_targetsRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11f9c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_targetsRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11fb1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped, ::RootMotion::FinalIK::FullBodyBipedEffector, ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type, float_t, float_t)>(&::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x11fabac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11faac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetWeightCurveIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11fb13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetWeightCurveIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetMultiplierIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::GetMultiplierIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11fb1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetMultiplierIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11fb228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_otherLookAtTarget(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::__get_otherLookAtTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_otherTargetsRoot(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::__get_otherTargetsRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_positionOffsetSpace(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::__get_positionOffsetSpace() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_weightCurves(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve> ::RootMotion::FinalIK::InteractionObject::__get_weightCurves() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__WeightCurve>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_multipliers(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier> ::RootMotion::FinalIK::InteractionObject::__get_multipliers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__Multiplier>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_events(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent> ::RootMotion::FinalIK::InteractionObject::__get_events() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set__length_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::InteractionObject::__get__length_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set__lastUsedInteractionSystem_k__BackingField(::RootMotion::FinalIK::InteractionSystem value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::InteractionSystem, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::InteractionSystem>(value));
}
constexpr ::RootMotion::FinalIK::InteractionSystem ::RootMotion::FinalIK::InteractionObject::__get__lastUsedInteractionSystem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::InteractionSystem, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionObject::__set_targets(::ArrayW<::RootMotion::FinalIK::InteractionTarget> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionTarget>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::InteractionTarget>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionTarget> ::RootMotion::FinalIK::InteractionObject::__get_targets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionTarget>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenTutorial1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenTutorial2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenTutorial3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::OpenTutorial4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::RootMotion::FinalIK::InteractionObject::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::set_length(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "set_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::RootMotion::FinalIK::InteractionSystem ::RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionSystem, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem(::RootMotion::FinalIK::InteractionSystem value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "set_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::RootMotion::FinalIK::InteractionObject::Initiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::get_lookAtTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_lookAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::InteractionTarget ::RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionSystem interactionSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionTarget, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionSystem);
}
 bool ::RootMotion::FinalIK::InteractionObject::CurveUsed(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "CurveUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::ArrayW<::RootMotion::FinalIK::InteractionTarget> ::RootMotion::FinalIK::InteractionObject::GetTargets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTargets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionTarget>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::StringW tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method, effectorType, tag);
}
 void ::RootMotion::FinalIK::InteractionObject::OnStartInteraction(::RootMotion::FinalIK::InteractionSystem interactionSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "OnStartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, interactionSystem);
}
 void ::RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionTarget target, float_t timer, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, effector, target, timer, weight);
}
 float_t ::RootMotion::FinalIK::InteractionObject::GetValue(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType, ::RootMotion::FinalIK::InteractionTarget target, float_t timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, weightCurveType, target, timer);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::get_targetsRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "get_targetsRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type type, float_t value, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, effector, type, value, weight);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 int32_t ::RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetWeightCurveIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, weightCurveType);
}
 int32_t ::RootMotion::FinalIK::InteractionObject::GetMultiplierIndex(::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            "GetMultiplierIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______RootMotion__FinalIK__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, weightCurveType);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::InteractionObject::InteractionObject()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<InteractionObject>())) {}
 void ::RootMotion::FinalIK::InteractionObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
