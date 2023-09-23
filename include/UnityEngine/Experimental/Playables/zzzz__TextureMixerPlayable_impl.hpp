#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Experimental/Playables/zzzz__TextureMixerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
//  Writing Method size for method: UnityEngine::Experimental::Playables::TextureMixerPlayable.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Experimental::Playables::TextureMixerPlayable::*)()>(&UnityEngine::Experimental::Playables::TextureMixerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7b770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Experimental::Playables::TextureMixerPlayable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Playables::TextureMixerPlayable::*)(UnityEngine::Experimental::Playables::TextureMixerPlayable)>(&UnityEngine::Experimental::Playables::TextureMixerPlayable::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b7b77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr  UnityEngine::Experimental::Playables::TextureMixerPlayable::operator UnityEngine::Playables::IPlayable() const {
return UnityEngine::Playables::IPlayable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Experimental::Playables::TextureMixerPlayable>
constexpr  UnityEngine::Experimental::Playables::TextureMixerPlayable::operator System::IEquatable_1<UnityEngine::Experimental::Playables::TextureMixerPlayable>() const {
return System::IEquatable_1<UnityEngine::Experimental::Playables::TextureMixerPlayable>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::Playables::TextureMixerPlayable::TextureMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void UnityEngine::Experimental::Playables::TextureMixerPlayable::__set_m_Handle(UnityEngine::Playables::PlayableHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance, std::forward<UnityEngine::Playables::PlayableHandle>(value));
}
constexpr UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Playables::TextureMixerPlayable::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance);
}
 UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Playables::TextureMixerPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Experimental::Playables::TextureMixerPlayable::Equals(UnityEngine::Experimental::Playables::TextureMixerPlayable other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Experimental::Playables::TextureMixerPlayable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
