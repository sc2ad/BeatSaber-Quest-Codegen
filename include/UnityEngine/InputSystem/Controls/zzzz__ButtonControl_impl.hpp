#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl.get_pressPointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29775f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&UnityEngine::InputSystem::Controls::ButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2977088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl.IsValueConsideredPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::ButtonControl::*)(float_t)>(&UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x297765c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "IsValueConsideredPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl.get_isPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29776c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl.get_wasPressedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2977768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_wasPressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::ButtonControl.get_wasReleasedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2977888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_wasReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__set_pressPoint(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Controls::ButtonControl::__get_pressPoint() const {
return ::cordl_internals::getInstanceField<float_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::Controls::ButtonControl::__set_s_GlobalDefaultButtonPressPoint(float_t value)  {
::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonPressPoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get>(std::forward<float_t>(value));
}
 float_t UnityEngine::InputSystem::Controls::ButtonControl::__get_s_GlobalDefaultButtonPressPoint()  {
return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonPressPoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get>();
}
 void UnityEngine::InputSystem::Controls::ButtonControl::__set_s_GlobalDefaultButtonReleaseThreshold(float_t value)  {
::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get>(std::forward<float_t>(value));
}
 float_t UnityEngine::InputSystem::Controls::ButtonControl::__get_s_GlobalDefaultButtonReleaseThreshold()  {
return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get>();
}
 float_t UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Controls::ButtonControl::New_ctor()  {
UnityEngine::InputSystem::Controls::ButtonControl o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Controls::ButtonControl>())};
return o;
}
 void UnityEngine::InputSystem::Controls::ButtonControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "IsValueConsideredPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_wasPressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::ButtonControl>::get(),
                            "get_wasReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
