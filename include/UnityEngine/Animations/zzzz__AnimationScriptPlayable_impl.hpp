#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: UnityEngine::Animations::AnimationScriptPlayable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationScriptPlayable::*)(UnityEngine::Playables::PlayableHandle)>(&UnityEngine::Animations::AnimationScriptPlayable::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b21b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Animations::AnimationScriptPlayable.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationScriptPlayable::*)()>(&UnityEngine::Animations::AnimationScriptPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b21c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Animations::AnimationScriptPlayable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationScriptPlayable::*)(UnityEngine::Animations::AnimationScriptPlayable)>(&UnityEngine::Animations::AnimationScriptPlayable::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b21c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationScriptPlayable>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr  UnityEngine::Animations::AnimationScriptPlayable::operator UnityEngine::Playables::IPlayable() const {
return UnityEngine::Playables::IPlayable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>
constexpr  UnityEngine::Animations::AnimationScriptPlayable::operator System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>() const {
return System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void UnityEngine::Animations::AnimationScriptPlayable::__set_m_Handle(UnityEngine::Playables::PlayableHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance, std::forward<UnityEngine::Playables::PlayableHandle>(value));
}
constexpr UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance);
}
 void UnityEngine::Animations::AnimationScriptPlayable::__set_m_NullPlayable(UnityEngine::Animations::AnimationScriptPlayable value)  {
::cordl_internals::setStaticField<UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get>(std::forward<UnityEngine::Animations::AnimationScriptPlayable>(value));
}
 UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::__get_m_NullPlayable()  {
return ::cordl_internals::getStaticField<UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get>();
}
 void UnityEngine::Animations::AnimationScriptPlayable::_ctor(UnityEngine::Playables::PlayableHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, handle);
}
 UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Animations::AnimationScriptPlayable::Equals(UnityEngine::Animations::AnimationScriptPlayable other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationScriptPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationScriptPlayable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
