#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Joint;
}
// Type: UnityEngine::Joint
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15472))
// CS Name: UnityEngine.Joint
class CORDL_TYPE Joint : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Joint() = default;

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: " const&", def_value: None }]
constexpr Joint(Joint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "&&", def_value: None }]
constexpr Joint(Joint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Joint(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr Joint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Joint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Joint& operator=(Joint&& o) noexcept = default;
  constexpr Joint& operator=(Joint const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Rigidbody __declspec(property(get=get_connectedBody))  connectedBody;

 ::UnityEngine::Vector3 __declspec(property(put=set_connectedAnchor))  connectedAnchor;


// Methods

/// @brief Method get_connectedBody addr 0x2ba0214 size 0x3c virtual false final false
 ::UnityEngine::Rigidbody get_connectedBody() ;

/// @brief Method set_connectedAnchor addr 0x2ba0250 size 0x54 virtual false final false
 void set_connectedAnchor(::UnityEngine::Vector3 value) ;

/// @brief Method set_connectedAnchor_Injected addr 0x2ba02a4 size 0x44 virtual false final false
 void set_connectedAnchor_Injected(ByRef<::UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Joint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Joint, "UnityEngine", "Joint");
