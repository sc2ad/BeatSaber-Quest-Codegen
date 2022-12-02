// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteAnimator
  class TMP_SpriteAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_SpriteAnimator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAnimator*, "TMPro", "TMP_SpriteAnimator");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class TMP_SpriteAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7
    class $DoSpriteAnimationInternal$d__7;
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> m_animations
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, bool>* m_animations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, bool>*) == 0x8);
    // private TMPro.TMP_Text m_TextComponent
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TMP_Text* m_TextComponent;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Text*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> m_animations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, bool>*& dyn_m_animations();
    // Get instance field reference: private TMPro.TMP_Text m_TextComponent
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Text*& dyn_m_TextComponent();
    // public System.Void .ctor()
    // Offset: 0x14BD694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteAnimator*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x14BD418
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x14BD470
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x14BD474
    void OnDisable();
    // public System.Void StopAllAnimations()
    // Offset: 0x14BD478
    void StopAllAnimations();
    // public System.Void DoSpriteAnimation(System.Int32 currentCharacter, TMPro.TMP_SpriteAsset spriteAsset, System.Int32 start, System.Int32 end, System.Int32 framerate)
    // Offset: 0x14BD4DC
    void DoSpriteAnimation(int currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, int start, int end, int framerate);
    // private System.Collections.IEnumerator DoSpriteAnimationInternal(System.Int32 currentCharacter, TMPro.TMP_SpriteAsset spriteAsset, System.Int32 start, System.Int32 end, System.Int32 framerate)
    // Offset: 0x14BD5C0
    ::System::Collections::IEnumerator* DoSpriteAnimationInternal(int currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, int start, int end, int framerate);
  }; // TMPro.TMP_SpriteAnimator
  #pragma pack(pop)
  static check_size<sizeof(TMP_SpriteAnimator), 32 + sizeof(::TMPro::TMP_Text*)> __TMPro_TMP_SpriteAnimatorSizeCheck;
  static_assert(sizeof(TMP_SpriteAnimator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::*)()>(&TMPro::TMP_SpriteAnimator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::*)()>(&TMPro::TMP_SpriteAnimator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::*)()>(&TMPro::TMP_SpriteAnimator::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::StopAllAnimations
// Il2CppName: StopAllAnimations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::*)()>(&TMPro::TMP_SpriteAnimator::StopAllAnimations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "StopAllAnimations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::DoSpriteAnimation
// Il2CppName: DoSpriteAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::*)(int, ::TMPro::TMP_SpriteAsset*, int, int, int)>(&TMPro::TMP_SpriteAnimator::DoSpriteAnimation)> {
  static const MethodInfo* get() {
    static auto* currentCharacter = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* framerate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "DoSpriteAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentCharacter, spriteAsset, start, end, framerate});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::DoSpriteAnimationInternal
// Il2CppName: DoSpriteAnimationInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (TMPro::TMP_SpriteAnimator::*)(int, ::TMPro::TMP_SpriteAsset*, int, int, int)>(&TMPro::TMP_SpriteAnimator::DoSpriteAnimationInternal)> {
  static const MethodInfo* get() {
    static auto* currentCharacter = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* framerate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator*), "DoSpriteAnimationInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentCharacter, spriteAsset, start, end, framerate});
  }
};
