#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class ViewController;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace HMUI {
struct ____HMUI__NavigationController__Alignment;
}
namespace HMUI {
struct ____HMUI__NavigationController__Orientation;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
class ____HMUI__NavigationController____c__DisplayClass10_0;
}
namespace HMUI {
class ____HMUI__NavigationController____c__DisplayClass8_0;
}
// Type: ::Orientation
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13635))
// CS Name: HMUI.NavigationController::Orientation
struct CORDL_TYPE ____HMUI__NavigationController__Orientation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HMUI__NavigationController__Orientation(int32_t value__) noexcept;


                    constexpr ____HMUI__NavigationController__Orientation(____HMUI__NavigationController__Orientation const&) = default;
                    constexpr ____HMUI__NavigationController__Orientation(____HMUI__NavigationController__Orientation&&) = default;
                    constexpr ____HMUI__NavigationController__Orientation& operator=(____HMUI__NavigationController__Orientation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HMUI__NavigationController__Orientation& operator=(____HMUI__NavigationController__Orientation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__NavigationController__Orientation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HMUI__NavigationController__Orientation_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HMUI__NavigationController__Orientation_Unwrapped () const noexcept {
return std::bit_cast<______HMUI__NavigationController__Orientation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static ::HMUI::____HMUI__NavigationController__Orientation const Horizontal;

/// @brief Field Vertical offset 0
static ::HMUI::____HMUI__NavigationController__Orientation const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::Alignment
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13636))
// CS Name: HMUI.NavigationController::Alignment
struct CORDL_TYPE ____HMUI__NavigationController__Alignment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HMUI__NavigationController__Alignment(int32_t value__) noexcept;


                    constexpr ____HMUI__NavigationController__Alignment(____HMUI__NavigationController__Alignment const&) = default;
                    constexpr ____HMUI__NavigationController__Alignment(____HMUI__NavigationController__Alignment&&) = default;
                    constexpr ____HMUI__NavigationController__Alignment& operator=(____HMUI__NavigationController__Alignment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HMUI__NavigationController__Alignment& operator=(____HMUI__NavigationController__Alignment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__NavigationController__Alignment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HMUI__NavigationController__Alignment_Unwrapped : int32_t {
__Beginning = 0,
__Middle = 1,
__End = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HMUI__NavigationController__Alignment_Unwrapped () const noexcept {
return std::bit_cast<______HMUI__NavigationController__Alignment_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Beginning offset 0
static ::HMUI::____HMUI__NavigationController__Alignment const Beginning;

/// @brief Field Middle offset 0
static ::HMUI::____HMUI__NavigationController__Alignment const Middle;

/// @brief Field End offset 0
static ::HMUI::____HMUI__NavigationController__Alignment const End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass8_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13637))
// CS Name: HMUI.NavigationController::<>c__DisplayClass8_0
class CORDL_TYPE ____HMUI__NavigationController____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____HMUI__NavigationController____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__NavigationController____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr ____HMUI__NavigationController____c__DisplayClass8_0(____HMUI__NavigationController____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__NavigationController____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr ____HMUI__NavigationController____c__DisplayClass8_0(____HMUI__NavigationController____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__NavigationController____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HMUI__NavigationController____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__NavigationController____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__NavigationController____c__DisplayClass8_0& operator=(____HMUI__NavigationController____c__DisplayClass8_0&& o) noexcept = default;
  constexpr ____HMUI__NavigationController____c__DisplayClass8_0& operator=(____HMUI__NavigationController____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_startPositions, put=__set_startPositions))  startPositions;

constexpr void __set_startPositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_startPositions() const;

 ::HMUI::NavigationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::HMUI::NavigationController value) ;

constexpr ::HMUI::NavigationController __get___4__this() const;

 ::HMUI::ViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(::HMUI::ViewController value) ;

constexpr ::HMUI::ViewController __get_viewController() const;

 ::ArrayW<float_t> __declspec(property(get=__get_endPositions, put=__set_endPositions))  endPositions;

constexpr void __set_endPositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_endPositions() const;


// Methods

// Ctor Parameters []
explicit ____HMUI__NavigationController____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x1fb7ca8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PushViewController>g__AnimationLayouter|0 addr 0x1fb7cb0 size 0x2b0 virtual false final false
 void _PushViewController_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass10_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13638))
// CS Name: HMUI.NavigationController::<>c__DisplayClass10_0
class CORDL_TYPE ____HMUI__NavigationController____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____HMUI__NavigationController____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__NavigationController____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr ____HMUI__NavigationController____c__DisplayClass10_0(____HMUI__NavigationController____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__NavigationController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr ____HMUI__NavigationController____c__DisplayClass10_0(____HMUI__NavigationController____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__NavigationController____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HMUI__NavigationController____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__NavigationController____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__NavigationController____c__DisplayClass10_0& operator=(____HMUI__NavigationController____c__DisplayClass10_0&& o) noexcept = default;
  constexpr ____HMUI__NavigationController____c__DisplayClass10_0& operator=(____HMUI__NavigationController____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_startPositions, put=__set_startPositions))  startPositions;

constexpr void __set_startPositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_startPositions() const;

 ::HMUI::NavigationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::HMUI::NavigationController value) ;

constexpr ::HMUI::NavigationController __get___4__this() const;

 ::ArrayW<float_t> __declspec(property(get=__get_endPositions, put=__set_endPositions))  endPositions;

constexpr void __set_endPositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_endPositions() const;

 float_t __declspec(property(get=__get_moveOffset, put=__set_moveOffset))  moveOffset;

constexpr void __set_moveOffset(float_t value) ;

constexpr float_t __get_moveOffset() const;


// Methods

// Ctor Parameters []
explicit ____HMUI__NavigationController____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x1fb7f60 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PopViewControllers>g__AnimationLayouter|0 addr 0x1fb7f68 size 0x278 virtual false final false
 void _PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> removingViewControllers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::NavigationController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13623))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13639))
