// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Skybox
  class SteamVR_Skybox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Skybox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Skybox*, "", "SteamVR_Skybox");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Skybox
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Skybox : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_Skybox::CellSize
    struct CellSize;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SteamVR_Skybox/CellSize
    // [TokenAttribute] Offset: FFFFFFFF
    struct CellSize/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CellSize
      constexpr CellSize(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SteamVR_Skybox/CellSize x1024
      static constexpr const int x1024 = 0;
      // Get static field: static public SteamVR_Skybox/CellSize x1024
      static ::GlobalNamespace::SteamVR_Skybox::CellSize _get_x1024();
      // Set static field: static public SteamVR_Skybox/CellSize x1024
      static void _set_x1024(::GlobalNamespace::SteamVR_Skybox::CellSize value);
      // static field const value: static public SteamVR_Skybox/CellSize x64
      static constexpr const int x64 = 1;
      // Get static field: static public SteamVR_Skybox/CellSize x64
      static ::GlobalNamespace::SteamVR_Skybox::CellSize _get_x64();
      // Set static field: static public SteamVR_Skybox/CellSize x64
      static void _set_x64(::GlobalNamespace::SteamVR_Skybox::CellSize value);
      // static field const value: static public SteamVR_Skybox/CellSize x32
      static constexpr const int x32 = 2;
      // Get static field: static public SteamVR_Skybox/CellSize x32
      static ::GlobalNamespace::SteamVR_Skybox::CellSize _get_x32();
      // Set static field: static public SteamVR_Skybox/CellSize x32
      static void _set_x32(::GlobalNamespace::SteamVR_Skybox::CellSize value);
      // static field const value: static public SteamVR_Skybox/CellSize x16
      static constexpr const int x16 = 3;
      // Get static field: static public SteamVR_Skybox/CellSize x16
      static ::GlobalNamespace::SteamVR_Skybox::CellSize _get_x16();
      // Set static field: static public SteamVR_Skybox/CellSize x16
      static void _set_x16(::GlobalNamespace::SteamVR_Skybox::CellSize value);
      // static field const value: static public SteamVR_Skybox/CellSize x8
      static constexpr const int x8 = 4;
      // Get static field: static public SteamVR_Skybox/CellSize x8
      static ::GlobalNamespace::SteamVR_Skybox::CellSize _get_x8();
      // Set static field: static public SteamVR_Skybox/CellSize x8
      static void _set_x8(::GlobalNamespace::SteamVR_Skybox::CellSize value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // SteamVR_Skybox/CellSize
    #pragma pack(pop)
    static check_size<sizeof(SteamVR_Skybox::CellSize), 0 + sizeof(int)> __GlobalNamespace_SteamVR_Skybox_CellSizeSizeCheck;
    static_assert(sizeof(SteamVR_Skybox::CellSize) == 0x4);
    public:
    // public UnityEngine.Texture front
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture* front;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture back
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture* back;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture left
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Texture* left;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture right
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture* right;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture top
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Texture* top;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture bottom
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Texture* bottom;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public SteamVR_Skybox/CellSize StereoCellSize
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::SteamVR_Skybox::CellSize StereoCellSize;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Skybox::CellSize) == 0x4);
    // public System.Single StereoIpdMm
    // Size: 0x4
    // Offset: 0x4C
    float StereoIpdMm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Texture front
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_front();
    // Get instance field reference: public UnityEngine.Texture back
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_back();
    // Get instance field reference: public UnityEngine.Texture left
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_left();
    // Get instance field reference: public UnityEngine.Texture right
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_right();
    // Get instance field reference: public UnityEngine.Texture top
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_top();
    // Get instance field reference: public UnityEngine.Texture bottom
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_bottom();
    // Get instance field reference: public SteamVR_Skybox/CellSize StereoCellSize
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Skybox::CellSize& dyn_StereoCellSize();
    // Get instance field reference: public System.Single StereoIpdMm
    [[deprecated("Use field access instead!")]] float& dyn_StereoIpdMm();
    // public System.Void .ctor()
    // Offset: 0x18C7A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Skybox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Skybox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Skybox*, creationType>()));
    }
    // public System.Void SetTextureByIndex(System.Int32 i, UnityEngine.Texture t)
    // Offset: 0x18C7970
    void SetTextureByIndex(int i, ::UnityEngine::Texture* t);
    // public UnityEngine.Texture GetTextureByIndex(System.Int32 i)
    // Offset: 0x18C79C4
    ::UnityEngine::Texture* GetTextureByIndex(int i);
    // static public System.Void SetOverride(UnityEngine.Texture front, UnityEngine.Texture back, UnityEngine.Texture left, UnityEngine.Texture right, UnityEngine.Texture top, UnityEngine.Texture bottom)
    // Offset: 0x18BE410
    static void SetOverride(::UnityEngine::Texture* front, ::UnityEngine::Texture* back, ::UnityEngine::Texture* left, ::UnityEngine::Texture* right, ::UnityEngine::Texture* top, ::UnityEngine::Texture* bottom);
    // static public System.Void ClearOverride()
    // Offset: 0x18BE83C
    static void ClearOverride();
    // private System.Void OnEnable()
    // Offset: 0x18C7A20
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18C7A34
    void OnDisable();
  }; // SteamVR_Skybox
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Skybox), 76 + sizeof(float)> __GlobalNamespace_SteamVR_SkyboxSizeCheck;
  static_assert(sizeof(SteamVR_Skybox) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Skybox::CellSize, "", "SteamVR_Skybox/CellSize");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::SetTextureByIndex
// Il2CppName: SetTextureByIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Skybox::*)(int, ::UnityEngine::Texture*)>(&GlobalNamespace::SteamVR_Skybox::SetTextureByIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "SetTextureByIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::GetTextureByIndex
// Il2CppName: GetTextureByIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (GlobalNamespace::SteamVR_Skybox::*)(int)>(&GlobalNamespace::SteamVR_Skybox::GetTextureByIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "GetTextureByIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::SetOverride
// Il2CppName: SetOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*)>(&GlobalNamespace::SteamVR_Skybox::SetOverride)> {
  static const MethodInfo* get() {
    static auto* front = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* back = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "SetOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{front, back, left, right, top, bottom});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::ClearOverride
// Il2CppName: ClearOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_Skybox::ClearOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "ClearOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Skybox::*)()>(&GlobalNamespace::SteamVR_Skybox::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Skybox::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Skybox::*)()>(&GlobalNamespace::SteamVR_Skybox::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Skybox*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
