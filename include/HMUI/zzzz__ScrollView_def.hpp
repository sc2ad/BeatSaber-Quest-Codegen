#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass56_0;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace HMUI {
struct HMUI__ScrollView__ScrollDirection;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass61_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Vector2;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass55_0;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass61_0;
}
namespace HMUI {
struct HMUI__ScrollView__ScrollViewDirection;
}
namespace HMUI {
class EventSystemListener;
}
namespace HMUI {
class ItemForFocussedScrolling;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class HMUI__ScrollView____c;
}
namespace HMUI {
struct HMUI__ScrollView__ScrollType;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class VerticalScrollIndicator;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
struct HMUI__ScrollView__ScrollDirection;
}
namespace HMUI {
struct HMUI__ScrollView__ScrollType;
}
namespace HMUI {
struct HMUI__ScrollView__ScrollViewDirection;
}
namespace HMUI {
class HMUI__ScrollView____c;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass55_0;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass56_0;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass61_0;
}
namespace HMUI {
class HMUI__ScrollView____c__DisplayClass61_1;
}
namespace HMUI {
class ScrollView;
}
// Type: ::ScrollType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13691))
// CS Name: HMUI.ScrollView::ScrollType
struct CORDL_TYPE HMUI__ScrollView__ScrollType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ScrollView__ScrollType(int32_t value__) noexcept;


                    constexpr HMUI__ScrollView__ScrollType(HMUI__ScrollView__ScrollType const&) = default;
                    constexpr HMUI__ScrollView__ScrollType(HMUI__ScrollView__ScrollType&&) = default;
                    constexpr HMUI__ScrollView__ScrollType& operator=(HMUI__ScrollView__ScrollType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ScrollView__ScrollType& operator=(HMUI__ScrollView__ScrollType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView__ScrollType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ScrollView__ScrollType_Unwrapped : int32_t {
__PageSize = 0,
__FixedCellSize = 1,
__FocusItems = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ScrollView__ScrollType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ScrollView__ScrollType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PageSize offset 0
static HMUI::HMUI__ScrollView__ScrollType const PageSize;

/// @brief Field FixedCellSize offset 0
static HMUI::HMUI__ScrollView__ScrollType const FixedCellSize;

/// @brief Field FocusItems offset 0
static HMUI::HMUI__ScrollView__ScrollType const FocusItems;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::ScrollDirection
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13692))
// CS Name: HMUI.ScrollView::ScrollDirection
struct CORDL_TYPE HMUI__ScrollView__ScrollDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ScrollView__ScrollDirection(int32_t value__) noexcept;


                    constexpr HMUI__ScrollView__ScrollDirection(HMUI__ScrollView__ScrollDirection const&) = default;
                    constexpr HMUI__ScrollView__ScrollDirection(HMUI__ScrollView__ScrollDirection&&) = default;
                    constexpr HMUI__ScrollView__ScrollDirection& operator=(HMUI__ScrollView__ScrollDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ScrollView__ScrollDirection& operator=(HMUI__ScrollView__ScrollDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView__ScrollDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ScrollView__ScrollDirection_Unwrapped : int32_t {
__None = 0,
__Up = 1,
__Down = 2,
__Left = 3,
__Right = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ScrollView__ScrollDirection_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ScrollView__ScrollDirection_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static HMUI::HMUI__ScrollView__ScrollDirection const None;

/// @brief Field Up offset 0
static HMUI::HMUI__ScrollView__ScrollDirection const Up;

/// @brief Field Down offset 0
static HMUI::HMUI__ScrollView__ScrollDirection const Down;

/// @brief Field Left offset 0
static HMUI::HMUI__ScrollView__ScrollDirection const Left;

/// @brief Field Right offset 0
static HMUI::HMUI__ScrollView__ScrollDirection const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::ScrollViewDirection
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13693))
// CS Name: HMUI.ScrollView::ScrollViewDirection
struct CORDL_TYPE HMUI__ScrollView__ScrollViewDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ScrollView__ScrollViewDirection(int32_t value__) noexcept;


                    constexpr HMUI__ScrollView__ScrollViewDirection(HMUI__ScrollView__ScrollViewDirection const&) = default;
                    constexpr HMUI__ScrollView__ScrollViewDirection(HMUI__ScrollView__ScrollViewDirection&&) = default;
                    constexpr HMUI__ScrollView__ScrollViewDirection& operator=(HMUI__ScrollView__ScrollViewDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ScrollView__ScrollViewDirection& operator=(HMUI__ScrollView__ScrollViewDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView__ScrollViewDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ScrollView__ScrollViewDirection_Unwrapped : int32_t {
__Vertical = 0,
__Horizontal = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ScrollView__ScrollViewDirection_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ScrollView__ScrollViewDirection_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertical offset 0
static HMUI::HMUI__ScrollView__ScrollViewDirection const Vertical;

/// @brief Field Horizontal offset 0
static HMUI::HMUI__ScrollView__ScrollViewDirection const Horizontal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13694))
// CS Name: HMUI.ScrollView::<>c
class CORDL_TYPE HMUI__ScrollView____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HMUI__ScrollView____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollView____c(HMUI__ScrollView____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollView____c(HMUI__ScrollView____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollView____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollView____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollView____c& operator=(HMUI__ScrollView____c&& o) noexcept = default;
  constexpr HMUI__ScrollView____c& operator=(HMUI__ScrollView____c const& o) noexcept = default;
                


// Fields

static HMUI::HMUI__ScrollView____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HMUI::HMUI__ScrollView____c value) ;

static HMUI::HMUI__ScrollView____c __get___9() ;

static System::Func_2<float_t,float_t> __declspec(property(get=__get___9__42_1, put=__set___9__42_1))  __9__42_1;

static void __set___9__42_1(System::Func_2<float_t,float_t> value) ;

static System::Func_2<float_t,float_t> __get___9__42_1() ;

static System::Func_2<float_t,float_t> __declspec(property(get=__get___9__42_3, put=__set___9__42_3))  __9__42_3;

static void __set___9__42_3(System::Func_2<float_t,float_t> value) ;

static System::Func_2<float_t,float_t> __get___9__42_3() ;


// Methods

static HMUI::HMUI__ScrollView____c New_ctor() ;

/// @brief Method .ctor addr 0x1fd1570 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__42_1 addr 0x1fd1578 size 0x4 virtual false final false
 float_t _Awake_b__42_1(float_t i) ;

/// @brief Method <Awake>b__42_3 addr 0x1fd157c size 0x4 virtual false final false
 float_t _Awake_b__42_3(float_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass55_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13695))
// CS Name: HMUI.ScrollView::<>c__DisplayClass55_0
class CORDL_TYPE HMUI__ScrollView____c__DisplayClass55_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMUI__ScrollView____c__DisplayClass55_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass55_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass55_0(HMUI__ScrollView____c__DisplayClass55_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass55_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass55_0(HMUI__ScrollView____c__DisplayClass55_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView____c__DisplayClass55_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollView____c__DisplayClass55_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass55_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass55_0& operator=(HMUI__ScrollView____c__DisplayClass55_0&& o) noexcept = default;
  constexpr HMUI__ScrollView____c__DisplayClass55_0& operator=(HMUI__ScrollView____c__DisplayClass55_0 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_threshold, put=__set_threshold))  threshold;

constexpr void __set_threshold(float_t value) ;

constexpr float_t __get_threshold() const;


// Methods

static HMUI::HMUI__ScrollView____c__DisplayClass55_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fd10cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PageUpButtonPressed>b__0 addr 0x1fd1580 size 0x10 virtual false final false
 bool _PageUpButtonPressed_b__0(float_t pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass56_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13696))
// CS Name: HMUI.ScrollView::<>c__DisplayClass56_0
class CORDL_TYPE HMUI__ScrollView____c__DisplayClass56_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMUI__ScrollView____c__DisplayClass56_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass56_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass56_0(HMUI__ScrollView____c__DisplayClass56_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass56_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass56_0(HMUI__ScrollView____c__DisplayClass56_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView____c__DisplayClass56_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollView____c__DisplayClass56_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass56_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass56_0& operator=(HMUI__ScrollView____c__DisplayClass56_0&& o) noexcept = default;
  constexpr HMUI__ScrollView____c__DisplayClass56_0& operator=(HMUI__ScrollView____c__DisplayClass56_0 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_threshold, put=__set_threshold))  threshold;

constexpr void __set_threshold(float_t value) ;

constexpr float_t __get_threshold() const;


// Methods

static HMUI::HMUI__ScrollView____c__DisplayClass56_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fd13e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PageDownButtonPressed>b__0 addr 0x1fd1590 size 0x10 virtual false final false
 bool _PageDownButtonPressed_b__0(float_t pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass61_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13697))
// CS Name: HMUI.ScrollView::<>c__DisplayClass61_0
class CORDL_TYPE HMUI__ScrollView____c__DisplayClass61_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMUI__ScrollView____c__DisplayClass61_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass61_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass61_0(HMUI__ScrollView____c__DisplayClass61_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass61_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass61_0(HMUI__ScrollView____c__DisplayClass61_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView____c__DisplayClass61_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollView____c__DisplayClass61_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass61_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass61_0& operator=(HMUI__ScrollView____c__DisplayClass61_0&& o) noexcept = default;
  constexpr HMUI__ScrollView____c__DisplayClass61_0& operator=(HMUI__ScrollView____c__DisplayClass61_0 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_threshold, put=__set_threshold))  threshold;

constexpr void __set_threshold(float_t value) ;

constexpr float_t __get_threshold() const;


// Methods

static HMUI::HMUI__ScrollView____c__DisplayClass61_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fd145c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleJoystickWasCenteredThisFrame>b__0 addr 0x1fd15a0 size 0x10 virtual false final false
 bool _HandleJoystickWasCenteredThisFrame_b__0(float_t pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass61_1
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13698))
// CS Name: HMUI.ScrollView::<>c__DisplayClass61_1
class CORDL_TYPE HMUI__ScrollView____c__DisplayClass61_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMUI__ScrollView____c__DisplayClass61_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass61_1", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass61_1(HMUI__ScrollView____c__DisplayClass61_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollView____c__DisplayClass61_1", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollView____c__DisplayClass61_1(HMUI__ScrollView____c__DisplayClass61_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollView____c__DisplayClass61_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollView____c__DisplayClass61_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass61_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollView____c__DisplayClass61_1& operator=(HMUI__ScrollView____c__DisplayClass61_1&& o) noexcept = default;
  constexpr HMUI__ScrollView____c__DisplayClass61_1& operator=(HMUI__ScrollView____c__DisplayClass61_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_threshold, put=__set_threshold))  threshold;

constexpr void __set_threshold(float_t value) ;

constexpr float_t __get_threshold() const;


// Methods

static HMUI::HMUI__ScrollView____c__DisplayClass61_1 New_ctor() ;

/// @brief Method .ctor addr 0x1fd1464 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleJoystickWasCenteredThisFrame>b__1 addr 0x1fd15b0 size 0x10 virtual false final false
 bool _HandleJoystickWasCenteredThisFrame_b__1(float_t pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ScrollView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13699))
// CS Name: HMUI.ScrollView
class CORDL_TYPE ScrollView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass61_1 = HMUI::HMUI__ScrollView____c__DisplayClass61_1;

using __c__DisplayClass61_0 = HMUI::HMUI__ScrollView____c__DisplayClass61_0;

using __c__DisplayClass56_0 = HMUI::HMUI__ScrollView____c__DisplayClass56_0;

using __c__DisplayClass55_0 = HMUI::HMUI__ScrollView____c__DisplayClass55_0;

using __c = HMUI::HMUI__ScrollView____c;

using ScrollViewDirection = HMUI::HMUI__ScrollView__ScrollViewDirection;

using ScrollDirection = HMUI::HMUI__ScrollView__ScrollDirection;

using ScrollType = HMUI::HMUI__ScrollView__ScrollType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ScrollView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: " const&", def_value: None }]
constexpr ScrollView(ScrollView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
constexpr ScrollView(ScrollView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScrollView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollView& operator=(ScrollView&& o) noexcept = default;
  constexpr ScrollView& operator=(ScrollView const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__viewport, put=__set__viewport))  _viewport;

constexpr void __set__viewport(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__viewport() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentRectTransform, put=__set__contentRectTransform))  _contentRectTransform;

