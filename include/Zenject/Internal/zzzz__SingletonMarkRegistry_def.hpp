#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject::Internal {
class SingletonMarkRegistry;
}
// Type: Zenject.Internal::SingletonMarkRegistry
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11310))
// CS Name: Zenject.Internal.SingletonMarkRegistry
class CORDL_TYPE SingletonMarkRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SingletonMarkRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingletonMarkRegistry", modifiers: " const&", def_value: None }]
constexpr SingletonMarkRegistry(SingletonMarkRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingletonMarkRegistry", modifiers: "&&", def_value: None }]
constexpr SingletonMarkRegistry(SingletonMarkRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingletonMarkRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SingletonMarkRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingletonMarkRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingletonMarkRegistry& operator=(SingletonMarkRegistry&& o) noexcept = default;
  constexpr SingletonMarkRegistry& operator=(SingletonMarkRegistry const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<::System::Type> __declspec(property(get=__get__boundSingletons, put=__set__boundSingletons))  _boundSingletons;

constexpr void __set__boundSingletons(::System::Collections::Generic::HashSet_1<::System::Type> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Type> __get__boundSingletons() const;

 ::System::Collections::Generic::HashSet_1<::System::Type> __declspec(property(get=__get__boundNonSingletons, put=__set__boundNonSingletons))  _boundNonSingletons;

constexpr void __set__boundNonSingletons(::System::Collections::Generic::HashSet_1<::System::Type> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Type> __get__boundNonSingletons() const;


// Methods

/// @brief Method MarkNonSingleton addr 0x2da7f6c size 0xac virtual false final false
 void MarkNonSingleton(::System::Type type) ;

/// @brief Method MarkSingleton addr 0x2da8018 size 0xd4 virtual false final false
 void MarkSingleton(::System::Type type) ;

// Ctor Parameters []
explicit SingletonMarkRegistry() ;

/// @brief Method .ctor addr 0x2da80ec size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
} // end anonymous namespace
NEED_NO_BOX(::Zenject::Internal::SingletonMarkRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::SingletonMarkRegistry, "Zenject.Internal", "SingletonMarkRegistry");
