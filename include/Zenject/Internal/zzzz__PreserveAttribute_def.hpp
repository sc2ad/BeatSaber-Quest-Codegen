#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Zenject::Internal {
class PreserveAttribute;
}
// Type: Zenject.Internal::PreserveAttribute
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15649))
// CS Name: Zenject.Internal.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreserveAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: " const&", def_value: None }]
constexpr PreserveAttribute(PreserveAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
constexpr PreserveAttribute(PreserveAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreserveAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr PreserveAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreserveAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreserveAttribute& operator=(PreserveAttribute&& o) noexcept = default;
  constexpr PreserveAttribute& operator=(PreserveAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PreserveAttribute() ;

/// @brief Method .ctor addr 0x2d402b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
} // end anonymous namespace
NEED_NO_BOX(::Zenject::Internal::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::PreserveAttribute, "Zenject.Internal", "PreserveAttribute");
