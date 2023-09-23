#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class IFactoryProvider_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class IFactoryProvider_1<TContract>;
}
namespace Zenject {
template<>
class IFactoryProvider_1<System::Int32Enum>;
}
namespace Zenject {
template<>
class IFactoryProvider_1<float_t>;
}
// Type: Zenject::IFactoryProvider`1
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3338 }), TypeDefinitionIndex(TypeDefinitionIndex(11136))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11137), inst: 2 })
// CS Name: Zenject.IFactoryProvider`1
class CORDL_TYPE IFactoryProvider_1<TContract> : public Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_1(void* ptr) noexcept : Zenject::IFactoryProviderBase_1<TContract>(ptr) {
}


  constexpr IFactoryProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1&& o) noexcept = default;
  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3338 }), TypeDefinitionIndex(TypeDefinitionIndex(11136))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11137), inst: 374 })
// CS Name: Zenject.IFactoryProvider`1
class CORDL_TYPE IFactoryProvider_1<float_t> : public Zenject::IFactoryProviderBase_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_1(void* ptr) noexcept : Zenject::IFactoryProviderBase_1<float_t>(ptr) {
}


  constexpr IFactoryProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1&& o) noexcept = default;
  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11136), inst: 3338 }), TypeDefinitionIndex(TypeDefinitionIndex(11136))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11137), inst: 4825 })
// CS Name: Zenject.IFactoryProvider`1
class CORDL_TYPE IFactoryProvider_1<System::Int32Enum> : public Zenject::IFactoryProviderBase_1<System::Int32Enum> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IFactoryProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: " const&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
constexpr IFactoryProvider_1(IFactoryProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactoryProvider_1(void* ptr) noexcept : Zenject::IFactoryProviderBase_1<System::Int32Enum>(ptr) {
}


  constexpr IFactoryProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1&& o) noexcept = default;
  constexpr IFactoryProvider_1& operator=(IFactoryProvider_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
explicit IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, System::Guid factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProvider_1, "Zenject", "IFactoryProvider`1");
