// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableExtensions
  class AnimationPlayableExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableExtensions*, "UnityEngine.Animations", "AnimationPlayableExtensions");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 109ED34
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 109ED34
  // [NativeHeaderAttribute] Offset: 109ED34
  class AnimationPlayableExtensions : public ::Il2CppObject {
    public:
    // static public System.Void SetAnimatedProperties(U playable, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class U>
    static void SetAnimatedProperties(U playable, ::UnityEngine::AnimationClip* clip) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<U>, ::UnityEngine::Playables::IPlayable> && std::is_convertible_v<U, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedProperties");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Animations", "AnimationPlayableExtensions", "SetAnimatedProperties", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(playable), ::il2cpp_utils::ExtractType(clip)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, playable, clip);
    }
    // static System.Void SetAnimatedPropertiesInternal(ref UnityEngine.Playables.PlayableHandle playable, UnityEngine.AnimationClip animatedProperties)
    // Offset: 0x2ADCE8C
    static void SetAnimatedPropertiesInternal(ByRef<::UnityEngine::Playables::PlayableHandle> playable, ::UnityEngine::AnimationClip* animatedProperties);
  }; // UnityEngine.Animations.AnimationPlayableExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedProperties
// Il2CppName: SetAnimatedProperties
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal
// Il2CppName: SetAnimatedPropertiesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::AnimationClip*)>(&UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedPropertiesInternal)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* animatedProperties = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableExtensions*), "SetAnimatedPropertiesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, animatedProperties});
  }
};