constexpr void __set__contentRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentRectTransform() const;

 HMUI::HMUI__ScrollView__ScrollViewDirection __declspec(property(get=__get__scrollViewDirection, put=__set__scrollViewDirection))  _scrollViewDirection;

constexpr void __set__scrollViewDirection(HMUI::HMUI__ScrollView__ScrollViewDirection value) ;

constexpr HMUI::HMUI__ScrollView__ScrollViewDirection __get__scrollViewDirection() const;

 UnityEngine::UI::Button __declspec(property(get=__get__pageUpButton, put=__set__pageUpButton))  _pageUpButton;

constexpr void __set__pageUpButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__pageUpButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__pageDownButton, put=__set__pageDownButton))  _pageDownButton;

constexpr void __set__pageDownButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__pageDownButton() const;

 HMUI::VerticalScrollIndicator __declspec(property(get=__get__verticalScrollIndicator, put=__set__verticalScrollIndicator))  _verticalScrollIndicator;

constexpr void __set__verticalScrollIndicator(HMUI::VerticalScrollIndicator value) ;

constexpr HMUI::VerticalScrollIndicator __get__verticalScrollIndicator() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 float_t __declspec(property(get=__get__joystickScrollSpeed, put=__set__joystickScrollSpeed))  _joystickScrollSpeed;

