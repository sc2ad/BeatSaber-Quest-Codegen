#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
template<typename TSignal>
class BindSignalIdToBinder_1;
}
namespace Zenject {
class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalExtensions;
}
// Type: Zenject::SignalExtensions
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10598))
// CS Name: Zenject.SignalExtensions
class CORDL_TYPE SignalExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignalExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalExtensions", modifiers: " const&", def_value: None }]
constexpr SignalExtensions(SignalExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalExtensions", modifiers: "&&", def_value: None }]
constexpr SignalExtensions(SignalExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalExtensions& operator=(SignalExtensions&& o) noexcept = default;
  constexpr SignalExtensions& operator=(SignalExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method CreateDefaultSignalDeclarationBindInfo addr 0x2d492a8 size 0xa4 virtual false final false
static ::Zenject::SignalDeclarationBindInfo CreateDefaultSignalDeclarationBindInfo(::Zenject::DiContainer container, ::System::Type signalType) ;

/// @brief Method DeclareSignal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
static ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder DeclareSignal(::Zenject::DiContainer container) ;

/// @brief Method BindSignal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
static ::Zenject::BindSignalIdToBinder_1<TSignal> BindSignal(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SignalExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalExtensions, "Zenject", "SignalExtensions");
