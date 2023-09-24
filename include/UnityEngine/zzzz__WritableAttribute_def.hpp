#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class WritableAttribute;
}
// Type: UnityEngine::WritableAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15862))
// CS Name: UnityEngine.WritableAttribute
class CORDL_TYPE WritableAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WritableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "WritableAttribute", modifiers: " const&", def_value: None }]
constexpr WritableAttribute(WritableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WritableAttribute", modifiers: "&&", def_value: None }]
constexpr WritableAttribute(WritableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WritableAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr WritableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WritableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WritableAttribute& operator=(WritableAttribute&& o) noexcept = default;
  constexpr WritableAttribute& operator=(WritableAttribute const& o) noexcept = default;
                


// Methods

static UnityEngine::WritableAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ba0e90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WritableAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WritableAttribute, "UnityEngine", "WritableAttribute");
