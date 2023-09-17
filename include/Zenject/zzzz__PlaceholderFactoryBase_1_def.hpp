#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class IValidatable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace Zenject {
class IPlaceholderFactory;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class PlaceholderFactoryBase_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class PlaceholderFactoryBase_1<TValue>;
}
// Type: Zenject::PlaceholderFactoryBase`1
// Type: Zenject::PlaceholderFactoryBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10968))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10968), inst: 2 })
// CS Name: Zenject.PlaceholderFactoryBase`1
class CORDL_TYPE PlaceholderFactoryBase_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IPlaceholderFactory
constexpr operator  ::Zenject::IPlaceholderFactory() const noexcept;

/// @brief Convert operator to ::Zenject::IValidatable
constexpr operator  ::Zenject::IValidatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlaceholderFactoryBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: " const&", def_value: None }]
constexpr PlaceholderFactoryBase_1(PlaceholderFactoryBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "&&", def_value: None }]
constexpr PlaceholderFactoryBase_1(PlaceholderFactoryBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlaceholderFactoryBase_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlaceholderFactoryBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlaceholderFactoryBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlaceholderFactoryBase_1& operator=(PlaceholderFactoryBase_1&& o) noexcept = default;
  constexpr PlaceholderFactoryBase_1& operator=(PlaceholderFactoryBase_1 const& o) noexcept = default;
                


// Fields

 ::Zenject::IProvider __declspec(property(get=__get__provider, put=__set__provider))  _provider;

constexpr void __set__provider(::Zenject::IProvider value) ;

constexpr ::Zenject::IProvider __get__provider() const;

 ::Zenject::InjectContext __declspec(property(get=__get__injectContext, put=__set__injectContext))  _injectContext;

constexpr void __set__injectContext(::Zenject::InjectContext value) ;

constexpr ::Zenject::InjectContext __get__injectContext() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::System::Type> __declspec(property(get=get_ParamTypes))  ParamTypes;


// Methods

/// @brief Method Construct addr 0x0 size 0xffffffffffffffff virtual false final false
 void Construct(::Zenject::IProvider provider, ::Zenject::InjectContext injectContext) ;

/// @brief Method CreateInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> extraArgs) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Validate() ;

/// @brief Method get_ParamTypes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::System::Type> get_ParamTypes() ;

// Ctor Parameters []
explicit PlaceholderFactoryBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
