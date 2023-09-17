#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ILateTickable_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ILateTickable;
}
// Forward declare root types
namespace Zenject {
class LateTickablesTaskUpdater;
}
// Type: Zenject::LateTickablesTaskUpdater
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11279), inst: 4061 }), TypeDefinitionIndex(TypeDefinitionIndex(15676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11281))
// CS Name: Zenject.LateTickablesTaskUpdater
class CORDL_TYPE LateTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::ILateTickable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LateTickablesTaskUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "LateTickablesTaskUpdater", modifiers: " const&", def_value: None }]
constexpr LateTickablesTaskUpdater(LateTickablesTaskUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LateTickablesTaskUpdater", modifiers: "&&", def_value: None }]
constexpr LateTickablesTaskUpdater(LateTickablesTaskUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LateTickablesTaskUpdater(void* ptr) noexcept : ::Zenject::TaskUpdater_1<::Zenject::ILateTickable>(ptr) {
}


  constexpr LateTickablesTaskUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LateTickablesTaskUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LateTickablesTaskUpdater& operator=(LateTickablesTaskUpdater&& o) noexcept = default;
  constexpr LateTickablesTaskUpdater& operator=(LateTickablesTaskUpdater const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateItem addr 0x2d9fbdc size 0x9c virtual true final false
 void UpdateItem(::Zenject::ILateTickable task) ;

// Ctor Parameters []
explicit LateTickablesTaskUpdater() ;

/// @brief Method .ctor addr 0x2d9fc78 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d9fcc0 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9fd18 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::LateTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LateTickablesTaskUpdater, "Zenject", "LateTickablesTaskUpdater");
