#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class SharedBetweenAnimatorsAttribute;
}
// Type: UnityEngine::SharedBetweenAnimatorsAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15057))
// CS Name: UnityEngine.SharedBetweenAnimatorsAttribute
class CORDL_TYPE SharedBetweenAnimatorsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SharedBetweenAnimatorsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: " const&", def_value: None }]
constexpr SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: "&&", def_value: None }]
constexpr SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SharedBetweenAnimatorsAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SharedBetweenAnimatorsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SharedBetweenAnimatorsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SharedBetweenAnimatorsAttribute& operator=(SharedBetweenAnimatorsAttribute&& o) noexcept = default;
  constexpr SharedBetweenAnimatorsAttribute& operator=(SharedBetweenAnimatorsAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SharedBetweenAnimatorsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SharedBetweenAnimatorsAttribute, "UnityEngine", "SharedBetweenAnimatorsAttribute");
