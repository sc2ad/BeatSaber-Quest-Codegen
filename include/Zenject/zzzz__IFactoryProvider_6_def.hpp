#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace Zenject {
struct TypeValuePair;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class IFactoryProvider_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
class IFactoryProvider_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>;
}
// Type: Zenject::IFactoryProvider`6
// Type: Zenject::IFactoryProvider`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3343 }), TypeDefinitionIndex(TypeDefinitionIndex(11142)), TypeDefinitionIndex(TypeDefinitionIndex(11136))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11142), inst: 5939 })
// CS Name: Zenject.IFactoryProvider`6
class CORDL_TYPE IFactoryProvider_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_6", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_6(IFactoryProvider_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_6", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_6(IFactoryProvider_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_6(void* ptr) noexcept : ::Zenject::IFactoryProviderBase_1<TContract>(ptr) {
}


  constexpr IFactoryProvider_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_6& operator=(IFactoryProvider_6&& o) noexcept = default;
  constexpr IFactoryProvider_6& operator=(IFactoryProvider_6 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "::System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_6(::Zenject::DiContainer container, ::System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_6, "Zenject", "IFactoryProvider`6");
