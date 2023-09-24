#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
namespace Ice {
class FloorLightTile;
}
// Forward declare root types
namespace Ice {
class FloorLightTileInstaller;
}
// Type: Ice::FloorLightTileInstaller
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16001))
// CS Name: Ice.FloorLightTileInstaller
class CORDL_TYPE FloorLightTileInstaller : public Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FloorLightTileInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: " const&", def_value: None }]
constexpr FloorLightTileInstaller(FloorLightTileInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: "&&", def_value: None }]
constexpr FloorLightTileInstaller(FloorLightTileInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloorLightTileInstaller(void* ptr) noexcept : Zenject::ScriptableObjectInstaller(ptr) {
}


  constexpr FloorLightTileInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloorLightTileInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloorLightTileInstaller& operator=(FloorLightTileInstaller&& o) noexcept = default;
  constexpr FloorLightTileInstaller& operator=(FloorLightTileInstaller const& o) noexcept = default;
                


// Fields

 Ice::FloorLightTile __declspec(property(get=__get__floorLightTilePrefab, put=__set__floorLightTilePrefab))  _floorLightTilePrefab;

constexpr void __set__floorLightTilePrefab(Ice::FloorLightTile value) ;

constexpr Ice::FloorLightTile __get__floorLightTilePrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x1211a58 size 0x84 virtual true final false
 void InstallBindings() ;

static Ice::FloorLightTileInstaller New_ctor() ;

/// @brief Method .ctor addr 0x1211adc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::FloorLightTileInstaller);
DEFINE_IL2CPP_ARG_TYPE(Ice::FloorLightTileInstaller, "Ice", "FloorLightTileInstaller");
