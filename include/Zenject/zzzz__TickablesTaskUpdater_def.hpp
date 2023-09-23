#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace Zenject {
class TickablesTaskUpdater;
}
// Type: Zenject::TickablesTaskUpdater
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11279), inst: 2990 }), TypeDefinitionIndex(TypeDefinitionIndex(15674)), TypeDefinitionIndex(TypeDefinitionIndex(11279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11280))
// CS Name: Zenject.TickablesTaskUpdater
class CORDL_TYPE TickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ITickable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TickablesTaskUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: " const&", def_value: None }]
constexpr TickablesTaskUpdater(TickablesTaskUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TickablesTaskUpdater", modifiers: "&&", def_value: None }]
constexpr TickablesTaskUpdater(TickablesTaskUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TickablesTaskUpdater(void* ptr) noexcept : Zenject::TaskUpdater_1<Zenject::ITickable>(ptr) {
}


  constexpr TickablesTaskUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TickablesTaskUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TickablesTaskUpdater& operator=(TickablesTaskUpdater&& o) noexcept = default;
  constexpr TickablesTaskUpdater& operator=(TickablesTaskUpdater const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateItem addr 0x2d9f8e0 size 0x9c virtual true final false
 void UpdateItem(Zenject::ITickable task) ;

// Ctor Parameters []
explicit TickablesTaskUpdater() ;

/// @brief Method .ctor addr 0x2d9f97c size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d9f9c4 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9fa1c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::TickablesTaskUpdater);
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickablesTaskUpdater, "Zenject", "TickablesTaskUpdater");
