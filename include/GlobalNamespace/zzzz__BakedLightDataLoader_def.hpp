#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class LightmapDataSO;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightDataLoader;
}
// Type: ::BakedLightDataLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5938))
// CS Name: BakedLightDataLoader
class CORDL_TYPE BakedLightDataLoader : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BakedLightDataLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: " const&", def_value: None }]
constexpr BakedLightDataLoader(BakedLightDataLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: "&&", def_value: None }]
constexpr BakedLightDataLoader(BakedLightDataLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedLightDataLoader(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BakedLightDataLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedLightDataLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedLightDataLoader& operator=(BakedLightDataLoader&& o) noexcept = default;
  constexpr BakedLightDataLoader& operator=(BakedLightDataLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightmapDataSO __declspec(property(get=__get__lightmapData, put=__set__lightmapData))  _lightmapData;

constexpr void __set__lightmapData(GlobalNamespace::LightmapDataSO value) ;

constexpr GlobalNamespace::LightmapDataSO __get__lightmapData() const;

static int32_t __declspec(property(get=__get__lightMap1PropertyId, put=__set__lightMap1PropertyId))  _lightMap1PropertyId;

static void __set__lightMap1PropertyId(int32_t value) ;

static int32_t __get__lightMap1PropertyId() ;

static int32_t __declspec(property(get=__get__lightMap2PropertyId, put=__set__lightMap2PropertyId))  _lightMap2PropertyId;

static void __set__lightMap2PropertyId(int32_t value) ;

static int32_t __get__lightMap2PropertyId() ;

 UnityEngine::Texture2D __declspec(property(get=__get__blackTexture, put=__set__blackTexture))  _blackTexture;

constexpr void __set__blackTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__blackTexture() const;


// Properties

 GlobalNamespace::LightmapDataSO __declspec(property(get=get_lightmapData, put=set_lightmapData))  lightmapData;


// Methods

/// @brief Method get_lightmapData addr 0x219a1b0 size 0x8 virtual false final false
 GlobalNamespace::LightmapDataSO get_lightmapData() ;

/// @brief Method set_lightmapData addr 0x219a1b8 size 0x8 virtual false final false
 void set_lightmapData(GlobalNamespace::LightmapDataSO value) ;

/// @brief Method Start addr 0x219a1c0 size 0xb8 virtual false final false
 void Start() ;

/// @brief Method SetTextureDataToShaders addr 0x219a278 size 0x13c virtual false final false
 void SetTextureDataToShaders() ;

// Ctor Parameters []
explicit BakedLightDataLoader() ;

/// @brief Method .ctor addr 0x219a3b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BakedLightDataLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightDataLoader, "", "BakedLightDataLoader");
