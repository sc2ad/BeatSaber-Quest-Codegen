#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoKernel_def.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class DefaultGameObjectKernel;
}
// Type: Zenject::DefaultGameObjectKernel
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11265))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11263))
// CS Name: Zenject.DefaultGameObjectKernel
class CORDL_TYPE DefaultGameObjectKernel : public ::Zenject::MonoKernel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DefaultGameObjectKernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectKernel", modifiers: " const&", def_value: None }]
constexpr DefaultGameObjectKernel(DefaultGameObjectKernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectKernel", modifiers: "&&", def_value: None }]
constexpr DefaultGameObjectKernel(DefaultGameObjectKernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultGameObjectKernel(void* ptr) noexcept : ::Zenject::MonoKernel(ptr) {
}


  constexpr DefaultGameObjectKernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultGameObjectKernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultGameObjectKernel& operator=(DefaultGameObjectKernel&& o) noexcept = default;
  constexpr DefaultGameObjectKernel& operator=(DefaultGameObjectKernel const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DefaultGameObjectKernel() ;

/// @brief Method .ctor addr 0x2d9b4d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9b4e0 size 0x178 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::DefaultGameObjectKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectKernel, "Zenject", "DefaultGameObjectKernel");
