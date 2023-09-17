#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ExecutionOrderInstaller;
}
// Type: Zenject::ExecutionOrderInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11074)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 1612 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11074), inst: 3769 }), TypeDefinitionIndex(TypeDefinitionIndex(2493)), TypeDefinitionIndex(TypeDefinitionIndex(3828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11293))
// CS Name: Zenject.ExecutionOrderInstaller
class CORDL_TYPE ExecutionOrderInstaller : public ::Zenject::Installer_2<::System::Collections::Generic::List_1<::System::Type>,::Zenject::ExecutionOrderInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ExecutionOrderInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionOrderInstaller", modifiers: " const&", def_value: None }]
constexpr ExecutionOrderInstaller(ExecutionOrderInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionOrderInstaller", modifiers: "&&", def_value: None }]
constexpr ExecutionOrderInstaller(ExecutionOrderInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecutionOrderInstaller(void* ptr) noexcept : ::Zenject::Installer_2<::System::Collections::Generic::List_1<::System::Type>,::Zenject::ExecutionOrderInstaller>(ptr) {
}


  constexpr ExecutionOrderInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecutionOrderInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecutionOrderInstaller& operator=(ExecutionOrderInstaller&& o) noexcept = default;
  constexpr ExecutionOrderInstaller& operator=(ExecutionOrderInstaller const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::Type> __declspec(property(get=__get__typeOrder, put=__set__typeOrder))  _typeOrder;

constexpr void __set__typeOrder(::System::Collections::Generic::List_1<::System::Type> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Type> __get__typeOrder() const;


// Methods

// Ctor Parameters [CppParam { name: "typeOrder", ty: "::System::Collections::Generic::List_1<::System::Type>", modifiers: "", def_value: None }]
explicit ExecutionOrderInstaller(::System::Collections::Generic::List_1<::System::Type> typeOrder) ;

/// @brief Method .ctor addr 0x2da4b6c size 0x5c virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::System::Type> typeOrder) ;

/// @brief Method InstallBindings addr 0x2da4bc8 size 0x164 virtual true final false
 void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2da4d2c size 0xc4 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da4df0 size 0x274 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ExecutionOrderInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ExecutionOrderInstaller, "Zenject", "ExecutionOrderInstaller");
