// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Tilemaps.TileBase
#include "UnityEngine/Tilemaps/TileBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Tilemaps.TileFlags
#include "UnityEngine/Tilemaps/TileFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Skipping declaration: ColliderType because it is already included!
  // Forward declaring type: ITilemap
  class ITilemap;
  // Forward declaring type: TileData
  struct TileData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Vector3Int
  struct Vector3Int;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tile
  class Tile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::Tile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile*, "UnityEngine.Tilemaps", "Tile");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.Tile
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 1214F6C
  class Tile : public ::UnityEngine::Tilemaps::TileBase {
    public:
    // Nested type: ::UnityEngine::Tilemaps::Tile::ColliderType
    struct ColliderType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ColliderType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ColliderType
      constexpr ColliderType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType None
      static ::UnityEngine::Tilemaps::Tile::ColliderType _get_None();
      // Set static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType None
      static void _set_None(::UnityEngine::Tilemaps::Tile::ColliderType value);
      // static field const value: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Sprite
      static constexpr const int Sprite = 1;
      // Get static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Sprite
      static ::UnityEngine::Tilemaps::Tile::ColliderType _get_Sprite();
      // Set static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Sprite
      static void _set_Sprite(::UnityEngine::Tilemaps::Tile::ColliderType value);
      // static field const value: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Grid
      static constexpr const int Grid = 2;
      // Get static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Grid
      static ::UnityEngine::Tilemaps::Tile::ColliderType _get_Grid();
      // Set static field: static public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType Grid
      static void _set_Grid(::UnityEngine::Tilemaps::Tile::ColliderType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType
    #pragma pack(pop)
    static check_size<sizeof(Tile::ColliderType), 0 + sizeof(int)> __UnityEngine_Tilemaps_Tile_ColliderTypeSizeCheck;
    static_assert(sizeof(Tile::ColliderType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Sprite m_Sprite
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* m_Sprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color m_Color
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color m_Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Matrix4x4 m_Transform
    // Size: 0x40
    // Offset: 0x30
    ::UnityEngine::Matrix4x4 m_Transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.GameObject m_InstancedGameObject
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* m_InstancedGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Tilemaps.TileFlags m_Flags
    // Size: 0x4
    // Offset: 0x78
    ::UnityEngine::Tilemaps::TileFlags m_Flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::TileFlags) == 0x4);
    // private UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType m_ColliderType
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::Tilemaps::Tile::ColliderType m_ColliderType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::Tile::ColliderType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Sprite m_Sprite
    ::UnityEngine::Sprite*& dyn_m_Sprite();
    // Get instance field reference: private UnityEngine.Color m_Color
    ::UnityEngine::Color& dyn_m_Color();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_Transform
    ::UnityEngine::Matrix4x4& dyn_m_Transform();
    // Get instance field reference: private UnityEngine.GameObject m_InstancedGameObject
    ::UnityEngine::GameObject*& dyn_m_InstancedGameObject();
    // Get instance field reference: private UnityEngine.Tilemaps.TileFlags m_Flags
    ::UnityEngine::Tilemaps::TileFlags& dyn_m_Flags();
    // Get instance field reference: private UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType m_ColliderType
    ::UnityEngine::Tilemaps::Tile::ColliderType& dyn_m_ColliderType();
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x2A91858
    ::UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x2A91860
    void set_sprite(::UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x2A91868
    ::UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x2A91874
    void set_color(::UnityEngine::Color value);
    // public UnityEngine.Matrix4x4 get_transform()
    // Offset: 0x2A91880
    ::UnityEngine::Matrix4x4 get_transform();
    // public System.Void set_transform(UnityEngine.Matrix4x4 value)
    // Offset: 0x2A91894
    void set_transform(::UnityEngine::Matrix4x4 value);
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x2A918A8
    ::UnityEngine::GameObject* get_gameObject();
    // public System.Void set_gameObject(UnityEngine.GameObject value)
    // Offset: 0x2A918B0
    void set_gameObject(::UnityEngine::GameObject* value);
    // public UnityEngine.Tilemaps.TileFlags get_flags()
    // Offset: 0x2A918B8
    ::UnityEngine::Tilemaps::TileFlags get_flags();
    // public System.Void set_flags(UnityEngine.Tilemaps.TileFlags value)
    // Offset: 0x2A918C0
    void set_flags(::UnityEngine::Tilemaps::TileFlags value);
    // public UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType get_colliderType()
    // Offset: 0x2A918C8
    ::UnityEngine::Tilemaps::Tile::ColliderType get_colliderType();
    // public System.Void set_colliderType(UnityEngine.Tilemaps.Tile/UnityEngine.Tilemaps.ColliderType value)
    // Offset: 0x2A918D0
    void set_colliderType(::UnityEngine::Tilemaps::Tile::ColliderType value);
    // public System.Void .ctor()
    // Offset: 0x2A91964
    // Implemented from: UnityEngine.Tilemaps.TileBase
    // Base method: System.Void TileBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Tilemaps::Tile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tile*, creationType>()));
    }
    // public override System.Void GetTileData(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, ref UnityEngine.Tilemaps.TileData tileData)
    // Offset: 0x2A918D8
    // Implemented from: UnityEngine.Tilemaps.TileBase
    // Base method: System.Void TileBase::GetTileData(UnityEngine.Vector3Int position, UnityEngine.Tilemaps.ITilemap tilemap, ref UnityEngine.Tilemaps.TileData tileData)
    void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData);
  }; // UnityEngine.Tilemaps.Tile
  #pragma pack(pop)
  static check_size<sizeof(Tile), 124 + sizeof(::UnityEngine::Tilemaps::Tile::ColliderType)> __UnityEngine_Tilemaps_TileSizeCheck;
  static_assert(sizeof(Tile) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tile::ColliderType, "UnityEngine.Tilemaps", "Tile/ColliderType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_sprite
// Il2CppName: get_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_sprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Sprite*)>(&UnityEngine::Tilemaps::Tile::set_sprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Color)>(&UnityEngine::Tilemaps::Tile::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_transform
// Il2CppName: set_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Tilemaps::Tile::set_transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_gameObject
// Il2CppName: get_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_gameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_gameObject
// Il2CppName: set_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::GameObject*)>(&UnityEngine::Tilemaps::Tile::set_gameObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_flags
// Il2CppName: get_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileFlags (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_flags
// Il2CppName: set_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::TileFlags)>(&UnityEngine::Tilemaps::Tile::set_flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::get_colliderType
// Il2CppName: get_colliderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::Tile::ColliderType (UnityEngine::Tilemaps::Tile::*)()>(&UnityEngine::Tilemaps::Tile::get_colliderType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "get_colliderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::set_colliderType
// Il2CppName: set_colliderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::Tile::ColliderType)>(&UnityEngine::Tilemaps::Tile::set_colliderType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "Tile/ColliderType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "set_colliderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tile::GetTileData
// Il2CppName: GetTileData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileData>)>(&UnityEngine::Tilemaps::Tile::GetTileData)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    static auto* tilemap = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "ITilemap")->byval_arg;
    static auto* tileData = &::il2cpp_utils::GetClassFromName("UnityEngine.Tilemaps", "TileData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tile*), "GetTileData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, tilemap, tileData});
  }
};