constexpr void __set__joystickScrollSpeed(float_t value) ;

constexpr float_t __get__joystickScrollSpeed() const;

 float_t __declspec(property(get=__get__joystickQuickSnapMaxTime, put=__set__joystickQuickSnapMaxTime))  _joystickQuickSnapMaxTime;

constexpr void __set__joystickQuickSnapMaxTime(float_t value) ;

constexpr float_t __get__joystickQuickSnapMaxTime() const;

 HMUI::HMUI__ScrollView__ScrollType __declspec(property(get=__get__scrollType, put=__set__scrollType))  _scrollType;

constexpr void __set__scrollType(HMUI::HMUI__ScrollView__ScrollType value) ;

constexpr HMUI::HMUI__ScrollView__ScrollType __get__scrollType() const;

 float_t __declspec(property(get=__get__fixedCellSize, put=__set__fixedCellSize))  _fixedCellSize;

constexpr void __set__fixedCellSize(float_t value) ;

constexpr float_t __get__fixedCellSize() const;

 float_t __declspec(property(get=__get__scrollItemRelativeThresholdPosition, put=__set__scrollItemRelativeThresholdPosition))  _scrollItemRelativeThresholdPosition;

constexpr void __set__scrollItemRelativeThresholdPosition(float_t value) ;

