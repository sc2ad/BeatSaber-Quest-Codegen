#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevron;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SpawnRotationChevron__Pool;
}
// Type: ::SpawnRotationChevron
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5095))
// CS Name: SpawnRotationChevron
class CORDL_TYPE SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SpawnRotationChevron() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: " const&", def_value: None }]
constexpr SpawnRotationChevron(SpawnRotationChevron const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "&&", def_value: None }]
constexpr SpawnRotationChevron(SpawnRotationChevron&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnRotationChevron(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr SpawnRotationChevron& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnRotationChevron& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnRotationChevron& operator=(SpawnRotationChevron&& o) noexcept = default;
  constexpr SpawnRotationChevron& operator=(SpawnRotationChevron const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __get__lights() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__lightAmount, put=__set__lightAmount))  _lightAmount;

constexpr void __set__lightAmount(float_t value) ;

constexpr float_t __get__lightAmount() const;


// Methods

/// @brief Method ColorWasSet addr 0x226a674 size 0xc virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

/// @brief Method SetLightAmount addr 0x226a6f0 size 0x8 virtual false final false
 void SetLightAmount(float_t amount) ;

/// @brief Method UpdateLights addr 0x226a680 size 0x70 virtual false final false
 void UpdateLights() ;

// Ctor Parameters []
explicit SpawnRotationChevron() ;

/// @brief Method .ctor addr 0x226a6f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2723 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(5095))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5094))
// CS Name: SpawnRotationChevron::Pool
class CORDL_TYPE ____GlobalNamespace__SpawnRotationChevron__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SpawnRotationChevron> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__SpawnRotationChevron__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SpawnRotationChevron__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SpawnRotationChevron__Pool(____GlobalNamespace__SpawnRotationChevron__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SpawnRotationChevron__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SpawnRotationChevron__Pool(____GlobalNamespace__SpawnRotationChevron__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SpawnRotationChevron__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SpawnRotationChevron>(ptr) {
}


  constexpr ____GlobalNamespace__SpawnRotationChevron__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SpawnRotationChevron__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SpawnRotationChevron__Pool& operator=(____GlobalNamespace__SpawnRotationChevron__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__SpawnRotationChevron__Pool& operator=(____GlobalNamespace__SpawnRotationChevron__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SpawnRotationChevron__Pool() ;

/// @brief Method .ctor addr 0x226a700 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron, "", "SpawnRotationChevron");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool, "", "SpawnRotationChevron/Pool");
