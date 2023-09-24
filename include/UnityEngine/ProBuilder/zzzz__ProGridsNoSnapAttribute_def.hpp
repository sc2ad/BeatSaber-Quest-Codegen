#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProGridsNoSnapAttribute;
}
// Type: UnityEngine.ProBuilder::ProGridsNoSnapAttribute
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12119))
// CS Name: UnityEngine.ProBuilder.ProGridsNoSnapAttribute
class CORDL_TYPE ProGridsNoSnapAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProGridsNoSnapAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProGridsNoSnapAttribute", modifiers: " const&", def_value: None }]
constexpr ProGridsNoSnapAttribute(ProGridsNoSnapAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProGridsNoSnapAttribute", modifiers: "&&", def_value: None }]
constexpr ProGridsNoSnapAttribute(ProGridsNoSnapAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProGridsNoSnapAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ProGridsNoSnapAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProGridsNoSnapAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProGridsNoSnapAttribute& operator=(ProGridsNoSnapAttribute&& o) noexcept = default;
  constexpr ProGridsNoSnapAttribute& operator=(ProGridsNoSnapAttribute const& o) noexcept = default;
                


// Methods

static UnityEngine::ProBuilder::ProGridsNoSnapAttribute New_ctor() ;

/// @brief Method .ctor addr 0x29cc414 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ProGridsNoSnapAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProGridsNoSnapAttribute, "UnityEngine.ProBuilder", "ProGridsNoSnapAttribute");