constexpr float_t __get__scrollItemRelativeThresholdPosition() const;

 float_t __declspec(property(get=__get__pageStepNormalizedSize, put=__set__pageStepNormalizedSize))  _pageStepNormalizedSize;

constexpr void __set__pageStepNormalizedSize(float_t value) ;

constexpr float_t __get__pageStepNormalizedSize() const;

 bool __declspec(property(get=__get__scrollingLastFrame, put=__set__scrollingLastFrame))  _scrollingLastFrame;

constexpr void __set__scrollingLastFrame(bool value) ;

constexpr bool __get__scrollingLastFrame() const;

 bool __declspec(property(get=__get__isHoveredByPointer, put=__set__isHoveredByPointer))  _isHoveredByPointer;

constexpr void __set__isHoveredByPointer(bool value) ;

constexpr bool __get__isHoveredByPointer() const;

 bool __declspec(property(get=__get__shouldAnimate, put=__set__shouldAnimate))  _shouldAnimate;

constexpr void __set__shouldAnimate(bool value) ;

constexpr bool __get__shouldAnimate() const;

/// @brief Field kThumbstickThreshold offset 0
static constexpr float_t  kThumbstickThreshold{0.01};

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__platformHelper, put=__set__platformHelper))  _platformHelper;

constexpr void __set__platformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__platformHelper() const;

 System::Action_1<float_t> __declspec(property(get=__get_scrollPositionChangedEvent, put=__set_scrollPositionChangedEvent))  scrollPositionChangedEvent;

