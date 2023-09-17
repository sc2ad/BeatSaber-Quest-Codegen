#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
// Forward declare root types
namespace Zenject {
class NullBindingFinalizer;
}
// Type: Zenject::NullBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10896))
// CS Name: Zenject.NullBindingFinalizer
class CORDL_TYPE NullBindingFinalizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IBindingFinalizer
constexpr operator  ::Zenject::IBindingFinalizer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NullBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr NullBindingFinalizer(NullBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr NullBindingFinalizer(NullBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullBindingFinalizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NullBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullBindingFinalizer& operator=(NullBindingFinalizer&& o) noexcept = default;
  constexpr NullBindingFinalizer& operator=(NullBindingFinalizer const& o) noexcept = default;
                


// Properties

 ::Zenject::BindingInheritanceMethods __declspec(property(get=get_BindingInheritanceMethod))  BindingInheritanceMethod;


// Methods

/// @brief Method get_BindingInheritanceMethod addr 0x2d68a14 size 0x8 virtual true final true
 ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod() ;

/// @brief Method FinalizeBinding addr 0x2d68a1c size 0x4 virtual true final true
 void FinalizeBinding(::Zenject::DiContainer container) ;

// Ctor Parameters []
explicit NullBindingFinalizer() ;

/// @brief Method .ctor addr 0x2d68a20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::NullBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NullBindingFinalizer, "Zenject", "NullBindingFinalizer");
