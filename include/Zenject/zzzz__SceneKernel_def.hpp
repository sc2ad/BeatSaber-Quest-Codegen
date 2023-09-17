#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoKernel_def.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SceneKernel;
}
// Type: Zenject::SceneKernel
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11265))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11268))
// CS Name: Zenject.SceneKernel
class CORDL_TYPE SceneKernel : public ::Zenject::MonoKernel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SceneKernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: " const&", def_value: None }]
constexpr SceneKernel(SceneKernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: "&&", def_value: None }]
constexpr SceneKernel(SceneKernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneKernel(void* ptr) noexcept : ::Zenject::MonoKernel(ptr) {
}


  constexpr SceneKernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneKernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneKernel& operator=(SceneKernel&& o) noexcept = default;
  constexpr SceneKernel& operator=(SceneKernel const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SceneKernel() ;

/// @brief Method .ctor addr 0x2d9d7c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9d7d0 size 0x178 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SceneKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneKernel, "Zenject", "SceneKernel");
