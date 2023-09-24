#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class BlueNoiseDithering;
}
namespace GlobalNamespace {
class RandomValueToShader;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDitheringUpdater;
}
// Type: ::BlueNoiseDitheringUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14655))
// CS Name: BlueNoiseDitheringUpdater
class CORDL_TYPE BlueNoiseDitheringUpdater : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BlueNoiseDitheringUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: " const&", def_value: None }]
constexpr BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: "&&", def_value: None }]
constexpr BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlueNoiseDitheringUpdater(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BlueNoiseDitheringUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlueNoiseDitheringUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlueNoiseDitheringUpdater& operator=(BlueNoiseDitheringUpdater&& o) noexcept = default;
  constexpr BlueNoiseDitheringUpdater& operator=(BlueNoiseDitheringUpdater const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BlueNoiseDithering __declspec(property(get=__get__blueNoiseDithering, put=__set__blueNoiseDithering))  _blueNoiseDithering;

constexpr void __set__blueNoiseDithering(GlobalNamespace::BlueNoiseDithering value) ;

constexpr GlobalNamespace::BlueNoiseDithering __get__blueNoiseDithering() const;

 GlobalNamespace::RandomValueToShader __declspec(property(get=__get__randomValueToShader, put=__set__randomValueToShader))  _randomValueToShader;

constexpr void __set__randomValueToShader(GlobalNamespace::RandomValueToShader value) ;

constexpr GlobalNamespace::RandomValueToShader __get__randomValueToShader() const;


// Methods

/// @brief Method OnEnable addr 0x1f98b0c size 0x164 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f98c70 size 0xec virtual false final false
 void OnDisable() ;

/// @brief Method HandleCameraPreRender addr 0x1f98d5c size 0x60 virtual false final false
 void HandleCameraPreRender(UnityEngine::Camera camera) ;

static GlobalNamespace::BlueNoiseDitheringUpdater New_ctor() ;

/// @brief Method .ctor addr 0x1f98e48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BlueNoiseDitheringUpdater);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlueNoiseDitheringUpdater, "", "BlueNoiseDitheringUpdater");
