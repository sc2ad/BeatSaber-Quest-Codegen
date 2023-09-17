#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Experimental/Playables/zzzz__MaterialEffectPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::MaterialEffectPlayable.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Experimental::Playables::MaterialEffectPlayable::*)()>(&::UnityEngine::Experimental::Playables::MaterialEffectPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7b5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::MaterialEffectPlayable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Playables::MaterialEffectPlayable::*)(::UnityEngine::Experimental::Playables::MaterialEffectPlayable)>(&::UnityEngine::Experimental::Playables::MaterialEffectPlayable::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b7b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::IPlayable
constexpr  ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::operator ::UnityEngine::Playables::IPlayable() const {
return ::UnityEngine::Playables::IPlayable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>
constexpr  ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>() const {
return ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::MaterialEffectPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::__set_m_Handle(::UnityEngine::Playables::PlayableHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance, std::forward<::UnityEngine::Playables::PlayableHandle>(value));
}
constexpr ::UnityEngine::Playables::PlayableHandle ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableHandle, 0x0>(this->__instance);
}
 ::UnityEngine::Playables::PlayableHandle ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::Equals(::UnityEngine::Experimental::Playables::MaterialEffectPlayable other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
} // end anonymous namespace
