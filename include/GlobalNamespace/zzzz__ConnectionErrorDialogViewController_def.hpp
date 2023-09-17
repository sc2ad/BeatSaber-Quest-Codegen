#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionErrorDialogViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5709))
// CS Name: ConnectionErrorDialogViewController::<>c__DisplayClass0_0
class CORDL_TYPE ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0(____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0(____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0& operator=(____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0& operator=(____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get_buttonAction, put=__set_buttonAction))  buttonAction;

constexpr void __set_buttonAction(::System::Action value) ;

constexpr ::System::Action __get_buttonAction() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x21575dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Init>b__0 addr 0x21575ec size 0x1c virtual false final false
 void _Init_b__0(int32_t btnIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectionErrorDialogViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5850))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5710))
// CS Name: ConnectionErrorDialogViewController
class CORDL_TYPE ConnectionErrorDialogViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ConnectionErrorDialogViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: " const&", def_value: None }]
constexpr ConnectionErrorDialogViewController(ConnectionErrorDialogViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionErrorDialogViewController", modifiers: "&&", def_value: None }]
constexpr ConnectionErrorDialogViewController(ConnectionErrorDialogViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionErrorDialogViewController(void* ptr) noexcept : ::GlobalNamespace::SimpleDialogPromptViewController(ptr) {
}


  constexpr ConnectionErrorDialogViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionErrorDialogViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionErrorDialogViewController& operator=(ConnectionErrorDialogViewController&& o) noexcept = default;
  constexpr ConnectionErrorDialogViewController& operator=(ConnectionErrorDialogViewController const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2157444 size 0x198 virtual false final false
 void Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action buttonAction) ;

// Ctor Parameters []
explicit ConnectionErrorDialogViewController() ;

/// @brief Method .ctor addr 0x21575e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ConnectionErrorDialogViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionErrorDialogViewController, "", "ConnectionErrorDialogViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ConnectionErrorDialogViewController____c__DisplayClass0_0, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