constexpr void __set_scrollPositionChangedEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_scrollPositionChangedEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 float_t __declspec(property(get=__get__destinationPos, put=__set__destinationPos))  _destinationPos;

constexpr void __set__destinationPos(float_t value) ;

constexpr float_t __get__destinationPos() const;

 ::ArrayW<float_t> __declspec(property(get=__get__scrollFocusPositions, put=__set__scrollFocusPositions))  _scrollFocusPositions;

constexpr void __set__scrollFocusPositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__scrollFocusPositions() const;

 HMUI::EventSystemListener __declspec(property(get=__get__eventSystemListener, put=__set__eventSystemListener))  _eventSystemListener;

constexpr void __set__eventSystemListener(HMUI::EventSystemListener value) ;

constexpr HMUI::EventSystemListener __get__eventSystemListener() const;

 HMUI::HMUI__ScrollView__ScrollDirection __declspec(property(get=__get__lastJoystickScrollDirection, put=__set__lastJoystickScrollDirection))  _lastJoystickScrollDirection;

constexpr void __set__lastJoystickScrollDirection(HMUI::HMUI__ScrollView__ScrollDirection value) ;

constexpr HMUI::HMUI__ScrollView__ScrollDirection __get__lastJoystickScrollDirection() const;

 float_t __declspec(property(get=__get__joystickScrollStartTime, put=__set__joystickScrollStartTime))  _joystickScrollStartTime;

constexpr void __set__joystickScrollStartTime(float_t value) ;

constexpr float_t __get__joystickScrollStartTime() const;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_viewportTransform))  viewportTransform;

 UnityEngine::RectTransform __declspec(property(get=get_contentTransform))  contentTransform;

 float_t __declspec(property(get=get_position))  position;

 float_t __declspec(property(get=get_scrollableSize))  scrollableSize;

 float_t __declspec(property(get=get_scrollPageSize))  scrollPageSize;

 float_t __declspec(property(get=get_contentSize))  contentSize;


// Methods

/// @brief Method add_scrollPositionChangedEvent addr 0x1fcf658 size 0xb0 virtual false final false
 void add_scrollPositionChangedEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_scrollPositionChangedEvent addr 0x1fcf708 size 0xb0 virtual false final false
 void remove_scrollPositionChangedEvent(System::Action_1<float_t> value) ;

/// @brief Method get_viewportTransform addr 0x1fcf7b8 size 0x8 virtual false final false
 UnityEngine::RectTransform get_viewportTransform() ;

/// @brief Method get_contentTransform addr 0x1fcf7c0 size 0x8 virtual false final false
 UnityEngine::RectTransform get_contentTransform() ;

/// @brief Method get_position addr 0x1fcf7c8 size 0x30 virtual false final false
 float_t get_position() ;

/// @brief Method get_scrollableSize addr 0x1fcf7f8 size 0x34 virtual false final false
 float_t get_scrollableSize() ;

/// @brief Method get_scrollPageSize addr 0x1fcf880 size 0x54 virtual false final false
 float_t get_scrollPageSize() ;

/// @brief Method get_contentSize addr 0x1fcf82c size 0x54 virtual false final false
 float_t get_contentSize() ;

/// @brief Method Awake addr 0x1fcf8d4 size 0x4e8 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x1fcff60 size 0x13c virtual false final false
 void OnDestroy() ;

/// @brief Method CheckScrollInput addr 0x1fd009c size 0x15c virtual false final false
 void CheckScrollInput() ;

/// @brief Method Update addr 0x1fd0740 size 0x120 virtual false final false
 void Update() ;

/// @brief Method SetContentSize addr 0x1fd0934 size 0x220 virtual false final false
 void SetContentSize(float_t contentSize) ;

/// @brief Method UpdateContentSize addr 0x1fcfdbc size 0x94 virtual false final false
 void UpdateContentSize() ;

/// @brief Method ScrollToEnd addr 0x1fd0b80 size 0x40 virtual false final false
 void ScrollToEnd(bool animated) ;

