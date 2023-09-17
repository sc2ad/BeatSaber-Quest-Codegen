#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
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
template<typename TBase,typename TKey,typename TParam1>
class KeyedFactory_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TParam1>
class KeyedFactory_3<TBase,TKey,TParam1>;
}
// Type: Zenject::KeyedFactory`3
// Type: Zenject::KeyedFactory`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10937), inst: 3806 }), TypeDefinitionIndex(TypeDefinitionIndex(10939)), TypeDefinitionIndex(TypeDefinitionIndex(10937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10939), inst: 5155 })
// CS Name: Zenject.KeyedFactory`3
class CORDL_TYPE KeyedFactory_3<TBase,TKey,TParam1> : public ::Zenject::KeyedFactoryBase_2<TBase,TKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyedFactory_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_3", modifiers: " const&", def_value: None }]
constexpr KeyedFactory_3(KeyedFactory_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_3", modifiers: "&&", def_value: None }]
constexpr KeyedFactory_3(KeyedFactory_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyedFactory_3(void* ptr) noexcept : ::Zenject::KeyedFactoryBase_2<TBase,TKey>(ptr) {
}


  constexpr KeyedFactory_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyedFactory_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyedFactory_3& operator=(KeyedFactory_3&& o) noexcept = default;
  constexpr KeyedFactory_3& operator=(KeyedFactory_3 const& o) noexcept = default;
                


// Properties

 ::System::Collections::Generic::IEnumerable_1<::System::Type> __declspec(property(get=get_ProvidedTypes))  ProvidedTypes;


// Methods

/// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::System::Type> get_ProvidedTypes() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TBase Create(TKey key, TParam1 param1) ;

// Ctor Parameters []
explicit KeyedFactory_3() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactory_3, "Zenject", "KeyedFactory`3");
