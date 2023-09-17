#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HMUI {
class ViewController;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace HMUI {
class StackedController;
}
namespace HMUI {
class ____HMUI__StackedController____c__DisplayClass5_0;
}
// Type: ::<>c__DisplayClass5_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13646))
// CS Name: HMUI.StackedController::<>c__DisplayClass5_0
class CORDL_TYPE ____HMUI__StackedController____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____HMUI__StackedController____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__StackedController____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr ____HMUI__StackedController____c__DisplayClass5_0(____HMUI__StackedController____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__StackedController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr ____HMUI__StackedController____c__DisplayClass5_0(____HMUI__StackedController____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__StackedController____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HMUI__StackedController____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__StackedController____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__StackedController____c__DisplayClass5_0& operator=(____HMUI__StackedController____c__DisplayClass5_0&& o) noexcept = default;
  constexpr ____HMUI__StackedController____c__DisplayClass5_0& operator=(____HMUI__StackedController____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_numberOfViewControllersToPop, put=__set_numberOfViewControllersToPop))  numberOfViewControllersToPop;

constexpr void __set_numberOfViewControllersToPop(int32_t value) ;

constexpr int32_t __get_numberOfViewControllersToPop() const;


// Methods

// Ctor Parameters []
explicit ____HMUI__StackedController____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x1fb9428 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PopViewControllers>g__AnimationLayouter|0 addr 0x1fb9564 size 0x74 virtual false final false
 void _PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> removingViewControllers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::StackedController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13623))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13647))
// CS Name: HMUI.StackedController
class CORDL_TYPE StackedController : public ::HMUI::ContainerViewController {
public:
// Declarations
using __c__DisplayClass5_0 = ::HMUI::____HMUI__StackedController____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~StackedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: " const&", def_value: None }]
constexpr StackedController(StackedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: "&&", def_value: None }]
constexpr StackedController(StackedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackedController(void* ptr) noexcept : ::HMUI::ContainerViewController(ptr) {
}


  constexpr StackedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackedController& operator=(StackedController&& o) noexcept = default;
  constexpr StackedController& operator=(StackedController const& o) noexcept = default;
                


// Properties

 ::HMUI::ViewController __declspec(property(get=get_topStackedViewController))  topStackedViewController;


// Methods

/// @brief Method get_topStackedViewController addr 0x1fb9008 size 0x78 virtual false final false
 ::HMUI::ViewController get_topStackedViewController() ;

/// @brief Method LayoutViewControllers addr 0x1fb9080 size 0xe8 virtual true final false
 void LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController> viewControllers) ;

/// @brief Method PushViewController addr 0x1fb91b4 size 0xac virtual false final false
 void PushViewController(::HMUI::ViewController viewController, ::System::Action finishedCallback, bool immediately) ;

/// @brief Method PopViewController addr 0x1fb9260 size 0x14 virtual false final false
 void PopViewController(::System::Action finishedCallback, bool immediately) ;

/// @brief Method PopViewControllers addr 0x1fb9274 size 0x1b4 virtual false final false
 void PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action finishedCallback, bool immediately) ;

/// @brief Method SetupViewControllerRect addr 0x1fb9168 size 0x28 virtual false final false
static void SetupViewControllerRect(::HMUI::ViewController viewController, int32_t index) ;

// Ctor Parameters []
explicit StackedController() ;

/// @brief Method .ctor addr 0x1fb94c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PushViewController>g__AnimationLayouter|3_0 addr 0x1fb94cc size 0x98 virtual false final false
static void _PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::StackedController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackedController, "HMUI", "StackedController");
NEED_NO_BOX(::HMUI::____HMUI__StackedController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__StackedController____c__DisplayClass5_0, "HMUI", "StackedController/<>c__DisplayClass5_0");