/// @brief Method ScrollToWorldPosition addr 0x1fd0bc0 size 0x48 virtual false final false
 void ScrollToWorldPosition(UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, bool animated) ;

/// @brief Method ScrollToWorldPositionIfOutsideArea addr 0x1fd0cb8 size 0xb0 virtual false final false
 void ScrollToWorldPositionIfOutsideArea(UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, float_t relativeBoundaryStart, float_t relativeBoundaryEnd, bool animated) ;

/// @brief Method ScrollTo addr 0x1fcf58c size 0xc4 virtual false final false
 void ScrollTo(float_t destinationPos, bool animated) ;

/// @brief Method WorldPositionToScrollViewPosition addr 0x1fd0c08 size 0xb0 virtual false final false
 UnityEngine::Vector2 WorldPositionToScrollViewPosition(UnityEngine::Vector3 worldPosition) ;

/// @brief Method SetDestinationPos addr 0x1fd0d68 size 0x54 virtual false final false
 void SetDestinationPos(float_t value) ;

/// @brief Method UpdateVerticalScrollIndicator addr 0x1fd0860 size 0xd4 virtual false final false
 void UpdateVerticalScrollIndicator(float_t posY) ;

/// @brief Method PageUpButtonPressed addr 0x1fd0de8 size 0x2e4 virtual false final false
 void PageUpButtonPressed() ;

/// @brief Method PageDownButtonPressed addr 0x1fd10d4 size 0x314 virtual false final false
 void PageDownButtonPressed() ;

/// @brief Method RefreshButtons addr 0x1fcfe50 size 0x110 virtual false final false
 void RefreshButtons() ;

/// @brief Method HandlePointerDidEnter addr 0x1fd13f0 size 0x14 virtual false final false
 void HandlePointerDidEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method HandlePointerDidExit addr 0x1fd1404 size 0x8 virtual false final false
 void HandlePointerDidExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method HandleJoystickWasNotCenteredThisFrame addr 0x1fd01f8 size 0xf4 virtual false final false
 void HandleJoystickWasNotCenteredThisFrame(UnityEngine::Vector2 deltaPos) ;

/// @brief Method HandleJoystickWasCenteredThisFrame addr 0x1fd02ec size 0x454 virtual false final false
 void HandleJoystickWasCenteredThisFrame() ;

/// @brief Method ResolveScrollDirection addr 0x1fd140c size 0x50 virtual false final false
 HMUI::HMUI__ScrollView__ScrollDirection ResolveScrollDirection(UnityEngine::Vector2 deltaPos) ;

static HMUI::ScrollView New_ctor() ;

/// @brief Method .ctor addr 0x1fd146c size 0x30 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__42_0 addr 0x1fd149c size 0x3c virtual false final false
 float_t _Awake_b__42_0(HMUI::ItemForFocussedScrolling item) ;

/// @brief Method <Awake>b__42_2 addr 0x1fd14d8 size 0x34 virtual false final false
 float_t _Awake_b__42_2(HMUI::ItemForFocussedScrolling item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView__ScrollDirection, "HMUI", "ScrollView/ScrollDirection");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView__ScrollType, "HMUI", "ScrollView/ScrollType");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView__ScrollViewDirection, "HMUI", "ScrollView/ScrollViewDirection");
NEED_NO_BOX(HMUI::HMUI__ScrollView____c);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView____c, "HMUI", "ScrollView/<>c");
NEED_NO_BOX(HMUI::HMUI__ScrollView____c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView____c__DisplayClass55_0, "HMUI", "ScrollView/<>c__DisplayClass55_0");
NEED_NO_BOX(HMUI::HMUI__ScrollView____c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView____c__DisplayClass56_0, "HMUI", "ScrollView/<>c__DisplayClass56_0");
NEED_NO_BOX(HMUI::HMUI__ScrollView____c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView____c__DisplayClass61_0, "HMUI", "ScrollView/<>c__DisplayClass61_0");
NEED_NO_BOX(HMUI::HMUI__ScrollView____c__DisplayClass61_1);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollView____c__DisplayClass61_1, "HMUI", "ScrollView/<>c__DisplayClass61_1");
NEED_NO_BOX(HMUI::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView, "HMUI", "ScrollView");
