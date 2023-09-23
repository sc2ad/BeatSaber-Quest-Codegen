#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Cloth;
}
// Type: UnityEngine::Cloth
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16006))
// CS Name: UnityEngine.Cloth
class CORDL_TYPE Cloth : public UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Cloth() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: " const&", def_value: None }]
constexpr Cloth(Cloth const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "&&", def_value: None }]
constexpr Cloth(Cloth&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cloth(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr Cloth& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cloth& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cloth& operator=(Cloth&& o) noexcept = default;
  constexpr Cloth& operator=(Cloth const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__useContinuousCollision_k__BackingField, put=__set__useContinuousCollision_k__BackingField))  _useContinuousCollision_k__BackingField;

constexpr void __set__useContinuousCollision_k__BackingField(float_t value) ;

constexpr float_t __get__useContinuousCollision_k__BackingField() const;

 bool __declspec(property(get=__get__selfCollision_k__BackingField, put=__set__selfCollision_k__BackingField))  _selfCollision_k__BackingField;

constexpr void __set__selfCollision_k__BackingField(bool value) ;

constexpr bool __get__selfCollision_k__BackingField() const;


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_externalAcceleration))  externalAcceleration;


// Methods

/// @brief Method set_externalAcceleration addr 0x2b2791c size 0x54 virtual false final false
 void set_externalAcceleration(UnityEngine::Vector3 value) ;

/// @brief Method set_externalAcceleration_Injected addr 0x2b27970 size 0x44 virtual false final false
 void set_externalAcceleration_Injected(ByRef<UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Cloth);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cloth, "UnityEngine", "Cloth");
