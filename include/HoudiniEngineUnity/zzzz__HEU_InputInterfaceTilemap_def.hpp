#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
namespace HoudiniEngineUnity {
class HEU_InputData;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemap;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap;
}
// Type: ::HEU_InputDataTilemap
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9779))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9787))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTilemap::HEU_InputDataTilemap
class CORDL_TYPE HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap : public HoudiniEngineUnity::HEU_InputData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap(HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap(HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputData(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap& operator=(HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap& operator=(HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap const& o) noexcept = default;
                


// Fields

 UnityEngine::Tilemaps::Tilemap __declspec(property(get=__get__tilemap, put=__set__tilemap))  _tilemap;

constexpr void __set__tilemap(UnityEngine::Tilemaps::Tilemap value) ;

constexpr UnityEngine::Tilemaps::Tilemap __get__tilemap() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap New_ctor() ;

/// @brief Method .ctor addr 0x205c594 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceTilemap
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9780))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9788))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTilemap
class CORDL_TYPE HEU_InputInterfaceTilemap : public HoudiniEngineUnity::HEU_InputInterface {
public:
// Declarations
using HEU_InputDataTilemap = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_InputInterfaceTilemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemap", modifiers: " const&", def_value: None }]
constexpr HEU_InputInterfaceTilemap(HEU_InputInterfaceTilemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemap", modifiers: "&&", def_value: None }]
constexpr HEU_InputInterfaceTilemap(HEU_InputInterfaceTilemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputInterfaceTilemap(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputInterface(ptr) {
}


  constexpr HEU_InputInterfaceTilemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputInterfaceTilemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputInterfaceTilemap& operator=(HEU_InputInterfaceTilemap&& o) noexcept = default;
  constexpr HEU_InputInterfaceTilemap& operator=(HEU_InputInterfaceTilemap const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings value) ;

constexpr HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings __get_settings() const;


// Methods

static HoudiniEngineUnity::HEU_InputInterfaceTilemap New_ctor() ;

/// @brief Method .ctor addr 0x2059d00 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x2059d0c size 0x70 virtual false final false
 void Initialize(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings settings) ;

/// @brief Method CreateInputNodeWithDataUpload addr 0x2059d7c size 0x198 virtual true final false
 bool CreateInputNodeWithDataUpload(HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID) ;

/// @brief Method IsThisInputObjectSupported addr 0x205b9e8 size 0xc4 virtual true final false
 bool IsThisInputObjectSupported(UnityEngine::GameObject inputObject) ;

/// @brief Method UploadData addr 0x2059fec size 0x19fc virtual false final false
 bool UploadData(HoudiniEngineUnity::HEU_SessionBase session, int32_t inputNodeID, HoudiniEngineUnity::HEU_InputData inputData) ;

/// @brief Method GenerateTilemapDataFromGameObject addr 0x2059f14 size 0xd8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap GenerateTilemapDataFromGameObject(UnityEngine::GameObject inputObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputInterfaceTilemap);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterfaceTilemap, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTilemap__HEU_InputDataTilemap, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap/HEU_InputDataTilemap");
