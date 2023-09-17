#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class SerializeReference;
}
// Type: UnityEngine::SerializeReference
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9991))
// CS Name: UnityEngine.SerializeReference
class CORDL_TYPE SerializeReference : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializeReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: " const&", def_value: None }]
constexpr SerializeReference(SerializeReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: "&&", def_value: None }]
constexpr SerializeReference(SerializeReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializeReference(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SerializeReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializeReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializeReference& operator=(SerializeReference&& o) noexcept = default;
  constexpr SerializeReference& operator=(SerializeReference const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SerializeReference() ;

/// @brief Method .ctor addr 0x2b2b644 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SerializeReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeReference, "UnityEngine", "SerializeReference");
