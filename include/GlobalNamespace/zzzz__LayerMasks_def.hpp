#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class LayerMasks;
}
// Type: ::LayerMasks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16068))
// CS Name: LayerMasks
class CORDL_TYPE LayerMasks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LayerMasks() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: " const&", def_value: None }]
constexpr LayerMasks(LayerMasks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "&&", def_value: None }]
constexpr LayerMasks(LayerMasks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayerMasks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LayerMasks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayerMasks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayerMasks& operator=(LayerMasks&& o) noexcept = default;
  constexpr LayerMasks& operator=(LayerMasks const& o) noexcept = default;
                


// Fields

static UnityEngine::LayerMask __declspec(property(get=__get_saberLayerMask, put=__set_saberLayerMask))  saberLayerMask;

static void __set_saberLayerMask(UnityEngine::LayerMask value) ;

static UnityEngine::LayerMask __get_saberLayerMask() ;

static UnityEngine::LayerMask __declspec(property(get=__get_noteLayerMask, put=__set_noteLayerMask))  noteLayerMask;

static void __set_noteLayerMask(UnityEngine::LayerMask value) ;

static UnityEngine::LayerMask __get_noteLayerMask() ;

static UnityEngine::LayerMask __declspec(property(get=__get_noteDebrisLayerMask, put=__set_noteDebrisLayerMask))  noteDebrisLayerMask;

static void __set_noteDebrisLayerMask(UnityEngine::LayerMask value) ;

static UnityEngine::LayerMask __get_noteDebrisLayerMask() ;

static UnityEngine::LayerMask __declspec(property(get=__get_cutEffectParticlesLayerMask, put=__set_cutEffectParticlesLayerMask))  cutEffectParticlesLayerMask;

static void __set_cutEffectParticlesLayerMask(UnityEngine::LayerMask value) ;

static UnityEngine::LayerMask __get_cutEffectParticlesLayerMask() ;

static int32_t __declspec(property(get=__get_noteDebrisLayer, put=__set_noteDebrisLayer))  noteDebrisLayer;

static void __set_noteDebrisLayer(int32_t value) ;

static int32_t __get_noteDebrisLayer() ;

static int32_t __declspec(property(get=__get_cutEffectParticlesLayer, put=__set_cutEffectParticlesLayer))  cutEffectParticlesLayer;

static void __set_cutEffectParticlesLayer(int32_t value) ;

static int32_t __get_cutEffectParticlesLayer() ;


// Methods

/// @brief Method GetLayerMask addr 0x11a37f4 size 0x30 virtual false final false
static UnityEngine::LayerMask GetLayerMask(::StringW layerName) ;

/// @brief Method GetLayerMask addr 0x11a3824 size 0x28 virtual false final false
static UnityEngine::LayerMask GetLayerMask(int32_t layerNum) ;

/// @brief Method GetLayer addr 0x11a384c size 0x8 virtual false final false
static int32_t GetLayer(::StringW layerName) ;

static GlobalNamespace::LayerMasks New_ctor() ;

/// @brief Method .ctor addr 0x11a3854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LayerMasks);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LayerMasks, "", "LayerMasks");
