#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstaller;
}
// Type: Zenject::ScriptableObjectInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11096))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11089))
// CS Name: Zenject.ScriptableObjectInstaller
class CORDL_TYPE ScriptableObjectInstaller : public Zenject::ScriptableObjectInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScriptableObjectInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstaller(ScriptableObjectInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstaller(ScriptableObjectInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstaller(void* ptr) noexcept : Zenject::ScriptableObjectInstallerBase(ptr) {
}


  constexpr ScriptableObjectInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstaller& operator=(ScriptableObjectInstaller&& o) noexcept = default;
  constexpr ScriptableObjectInstaller& operator=(ScriptableObjectInstaller const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ScriptableObjectInstaller() ;

/// @brief Method .ctor addr 0x2d7bfe4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d7bff4 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7c050 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ScriptableObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstaller, "Zenject", "ScriptableObjectInstaller");
