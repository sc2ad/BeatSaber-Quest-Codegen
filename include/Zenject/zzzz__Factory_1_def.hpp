#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class Factory_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class Factory_1<TValue>;
}
// Type: Zenject::Factory`1
// Type: Zenject::Factory`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10945)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10944), inst: 3350 }), TypeDefinitionIndex(TypeDefinitionIndex(10944))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10945), inst: 2 })
// CS Name: Zenject.Factory`1
class CORDL_TYPE Factory_1<TValue> : public ::Zenject::PlaceholderFactory_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_1", modifiers: " const&", def_value: None }]
constexpr Factory_1(Factory_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_1", modifiers: "&&", def_value: None }]
constexpr Factory_1(Factory_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_1(void* ptr) noexcept : ::Zenject::PlaceholderFactory_1<TValue>(ptr) {
}


  constexpr Factory_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_1& operator=(Factory_1&& o) noexcept = default;
  constexpr Factory_1& operator=(Factory_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_1() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_1, "Zenject", "Factory`1");
