#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class Behaviour;
}
// Type: UnityEngine::Behaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10129))
// CS Name: UnityEngine.Behaviour
class CORDL_TYPE Behaviour : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Behaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: " const&", def_value: None }]
constexpr Behaviour(Behaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "&&", def_value: None }]
constexpr Behaviour(Behaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Behaviour(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr Behaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Behaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Behaviour& operator=(Behaviour&& o) noexcept = default;
  constexpr Behaviour& operator=(Behaviour const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;

 bool __declspec(property(get=get_isActiveAndEnabled))  isActiveAndEnabled;


// Methods

/// @brief Method get_enabled addr 0x2b55ea0 size 0x3c virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x2b55edc size 0x44 virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_isActiveAndEnabled addr 0x2b55f20 size 0x3c virtual false final false
 bool get_isActiveAndEnabled() ;

// Ctor Parameters []
explicit Behaviour() ;

/// @brief Method .ctor addr 0x2b4f790 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Behaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Behaviour, "UnityEngine", "Behaviour");
