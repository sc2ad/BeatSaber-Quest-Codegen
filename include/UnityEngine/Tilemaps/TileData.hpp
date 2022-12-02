// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Tilemaps.TileFlags
#include "UnityEngine/Tilemaps/TileFlags.hpp"
// Including type: UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType
#include "UnityEngine/Tilemaps/Tile.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TileData
  struct TileData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileData, "UnityEngine.Tilemaps", "TileData");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Tilemaps.TileData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 10D8BC4
  // [RequiredByNativeCodeAttribute] Offset: 10D8BC4
  struct TileData/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Sprite m_Sprite
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Sprite* m_Sprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color m_Color
    // Size: 0x10
    // Offset: 0x8
    ::UnityEngine::Color m_Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Matrix4x4 m_Transform
    // Size: 0x40
    // Offset: 0x18
    ::UnityEngine::Matrix4x4 m_Transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.GameObject m_GameObject
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* m_GameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Tilemaps.TileFlags m_Flags
    // Size: 0x4
    // Offset: 0x60
    ::UnityEngine::Tilemaps::TileFlags m_Flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::TileFlags) == 0x4);
    // private UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType m_ColliderType
    // Size: 0x4
    // Offset: 0x64
    ::UnityEngine::Tilemaps::Tile::ColliderType m_ColliderType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::Tile::ColliderType) == 0x4);
    public:
    // Creating value type constructor for type: TileData
    constexpr TileData(::UnityEngine::Sprite* m_Sprite_ = {}, ::UnityEngine::Color m_Color_ = {}, ::UnityEngine::Matrix4x4 m_Transform_ = {}, ::UnityEngine::GameObject* m_GameObject_ = {}, ::UnityEngine::Tilemaps::TileFlags m_Flags_ = {}, ::UnityEngine::Tilemaps::Tile::ColliderType m_ColliderType_ = {}) noexcept : m_Sprite{m_Sprite_}, m_Color{m_Color_}, m_Transform{m_Transform_}, m_GameObject{m_GameObject_}, m_Flags{m_Flags_}, m_ColliderType{m_ColliderType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Sprite m_Sprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_Sprite();
    // Get instance field reference: private UnityEngine.Color m_Color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_Color();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_Transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_Transform();
    // Get instance field reference: private UnityEngine.GameObject m_GameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_GameObject();
    // Get instance field reference: private UnityEngine.Tilemaps.TileFlags m_Flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::TileFlags& dyn_m_Flags();
    // Get instance field reference: private UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType m_ColliderType
    [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::Tile::ColliderType& dyn_m_ColliderType();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x2B7B028
    void set_sprite(::UnityEngine::Sprite* value);
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x2B7B030
    void set_color(::UnityEngine::Color value);
    // public System.Void set_transform(UnityEngine.Matrix4x4 value)
    // Offset: 0x2B7B03C
    void set_transform(::UnityEngine::Matrix4x4 value);
    // public System.Void set_gameObject(UnityEngine.GameObject value)
    // Offset: 0x2B7B058
    void set_gameObject(::UnityEngine::GameObject* value);
    // public System.Void set_flags(UnityEngine.Tilemaps.TileFlags value)
    // Offset: 0x2B7B060
    void set_flags(::UnityEngine::Tilemaps::TileFlags value);
    // public System.Void set_colliderType(UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType value)
    // Offset: 0x2B7B068
    void set_colliderType(::UnityEngine::Tilemaps::Tile::ColliderType value);
  }; // UnityEngine.Tilemaps.TileData
  #pragma pack(pop)
  static check_size<sizeof(TileData), 100 + sizeof(::UnityEngine::Tilemaps::Tile::ColliderType)> __UnityEngine_Tilemaps_TileDataSizeCheck;
  static_assert(sizeof(TileData) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Sprite*)>(&UnityEngine::Tilemaps::TileData::set_sprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Color)>(&UnityEngine::Tilemaps::TileData::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_transform
// Il2CppName: set_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Tilemaps::TileData::set_transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_gameObject
// Il2CppName: set_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::GameObject*)>(&UnityEngine::Tilemaps::TileData::set_gameObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_flags
// Il2CppName: set_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Tilemaps::TileFlags)>(&UnityEngine::Tilemaps::TileData::set_flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TileData::set_colliderType
// Il2CppName: set_colliderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Tilemaps::Tile::ColliderType)>(&UnityEngine::Tilemaps::TileData::set_colliderType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tile/ColliderType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TileData), "set_colliderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
