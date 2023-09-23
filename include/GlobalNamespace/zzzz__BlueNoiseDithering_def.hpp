#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDithering;
}
// Type: ::BlueNoiseDithering
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14654))
// CS Name: BlueNoiseDithering
class CORDL_TYPE BlueNoiseDithering : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BlueNoiseDithering() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: " const&", def_value: None }]
constexpr BlueNoiseDithering(BlueNoiseDithering const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: "&&", def_value: None }]
constexpr BlueNoiseDithering(BlueNoiseDithering&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlueNoiseDithering(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BlueNoiseDithering& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlueNoiseDithering& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlueNoiseDithering& operator=(BlueNoiseDithering&& o) noexcept = default;
  constexpr BlueNoiseDithering& operator=(BlueNoiseDithering const& o) noexcept = default;
                


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get__noiseTexture, put=__set__noiseTexture))  _noiseTexture;

constexpr void __set__noiseTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__noiseTexture() const;

static int32_t __declspec(property(get=__get__noiseParamsID, put=__set__noiseParamsID))  _noiseParamsID;

static void __set__noiseParamsID(int32_t value) ;

static int32_t __get__noiseParamsID() ;

static int32_t __declspec(property(get=__get__globalNoiseTextureID, put=__set__globalNoiseTextureID))  _globalNoiseTextureID;

static void __set__globalNoiseTextureID(int32_t value) ;

static int32_t __get__globalNoiseTextureID() ;


// Methods

/// @brief Method SetBlueNoiseShaderParams addr 0x1f9897c size 0xec virtual false final false
 void SetBlueNoiseShaderParams(int32_t cameraPixelWidth, int32_t cameraPixelHeight) ;

// Ctor Parameters []
explicit BlueNoiseDithering() ;

/// @brief Method .ctor addr 0x1f98a68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BlueNoiseDithering);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlueNoiseDithering, "", "BlueNoiseDithering");
