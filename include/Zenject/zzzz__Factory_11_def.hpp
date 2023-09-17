#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_11_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TValue>
class Factory_11;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10,::cordl_internals::il2cpp_reference_type TValue>
class Factory_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue>;
}
// Type: Zenject::Factory`11
// Type: Zenject::Factory`11
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10965)), TypeDefinitionIndex(TypeDefinitionIndex(10966)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10965), inst: 3356 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10966), inst: 5955 })
// CS Name: Zenject.Factory`11
class CORDL_TYPE Factory_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue> : public ::Zenject::PlaceholderFactory_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_11() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_11", modifiers: " const&", def_value: None }]
constexpr Factory_11(Factory_11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_11", modifiers: "&&", def_value: None }]
constexpr Factory_11(Factory_11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_11(void* ptr) noexcept : ::Zenject::PlaceholderFactory_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue>(ptr) {
}


  constexpr Factory_11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_11& operator=(Factory_11&& o) noexcept = default;
  constexpr Factory_11& operator=(Factory_11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_11() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_11, "Zenject", "Factory`11");
