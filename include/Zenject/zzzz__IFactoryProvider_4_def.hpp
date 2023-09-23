#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
struct Guid;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class IFactoryProvider_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
class IFactoryProvider_4<TParam1,TParam2,TParam3,TContract>;
}
// Type: Zenject::IFactoryProvider`4
// Type: Zenject::IFactoryProvider`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11140)), TypeDefinitionIndex(TypeDefinitionIndex(11136)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3341 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11140), inst: 5937 })
// CS Name: Zenject.IFactoryProvider`4
class CORDL_TYPE IFactoryProvider_4<TParam1,TParam2,TParam3,TContract> : public Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_4", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_4(IFactoryProvider_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_4", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_4(IFactoryProvider_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_4(void* ptr) noexcept : Zenject::IFactoryProviderBase_1<TContract>(ptr) {
}


  constexpr IFactoryProvider_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_4& operator=(IFactoryProvider_4&& o) noexcept = default;
  constexpr IFactoryProvider_4& operator=(IFactoryProvider_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_4(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProvider_4, "Zenject", "IFactoryProvider`4");
