#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DoesNotRequireDomainReloadInitAttribute;
}
// Type: ::DoesNotRequireDomainReloadInitAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16085))
// CS Name: DoesNotRequireDomainReloadInitAttribute
class CORDL_TYPE DoesNotRequireDomainReloadInitAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DoesNotRequireDomainReloadInitAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoesNotRequireDomainReloadInitAttribute", modifiers: " const&", def_value: None }]
constexpr DoesNotRequireDomainReloadInitAttribute(DoesNotRequireDomainReloadInitAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoesNotRequireDomainReloadInitAttribute", modifiers: "&&", def_value: None }]
constexpr DoesNotRequireDomainReloadInitAttribute(DoesNotRequireDomainReloadInitAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoesNotRequireDomainReloadInitAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr DoesNotRequireDomainReloadInitAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoesNotRequireDomainReloadInitAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoesNotRequireDomainReloadInitAttribute& operator=(DoesNotRequireDomainReloadInitAttribute&& o) noexcept = default;
  constexpr DoesNotRequireDomainReloadInitAttribute& operator=(DoesNotRequireDomainReloadInitAttribute const& o) noexcept = default;
                


// Methods

static GlobalNamespace::DoesNotRequireDomainReloadInitAttribute New_ctor() ;

/// @brief Method .ctor addr 0x1f8f2c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DoesNotRequireDomainReloadInitAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DoesNotRequireDomainReloadInitAttribute, "", "DoesNotRequireDomainReloadInitAttribute");
