#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine {
class SpringJoint;
}
// Type: UnityEngine::SpringJoint
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15472))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15473))
// CS Name: UnityEngine.SpringJoint
class CORDL_TYPE SpringJoint : public UnityEngine::Joint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SpringJoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: " const&", def_value: None }]
constexpr SpringJoint(SpringJoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "&&", def_value: None }]
constexpr SpringJoint(SpringJoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpringJoint(void* ptr) noexcept : UnityEngine::Joint(ptr) {
}


  constexpr SpringJoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpringJoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpringJoint& operator=(SpringJoint&& o) noexcept = default;
  constexpr SpringJoint& operator=(SpringJoint const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(put=set_minDistance))  minDistance;

 float_t __declspec(property(put=set_maxDistance))  maxDistance;


// Methods

/// @brief Method set_minDistance addr 0x2ba02e8 size 0x4c virtual false final false
 void set_minDistance(float_t value) ;

/// @brief Method set_maxDistance addr 0x2ba0334 size 0x4c virtual false final false
 void set_maxDistance(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SpringJoint);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpringJoint, "UnityEngine", "SpringJoint");
