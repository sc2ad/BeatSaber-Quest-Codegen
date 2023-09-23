#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace GlobalNamespace {
class SleepRigidbody2DWhenInvisible;
}
// Type: ::SleepRigidbody2DWhenInvisible
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13834))
// CS Name: SleepRigidbody2DWhenInvisible
class CORDL_TYPE SleepRigidbody2DWhenInvisible : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SleepRigidbody2DWhenInvisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "SleepRigidbody2DWhenInvisible", modifiers: " const&", def_value: None }]
constexpr SleepRigidbody2DWhenInvisible(SleepRigidbody2DWhenInvisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SleepRigidbody2DWhenInvisible", modifiers: "&&", def_value: None }]
constexpr SleepRigidbody2DWhenInvisible(SleepRigidbody2DWhenInvisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SleepRigidbody2DWhenInvisible(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SleepRigidbody2DWhenInvisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SleepRigidbody2DWhenInvisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SleepRigidbody2DWhenInvisible& operator=(SleepRigidbody2DWhenInvisible&& o) noexcept = default;
  constexpr SleepRigidbody2DWhenInvisible& operator=(SleepRigidbody2DWhenInvisible const& o) noexcept = default;
                


// Fields

 UnityEngine::Rigidbody2D __declspec(property(get=__get__rigidbody2D, put=__set__rigidbody2D))  _rigidbody2D;

constexpr void __set__rigidbody2D(UnityEngine::Rigidbody2D value) ;

constexpr UnityEngine::Rigidbody2D __get__rigidbody2D() const;


// Methods

/// @brief Method Awake addr 0x1f7b6f0 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method OnBecameInvisible addr 0x1f7b6f4 size 0x1c virtual false final false
 void OnBecameInvisible() ;

// Ctor Parameters []
explicit SleepRigidbody2DWhenInvisible() ;

/// @brief Method .ctor addr 0x1f7b710 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SleepRigidbody2DWhenInvisible);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SleepRigidbody2DWhenInvisible, "", "SleepRigidbody2DWhenInvisible");
