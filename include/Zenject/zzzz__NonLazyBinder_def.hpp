#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
namespace {
namespace Zenject {
class IfNotBoundBinder;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class NonLazyBinder;
}
// Type: Zenject::NonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10864))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10867))
// CS Name: Zenject.NonLazyBinder
class CORDL_TYPE NonLazyBinder : public ::Zenject::IfNotBoundBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: " const&", def_value: None }]
constexpr NonLazyBinder(NonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: "&&", def_value: None }]
constexpr NonLazyBinder(NonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NonLazyBinder(void* ptr) noexcept : ::Zenject::IfNotBoundBinder(ptr) {
}


  constexpr NonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NonLazyBinder& operator=(NonLazyBinder&& o) noexcept = default;
  constexpr NonLazyBinder& operator=(NonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }]
explicit NonLazyBinder(::Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d61d20 size 0x28 virtual false final false
 void _ctor(::Zenject::BindInfo bindInfo) ;

/// @brief Method NonLazy addr 0x2d61d48 size 0x20 virtual false final false
 ::Zenject::IfNotBoundBinder NonLazy() ;

/// @brief Method Lazy addr 0x2d61d68 size 0x1c virtual false final false
 ::Zenject::IfNotBoundBinder Lazy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::NonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NonLazyBinder, "Zenject", "NonLazyBinder");
