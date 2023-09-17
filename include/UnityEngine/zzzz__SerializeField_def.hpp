#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class SerializeField;
}
// Type: UnityEngine::SerializeField
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9990))
// CS Name: UnityEngine.SerializeField
class CORDL_TYPE SerializeField : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializeField() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: " const&", def_value: None }]
constexpr SerializeField(SerializeField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: "&&", def_value: None }]
constexpr SerializeField(SerializeField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializeField(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SerializeField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializeField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializeField& operator=(SerializeField&& o) noexcept = default;
  constexpr SerializeField& operator=(SerializeField const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SerializeField() ;

/// @brief Method .ctor addr 0x2b2b63c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SerializeField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeField, "UnityEngine", "SerializeField");
