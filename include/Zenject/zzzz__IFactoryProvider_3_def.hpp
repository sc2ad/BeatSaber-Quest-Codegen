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
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class IFactoryProvider_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
class IFactoryProvider_3<TParam1,TParam2,TContract>;
}
// Type: Zenject::IFactoryProvider`3
// Type: Zenject::IFactoryProvider`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11136)), TypeDefinitionIndex(TypeDefinitionIndex(11139)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3340 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11139), inst: 5155 })
// CS Name: Zenject.IFactoryProvider`3
class CORDL_TYPE IFactoryProvider_3<TParam1,TParam2,TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_3", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_3(IFactoryProvider_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_3", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_3(IFactoryProvider_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_3(void* ptr) noexcept : ::Zenject::IFactoryProviderBase_1<TContract>(ptr) {
}


  constexpr IFactoryProvider_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_3& operator=(IFactoryProvider_3&& o) noexcept = default;
  constexpr IFactoryProvider_3& operator=(IFactoryProvider_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "::System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_3(::Zenject::DiContainer container, ::System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_3, "Zenject", "IFactoryProvider`3");
