#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class CutoutEffect;
}
// Type: ::CutoutEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4956))
// CS Name: CutoutEffect
class CORDL_TYPE CutoutEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CutoutEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: " const&", def_value: None }]
constexpr CutoutEffect(CutoutEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: "&&", def_value: None }]
constexpr CutoutEffect(CutoutEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CutoutEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CutoutEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CutoutEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CutoutEffect& operator=(CutoutEffect&& o) noexcept = default;
  constexpr CutoutEffect& operator=(CutoutEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 ::GlobalNamespace::BoolSO __declspec(property(get=__get__useRandomCutoutOffset, put=__set__useRandomCutoutOffset))  _useRandomCutoutOffset;

constexpr void __set__useRandomCutoutOffset(::GlobalNamespace::BoolSO value) ;

constexpr ::GlobalNamespace::BoolSO __get__useRandomCutoutOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__cutoutOffset, put=__set__cutoutOffset))  _cutoutOffset;

constexpr void __set__cutoutOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__cutoutOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__randomNoiseTexOffset, put=__set__randomNoiseTexOffset))  _randomNoiseTexOffset;

constexpr void __set__randomNoiseTexOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__randomNoiseTexOffset() const;

 float_t __declspec(property(get=__get__cutout, put=__set__cutout))  _cutout;

constexpr void __set__cutout(float_t value) ;

constexpr float_t __get__cutout() const;

static int32_t __declspec(property(get=__get__cutoutPropertyID, put=__set__cutoutPropertyID))  _cutoutPropertyID;

static void __set__cutoutPropertyID(int32_t value) ;

static int32_t __get__cutoutPropertyID() ;

static int32_t __declspec(property(get=__get__cutoutTexOffsetPropertyID, put=__set__cutoutTexOffsetPropertyID))  _cutoutTexOffsetPropertyID;

static void __set__cutoutTexOffsetPropertyID(int32_t value) ;

static int32_t __get__cutoutTexOffsetPropertyID() ;


// Properties

 bool __declspec(property(get=get_useRandomCutoutOffset))  useRandomCutoutOffset;


// Methods

/// @brief Method get_useRandomCutoutOffset addr 0x224df14 size 0x48 virtual false final false
 bool get_useRandomCutoutOffset() ;

/// @brief Method Start addr 0x224df5c size 0x3c virtual false final false
 void Start() ;

/// @brief Method SetCutout addr 0x224dcd0 size 0xc4 virtual false final false
 void SetCutout(float_t cutout) ;

/// @brief Method SetCutout addr 0x224df98 size 0xe4 virtual false final false
 void SetCutout(float_t cutout, ::UnityEngine::Vector3 cutoutOffset) ;

// Ctor Parameters []
explicit CutoutEffect() ;

/// @brief Method .ctor addr 0x224e07c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CutoutEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutEffect, "", "CutoutEffect");
