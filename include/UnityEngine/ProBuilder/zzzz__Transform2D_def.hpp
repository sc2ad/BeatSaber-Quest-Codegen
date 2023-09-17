#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Transform2D;
}
// Type: UnityEngine.ProBuilder::Transform2D
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12149))
// CS Name: UnityEngine.ProBuilder.Transform2D
class CORDL_TYPE Transform2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Transform2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: " const&", def_value: None }]
constexpr Transform2D(Transform2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "&&", def_value: None }]
constexpr Transform2D(Transform2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Transform2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Transform2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Transform2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Transform2D& operator=(Transform2D&& o) noexcept = default;
  constexpr Transform2D& operator=(Transform2D const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_position() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_scale() const;


// Methods

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
explicit Transform2D(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) ;

/// @brief Method .ctor addr 0x29e76c0 size 0x50 virtual false final false
 void _ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) ;

/// @brief Method TransformPoint addr 0x29e7710 size 0x64 virtual false final false
 ::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2 p) ;

/// @brief Method ToString addr 0x29e7774 size 0x1f4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Transform2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Transform2D, "UnityEngine.ProBuilder", "Transform2D");
