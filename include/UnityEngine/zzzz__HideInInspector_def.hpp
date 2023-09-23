#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class HideInInspector;
}
// Type: UnityEngine::HideInInspector
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10161))
// CS Name: UnityEngine.HideInInspector
class CORDL_TYPE HideInInspector : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HideInInspector() = default;

// Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: " const&", def_value: None }]
constexpr HideInInspector(HideInInspector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: "&&", def_value: None }]
constexpr HideInInspector(HideInInspector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HideInInspector(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr HideInInspector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HideInInspector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HideInInspector& operator=(HideInInspector&& o) noexcept = default;
  constexpr HideInInspector& operator=(HideInInspector const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HideInInspector() ;

/// @brief Method .ctor addr 0x2b5b368 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::HideInInspector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HideInInspector, "UnityEngine", "HideInInspector");
