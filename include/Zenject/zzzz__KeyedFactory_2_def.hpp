#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Zenject {
template<typename TBase,typename TKey>
class KeyedFactory_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
class KeyedFactory_2<TBase,TKey>;
}
// Type: Zenject::KeyedFactory`2
// Type: Zenject::KeyedFactory`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10937), inst: 3805 }), TypeDefinitionIndex(TypeDefinitionIndex(10938)), TypeDefinitionIndex(TypeDefinitionIndex(10937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10938), inst: 80 })
// CS Name: Zenject.KeyedFactory`2
class CORDL_TYPE KeyedFactory_2<TBase,TKey> : public Zenject::KeyedFactoryBase_2<TBase,TKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyedFactory_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_2", modifiers: " const&", def_value: None }]
constexpr KeyedFactory_2(KeyedFactory_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_2", modifiers: "&&", def_value: None }]
constexpr KeyedFactory_2(KeyedFactory_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyedFactory_2(void* ptr) noexcept : Zenject::KeyedFactoryBase_2<TBase,TKey>(ptr) {
}


  constexpr KeyedFactory_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyedFactory_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyedFactory_2& operator=(KeyedFactory_2&& o) noexcept = default;
  constexpr KeyedFactory_2& operator=(KeyedFactory_2 const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<System::Type> __declspec(property(get=get_ProvidedTypes))  ProvidedTypes;


// Methods

/// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<System::Type> get_ProvidedTypes() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TBase Create(TKey key) ;

// Ctor Parameters []
explicit KeyedFactory_2() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactory_2, "Zenject", "KeyedFactory`2");
