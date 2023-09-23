#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_7_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class Factory_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
class Factory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>;
}
// Type: Zenject::Factory`7
// Type: Zenject::Factory`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10962), inst: 3414 }), TypeDefinitionIndex(TypeDefinitionIndex(10963)), TypeDefinitionIndex(TypeDefinitionIndex(10962))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10963), inst: 5940 })
// CS Name: Zenject.Factory`7
class CORDL_TYPE Factory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> : public Zenject::PlaceholderFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_7", modifiers: " const&", def_value: None }]
constexpr Factory_7(Factory_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_7", modifiers: "&&", def_value: None }]
constexpr Factory_7(Factory_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_7(void* ptr) noexcept : Zenject::PlaceholderFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>(ptr) {
}


  constexpr Factory_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_7& operator=(Factory_7&& o) noexcept = default;
  constexpr Factory_7& operator=(Factory_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_7() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_7, "Zenject", "Factory`7");
