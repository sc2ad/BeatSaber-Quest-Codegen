#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_6_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class Factory_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
class Factory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Type: Zenject::Factory`6
// Type: Zenject::Factory`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10959), inst: 3405 }), TypeDefinitionIndex(TypeDefinitionIndex(10960)), TypeDefinitionIndex(TypeDefinitionIndex(10959))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10960), inst: 5939 })
// CS Name: Zenject.Factory`6
class CORDL_TYPE Factory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public ::Zenject::PlaceholderFactory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_6", modifiers: " const&", def_value: None }]
constexpr Factory_6(Factory_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_6", modifiers: "&&", def_value: None }]
constexpr Factory_6(Factory_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_6(void* ptr) noexcept : ::Zenject::PlaceholderFactory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>(ptr) {
}


  constexpr Factory_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_6& operator=(Factory_6&& o) noexcept = default;
  constexpr Factory_6& operator=(Factory_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_6() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_6, "Zenject", "Factory`6");
