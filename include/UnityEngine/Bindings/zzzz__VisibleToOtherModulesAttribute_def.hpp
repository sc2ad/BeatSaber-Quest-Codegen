#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class VisibleToOtherModulesAttribute;
}
// Type: UnityEngine.Bindings::VisibleToOtherModulesAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15868))
// CS Name: UnityEngine.Bindings.VisibleToOtherModulesAttribute
class CORDL_TYPE VisibleToOtherModulesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisibleToOtherModulesAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: " const&", def_value: None }]
constexpr VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: "&&", def_value: None }]
constexpr VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisibleToOtherModulesAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr VisibleToOtherModulesAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisibleToOtherModulesAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisibleToOtherModulesAttribute& operator=(VisibleToOtherModulesAttribute&& o) noexcept = default;
  constexpr VisibleToOtherModulesAttribute& operator=(VisibleToOtherModulesAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit VisibleToOtherModulesAttribute() ;

/// @brief Method .ctor addr 0x2ba105c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "modules", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit VisibleToOtherModulesAttribute(::ArrayW<::StringW> modules) ;

/// @brief Method .ctor addr 0x2ba1064 size 0x8 virtual false final false
 void _ctor(::ArrayW<::StringW> modules) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::VisibleToOtherModulesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::VisibleToOtherModulesAttribute, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
