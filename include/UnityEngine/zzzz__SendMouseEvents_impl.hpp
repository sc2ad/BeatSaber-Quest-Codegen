#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__SendMouseEvents_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo.SendMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::*)(::StringW)>(&::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::SendMessage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b9790c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo.op_Implicit_bool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo)>(&::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b9786c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo)>(&::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b97930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::GameObject", modifiers: "", def_value: Some("csnull") }, CppParam { name: "camera", ty: "::UnityEngine::Camera", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::____UnityEngine__SendMouseEvents__HitInfo(::UnityEngine::GameObject target, ::UnityEngine::Camera camera) noexcept : ::bs_hook::ValueTypeWrapper() {this->target = target;
this->camera = camera;
}
constexpr void ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::__set_target(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x0>(this->__instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::__set_camera(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x8>(this->__instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::__get_camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x8>(this->__instance);
}
 void ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::SendMessage(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 bool ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::op_Implicit_bool(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo exists)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exists);
}
 bool ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo::Compare(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo lhs, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.UpdateMouse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::UpdateMouse)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2b968e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "UpdateMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SetMouseMoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::SetMouseMoved)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b96aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "SetMouseMoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.DoSendMouseEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::SendMouseEvents::DoSendMouseEvents)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x2b96b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "DoSendMouseEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SendEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo)>(&::UnityEngine::SendMouseEvents::SendEvents)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2b9744c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::SendMouseEvents::__set_s_MouseUsed(bool value)  {
::cordl_internals::setStaticField<bool, "s_MouseUsed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<bool>(value));
}
 bool ::UnityEngine::SendMouseEvents::__get_s_MouseUsed()  {
return ::cordl_internals::getStaticField<bool, "s_MouseUsed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_m_LastHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_LastHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>>(value));
}
 ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> ::UnityEngine::SendMouseEvents::__get_m_LastHit()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_LastHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_m_MouseDownHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_MouseDownHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>>(value));
}
 ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> ::UnityEngine::SendMouseEvents::__get_m_MouseDownHit()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_MouseDownHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_m_CurrentHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_CurrentHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>>(value));
}
 ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> ::UnityEngine::SendMouseEvents::__get_m_CurrentHit()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>, "m_CurrentHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_m_Cameras(::ArrayW<::UnityEngine::Camera> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Camera>, "m_Cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::ArrayW<::UnityEngine::Camera>>(value));
}
 ::ArrayW<::UnityEngine::Camera> ::UnityEngine::SendMouseEvents::__get_m_Cameras()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Camera>, "m_Cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>, "s_GetMouseState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>>(value));
}
 ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> ::UnityEngine::SendMouseEvents::__get_s_GetMouseState()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>, "s_GetMouseState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_s_MousePosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_MousePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<::UnityEngine::Vector2>(value));
}
 ::UnityEngine::Vector2 ::UnityEngine::SendMouseEvents::__get_s_MousePosition()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_MousePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_s_MouseButtonPressedThisFrame(bool value)  {
::cordl_internals::setStaticField<bool, "s_MouseButtonPressedThisFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<bool>(value));
}
 bool ::UnityEngine::SendMouseEvents::__get_s_MouseButtonPressedThisFrame()  {
return ::cordl_internals::getStaticField<bool, "s_MouseButtonPressedThisFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::__set_s_MouseButtonIsPressed(bool value)  {
::cordl_internals::setStaticField<bool, "s_MouseButtonIsPressed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>(std::forward<bool>(value));
}
 bool ::UnityEngine::SendMouseEvents::__get_s_MouseButtonIsPressed()  {
return ::cordl_internals::getStaticField<bool, "s_MouseButtonIsPressed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get>();
}
 void ::UnityEngine::SendMouseEvents::UpdateMouse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "UpdateMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::SendMouseEvents::SetMouseMoved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "SetMouseMoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::SendMouseEvents::DoSendMouseEvents(int32_t skipRTCameras)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "DoSendMouseEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, skipRTCameras);
}
 void ::UnityEngine::SendMouseEvents::SendEvents(int32_t i, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo hit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i, hit);
}
} // end anonymous namespace
