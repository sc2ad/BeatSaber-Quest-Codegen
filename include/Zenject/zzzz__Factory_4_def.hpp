#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class Factory_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class Factory_4<TParam1,TParam2,TParam3,TValue>;
}
// Type: Zenject::Factory`4
// Type: Zenject::Factory`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10954)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10953), inst: 3386 }), TypeDefinitionIndex(TypeDefinitionIndex(10953))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10954), inst: 5937 })
// CS Name: Zenject.Factory`4
class CORDL_TYPE Factory_4<TParam1,TParam2,TParam3,TValue> : public Zenject::PlaceholderFactory_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: " const&", def_value: None }]
constexpr Factory_4(Factory_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: "&&", def_value: None }]
constexpr Factory_4(Factory_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_4(void* ptr) noexcept : Zenject::PlaceholderFactory_4<TParam1,TParam2,TParam3,TValue>(ptr) {
}


  constexpr Factory_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_4& operator=(Factory_4&& o) noexcept = default;
  constexpr Factory_4& operator=(Factory_4 const& o) noexcept = default;
                


// Methods

static Zenject::Factory_4<TParam1,TParam2,TParam3,TValue> New_ctor() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_4, "Zenject", "Factory`4");
