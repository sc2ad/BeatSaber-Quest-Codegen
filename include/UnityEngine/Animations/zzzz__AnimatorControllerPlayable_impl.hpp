#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimatorControllerPlayable::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b212d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimatorControllerPlayable::*)()>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b21450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetHandle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b21348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "SetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Animations::AnimatorControllerPlayable)>(&::UnityEngine::Animations::AnimatorControllerPlayable::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b2145c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimatorControllerPlayable>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::IPlayable
constexpr  ::UnityEngine::Animations::AnimatorControllerPlayable::operator ::UnityEngine::Playables::IPlayable() const {
return ::UnityEngine::Playables::IPlayable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>
constexpr  ::UnityEngine::Animations::AnimatorControllerPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>() const {
return ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimatorControllerPlayable::AnimatorControllerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void ::UnityEngine::Animations::AnimatorControllerPlayable::__set_m_Handle(::UnityEngine::Playables::PlayableHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance, std::forward<::UnityEngine::Playables::PlayableHandle>(value));
}
constexpr ::UnityEngine::Playables::PlayableHandle ::UnityEngine::Animations::AnimatorControllerPlayable::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance);
}
 void ::UnityEngine::Animations::AnimatorControllerPlayable::__set_m_NullPlayable(::UnityEngine::Animations::AnimatorControllerPlayable value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimatorControllerPlayable, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get>(std::forward<::UnityEngine::Animations::AnimatorControllerPlayable>(value));
}
 ::UnityEngine::Animations::AnimatorControllerPlayable ::UnityEngine::Animations::AnimatorControllerPlayable::__get_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimatorControllerPlayable, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get>();
}
 void ::UnityEngine::Animations::AnimatorControllerPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 ::UnityEngine::Playables::PlayableHandle ::UnityEngine::Animations::AnimatorControllerPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::Animations::AnimatorControllerPlayable::SetHandle(::UnityEngine::Playables::PlayableHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "SetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 bool ::UnityEngine::Animations::AnimatorControllerPlayable::Equals(::UnityEngine::Animations::AnimatorControllerPlayable other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::AnimatorControllerPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimatorControllerPlayable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
} // end anonymous namespace
