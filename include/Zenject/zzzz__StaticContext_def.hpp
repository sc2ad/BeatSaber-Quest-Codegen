#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class StaticContext;
}
// Type: Zenject::StaticContext
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11070))
// CS Name: Zenject.StaticContext
class CORDL_TYPE StaticContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StaticContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: " const&", def_value: None }]
constexpr StaticContext(StaticContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: "&&", def_value: None }]
constexpr StaticContext(StaticContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticContext& operator=(StaticContext&& o) noexcept = default;
  constexpr StaticContext& operator=(StaticContext const& o) noexcept = default;
                


// Fields

static ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

static void __set__container(::Zenject::DiContainer value) ;

static ::Zenject::DiContainer __get__container() ;


// Properties

static bool __declspec(property(get=get_HasContainer))  HasContainer;

static ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method Clear addr 0x2d7b3e4 size 0x48 virtual false final false
static void Clear() ;

/// @brief Method get_HasContainer addr 0x2d7b42c size 0x50 virtual false final false
static bool get_HasContainer() ;

/// @brief Method get_Container addr 0x2d76e50 size 0x90 virtual false final false
static ::Zenject::DiContainer get_Container() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::StaticContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::StaticContext, "Zenject", "StaticContext");
