#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Type: UnityEngine::Rigidbody2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15819))
// CS Name: UnityEngine.Rigidbody2D
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Rigidbody2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: " const&", def_value: None }]
constexpr Rigidbody2D(Rigidbody2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None }]
constexpr Rigidbody2D(Rigidbody2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rigidbody2D(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr Rigidbody2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rigidbody2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rigidbody2D& operator=(Rigidbody2D&& o) noexcept = default;
  constexpr Rigidbody2D& operator=(Rigidbody2D const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Vector2 __declspec(property(get=get_position))  position;

 ::UnityEngine::Vector2 __declspec(property(get=get_velocity, put=set_velocity))  velocity;


// Methods

/// @brief Method get_position addr 0x2b9b214 size 0x4c virtual false final false
 ::UnityEngine::Vector2 get_position() ;

/// @brief Method get_velocity addr 0x2b9b2a4 size 0x4c virtual false final false
 ::UnityEngine::Vector2 get_velocity() ;

/// @brief Method set_velocity addr 0x2b9b334 size 0x48 virtual false final false
 void set_velocity(::UnityEngine::Vector2 value) ;

/// @brief Method Sleep addr 0x2b9b3c0 size 0x103c virtual false final false
 void Sleep() ;

/// @brief Method get_position_Injected addr 0x2b9b260 size 0x44 virtual false final false
 void get_position_Injected(ByRef<::UnityEngine::Vector2> ret) ;

/// @brief Method get_velocity_Injected addr 0x2b9b2f0 size 0x44 virtual false final false
 void get_velocity_Injected(ByRef<::UnityEngine::Vector2> ret) ;

/// @brief Method set_velocity_Injected addr 0x2b9b37c size 0x44 virtual false final false
 void set_velocity_Injected(ByRef<::UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D, "UnityEngine", "Rigidbody2D");
