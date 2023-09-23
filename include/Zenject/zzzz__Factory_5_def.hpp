#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_5_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class Factory_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
class Factory_5<TParam1,TParam2,TParam3,TParam4,TValue>;
}
// Type: Zenject::Factory`5
// Type: Zenject::Factory`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10956)), TypeDefinitionIndex(TypeDefinitionIndex(10957)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10956), inst: 3396 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10957), inst: 5938 })
// CS Name: Zenject.Factory`5
class CORDL_TYPE Factory_5<TParam1,TParam2,TParam3,TParam4,TValue> : public Zenject::PlaceholderFactory_5<TParam1,TParam2,TParam3,TParam4,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_5", modifiers: " const&", def_value: None }]
constexpr Factory_5(Factory_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_5", modifiers: "&&", def_value: None }]
constexpr Factory_5(Factory_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_5(void* ptr) noexcept : Zenject::PlaceholderFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>(ptr) {
}


  constexpr Factory_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_5& operator=(Factory_5&& o) noexcept = default;
  constexpr Factory_5& operator=(Factory_5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_5() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_5, "Zenject", "Factory`5");