// CS Name: HMUI.NavigationController
class CORDL_TYPE NavigationController : public ::HMUI::ContainerViewController {
public:
// Declarations
using __c__DisplayClass10_0 = ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0;

using __c__DisplayClass8_0 = ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0;

using Alignment = ::HMUI::____HMUI__NavigationController__Alignment;

using Orientation = ::HMUI::____HMUI__NavigationController__Orientation;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~NavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: " const&", def_value: None }]
constexpr NavigationController(NavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: "&&", def_value: None }]
constexpr NavigationController(NavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationController(void* ptr) noexcept : ::HMUI::ContainerViewController(ptr) {
}


  constexpr NavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationController& operator=(NavigationController&& o) noexcept = default;
  constexpr NavigationController& operator=(NavigationController const& o) noexcept = default;
                


// Fields

 ::HMUI::____HMUI__NavigationController__Orientation __declspec(property(get=__get__orientation, put=__set__orientation))  _orientation;

constexpr void __set__orientation(::HMUI::____HMUI__NavigationController__Orientation value) ;

constexpr ::HMUI::____HMUI__NavigationController__Orientation __get__orientation() const;

 bool __declspec(property(get=__get__reversedStacking, put=__set__reversedStacking))  _reversedStacking;

constexpr void __set__reversedStacking(bool value) ;

constexpr bool __get__reversedStacking() const;

 ::HMUI::____HMUI__NavigationController__Alignment __declspec(property(get=__get__alignment, put=__set__alignment))  _alignment;

constexpr void __set__alignment(::HMUI::____HMUI__NavigationController__Alignment value) ;

constexpr ::HMUI::____HMUI__NavigationController__Alignment __get__alignment() const;

 float_t __declspec(property(get=__get__edgeSize, put=__set__edgeSize))  _edgeSize;

constexpr void __set__edgeSize(float_t value) ;

constexpr float_t __get__edgeSize() const;

 float_t __declspec(property(get=__get__viewControllersSeparator, put=__set__viewControllersSeparator))  _viewControllersSeparator;

constexpr void __set__viewControllersSeparator(float_t value) ;

constexpr float_t __get__viewControllersSeparator() const;


// Methods

/// @brief Method LayoutViewControllers addr 0x1fb6640 size 0x118 virtual true final false
 void LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController> viewControllers) ;

/// @brief Method PushViewController addr 0x1fb521c size 0xdc virtual false final false
 void PushViewController(::HMUI::ViewController viewController, ::System::Action finishedCallback, bool immediately) ;

/// @brief Method PopViewController addr 0x1fb5458 size 0x14 virtual false final false
 void PopViewController(::System::Action finishedCallback, bool immediately) ;

/// @brief Method PopViewControllers addr 0x1fb55a0 size 0x1e4 virtual false final false
 void PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action finishedCallback, bool immediately) ;

/// @brief Method PositionVector addr 0x1fb6c7c size 0x20 virtual false final false
 ::UnityEngine::Vector3 PositionVector(float_t pos) ;

/// @brief Method SetupViewControllerRect addr 0x1fb6c4c size 0x30 virtual false final false
 void SetupViewControllerRect(::HMUI::ViewController viewController) ;

/// @brief Method GetNewPositionsForViewControllers addr 0x1fb6758 size 0x4f4 virtual false final false
 ::ArrayW<float_t> GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController> viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> fixedViewControllers, float_t fixedEndPos) ;

// Ctor Parameters []
explicit NavigationController() ;

/// @brief Method .ctor addr 0x1fb6c9c size 0x100c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__NavigationController__Alignment, "HMUI", "NavigationController/Alignment");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__NavigationController__Orientation, "HMUI", "NavigationController/Orientation");
NEED_NO_BOX(::HMUI::NavigationController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NavigationController, "HMUI", "NavigationController");
NEED_NO_BOX(::HMUI::____HMUI__NavigationController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__NavigationController____c__DisplayClass10_0, "HMUI", "NavigationController/<>c__DisplayClass10_0");
NEED_NO_BOX(::HMUI::____HMUI__NavigationController____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__NavigationController____c__DisplayClass8_0, "HMUI", "NavigationController/<>c__DisplayClass8_0");
