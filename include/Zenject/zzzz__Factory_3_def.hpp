#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_3_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class Factory_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class Factory_3<TParam1,TParam2,TValue>;
}
// Type: Zenject::Factory`3
// Type: Zenject::Factory`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10951)), TypeDefinitionIndex(TypeDefinitionIndex(10950)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10950), inst: 3375 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10951), inst: 5155 })
// CS Name: Zenject.Factory`3
class CORDL_TYPE Factory_3<TParam1,TParam2,TValue> : public Zenject::PlaceholderFactory_3<TParam1,TParam2,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_3", modifiers: " const&", def_value: None }]
constexpr Factory_3(Factory_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_3", modifiers: "&&", def_value: None }]
constexpr Factory_3(Factory_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_3(void* ptr) noexcept : Zenject::PlaceholderFactory_3<TParam1,TParam2,TValue>(ptr) {
}


  constexpr Factory_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_3& operator=(Factory_3&& o) noexcept = default;
  constexpr Factory_3& operator=(Factory_3 const& o) noexcept = default;
                


// Methods

static Zenject::Factory_3<TParam1,TParam2,TValue> New_ctor() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_3, "Zenject", "Factory`3");
