#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__IFixedTickable_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class FixedTickablesTaskUpdater;
}
// Type: Zenject::FixedTickablesTaskUpdater
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11279), inst: 4056 }), TypeDefinitionIndex(TypeDefinitionIndex(11279)), TypeDefinitionIndex(TypeDefinitionIndex(15675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11282))
// CS Name: Zenject.FixedTickablesTaskUpdater
class CORDL_TYPE FixedTickablesTaskUpdater : public ::Zenject::TaskUpdater_1<::Zenject::IFixedTickable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FixedTickablesTaskUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: " const&", def_value: None }]
constexpr FixedTickablesTaskUpdater(FixedTickablesTaskUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedTickablesTaskUpdater", modifiers: "&&", def_value: None }]
constexpr FixedTickablesTaskUpdater(FixedTickablesTaskUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedTickablesTaskUpdater(void* ptr) noexcept : ::Zenject::TaskUpdater_1<::Zenject::IFixedTickable>(ptr) {
}


  constexpr FixedTickablesTaskUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedTickablesTaskUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedTickablesTaskUpdater& operator=(FixedTickablesTaskUpdater&& o) noexcept = default;
  constexpr FixedTickablesTaskUpdater& operator=(FixedTickablesTaskUpdater const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateItem addr 0x2d9fed8 size 0x9c virtual true final false
 void UpdateItem(::Zenject::IFixedTickable task) ;

// Ctor Parameters []
explicit FixedTickablesTaskUpdater() ;

/// @brief Method .ctor addr 0x2d9ff74 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d9ffbc size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da0014 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::FixedTickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FixedTickablesTaskUpdater, "Zenject", "FixedTickablesTaskUpdater");
