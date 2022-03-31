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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConditionalSpriteSwitcher
  class ConditionalSpriteSwitcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalSpriteSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  class ConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x1256D30
    // private UnityEngine.Sprite _sprite0
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* sprite0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Material _material0
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* material0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // [HeaderAttribute] Offset: 0x1256D8C
    // private UnityEngine.Sprite _sprite1
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* sprite1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Material _material1
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* material1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // [SpaceAttribute] Offset: 0x1256DE8
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Sprite _sprite0
    ::UnityEngine::Sprite*& dyn__sprite0();
    // Get instance field reference: private UnityEngine.Material _material0
    ::UnityEngine::Material*& dyn__material0();
    // Get instance field reference: private UnityEngine.Sprite _sprite1
    ::UnityEngine::Sprite*& dyn__sprite1();
    // Get instance field reference: private UnityEngine.Material _material1
    ::UnityEngine::Material*& dyn__material1();
    // Get instance field reference: private BoolSO _value
    ::GlobalNamespace::BoolSO*& dyn__value();
    // Get instance field reference: private UnityEngine.SpriteRenderer _spriteRenderer
    ::UnityEngine::SpriteRenderer*& dyn__spriteRenderer();
    // public UnityEngine.Sprite get_falseSprite()
    // Offset: 0x14051EC
    ::UnityEngine::Sprite* get_falseSprite();
    // public System.Void set_falseSprite(UnityEngine.Sprite value)
    // Offset: 0x14051F4
    void set_falseSprite(::UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_trueSprite()
    // Offset: 0x14051FC
    ::UnityEngine::Sprite* get_trueSprite();
    // public System.Void set_trueSprite(UnityEngine.Sprite value)
    // Offset: 0x1405204
    void set_trueSprite(::UnityEngine::Sprite* value);
    // protected System.Void Awake()
    // Offset: 0x140520C
    void Awake();
    // public System.Void Apply()
    // Offset: 0x1405210
    void Apply();
    // public System.Void .ctor()
    // Offset: 0x14052B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalSpriteSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConditionalSpriteSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalSpriteSwitcher*, creationType>()));
    }
  }; // ConditionalSpriteSwitcher
  #pragma pack(pop)
  static check_size<sizeof(ConditionalSpriteSwitcher), 64 + sizeof(::UnityEngine::SpriteRenderer*)> __GlobalNamespace_ConditionalSpriteSwitcherSizeCheck;
  static_assert(sizeof(ConditionalSpriteSwitcher) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite
// Il2CppName: get_falseSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "get_falseSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite
// Il2CppName: set_falseSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)(::UnityEngine::Sprite*)>(&GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "set_falseSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite
// Il2CppName: get_trueSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "get_trueSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite
// Il2CppName: set_trueSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)(::UnityEngine::Sprite*)>(&GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "set_trueSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::Apply)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
