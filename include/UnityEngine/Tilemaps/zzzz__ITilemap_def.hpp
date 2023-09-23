#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class ITilemap;
}
// Type: UnityEngine.Tilemaps::ITilemap
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15832))
// CS Name: UnityEngine.Tilemaps.ITilemap
class CORDL_TYPE ITilemap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ITilemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: " const&", def_value: None }]
constexpr ITilemap(ITilemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "&&", def_value: None }]
constexpr ITilemap(ITilemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITilemap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ITilemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ITilemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ITilemap& operator=(ITilemap&& o) noexcept = default;
  constexpr ITilemap& operator=(ITilemap const& o) noexcept = default;
                


// Fields

static UnityEngine::Tilemaps::ITilemap __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::Tilemaps::ITilemap value) ;

static UnityEngine::Tilemaps::ITilemap __get_s_Instance() ;

 UnityEngine::Tilemaps::Tilemap __declspec(property(get=__get_m_Tilemap, put=__set_m_Tilemap))  m_Tilemap;

constexpr void __set_m_Tilemap(UnityEngine::Tilemaps::Tilemap value) ;

constexpr UnityEngine::Tilemaps::Tilemap __get_m_Tilemap() const;

 bool __declspec(property(get=__get_m_AddToList, put=__set_m_AddToList))  m_AddToList;

constexpr void __set_m_AddToList(bool value) ;

constexpr bool __get_m_AddToList() const;

 int32_t __declspec(property(get=__get_m_RefreshCount, put=__set_m_RefreshCount))  m_RefreshCount;

constexpr void __set_m_RefreshCount(int32_t value) ;

constexpr int32_t __get_m_RefreshCount() const;

 Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> __declspec(property(get=__get_m_RefreshPos, put=__set_m_RefreshPos))  m_RefreshPos;

constexpr void __set_m_RefreshPos(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> __get_m_RefreshPos() const;


// Methods

// Ctor Parameters []
explicit ITilemap() ;

/// @brief Method .ctor addr 0x2bd76f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method RefreshTile addr 0x2bd74ac size 0x164 virtual false final false
 void RefreshTile(UnityEngine::Vector3Int position) ;

/// @brief Method CreateInstance addr 0x2bd76f8 size 0x70 virtual false final false
static UnityEngine::Tilemaps::ITilemap CreateInstance() ;

/// @brief Method FindAllRefreshPositions addr 0x2bd7768 size 0x318 virtual false final false
static void FindAllRefreshPositions(UnityEngine::Tilemaps::ITilemap tilemap, int32_t count, ::cordl_internals::intptr_t oldTilesIntPtr, ::cordl_internals::intptr_t newTilesIntPtr, ::cordl_internals::intptr_t positionsIntPtr) ;

/// @brief Method GetAllTileData addr 0x2bd7a80 size 0x1f8 virtual false final false
static void GetAllTileData(UnityEngine::Tilemaps::ITilemap tilemap, int32_t count, ::cordl_internals::intptr_t tilesIntPtr, ::cordl_internals::intptr_t positionsIntPtr, ::cordl_internals::intptr_t outTileDataIntPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
NEED_NO_BOX(UnityEngine::Tilemaps::ITilemap);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::ITilemap, "UnityEngine.Tilemaps", "ITilemap");
