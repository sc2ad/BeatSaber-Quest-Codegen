#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ____UnityEngine__UI__GridLayoutGroup__Axis;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__GridLayoutGroup__Constraint;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__GridLayoutGroup__Corner;
}
namespace UnityEngine::UI {
class GridLayoutGroup;
}
// Type: ::Corner
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13017))
// CS Name: UnityEngine.UI.GridLayoutGroup::Corner
struct CORDL_TYPE ____UnityEngine__UI__GridLayoutGroup__Corner : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__GridLayoutGroup__Corner(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__GridLayoutGroup__Corner(____UnityEngine__UI__GridLayoutGroup__Corner const&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Corner(____UnityEngine__UI__GridLayoutGroup__Corner&&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Corner& operator=(____UnityEngine__UI__GridLayoutGroup__Corner const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Corner& operator=(____UnityEngine__UI__GridLayoutGroup__Corner&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__GridLayoutGroup__Corner(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__GridLayoutGroup__Corner_Unwrapped : int32_t {
__UpperLeft = 0,
__UpperRight = 1,
__LowerLeft = 2,
__LowerRight = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__GridLayoutGroup__Corner_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__GridLayoutGroup__Corner_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpperLeft offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner const UpperLeft;

/// @brief Field UpperRight offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner const UpperRight;

/// @brief Field LowerLeft offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner const LowerLeft;

/// @brief Field LowerRight offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner const LowerRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Axis
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13018))
// CS Name: UnityEngine.UI.GridLayoutGroup::Axis
struct CORDL_TYPE ____UnityEngine__UI__GridLayoutGroup__Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__GridLayoutGroup__Axis(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__GridLayoutGroup__Axis(____UnityEngine__UI__GridLayoutGroup__Axis const&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Axis(____UnityEngine__UI__GridLayoutGroup__Axis&&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Axis& operator=(____UnityEngine__UI__GridLayoutGroup__Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Axis& operator=(____UnityEngine__UI__GridLayoutGroup__Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__GridLayoutGroup__Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__GridLayoutGroup__Axis_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__GridLayoutGroup__Axis_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__GridLayoutGroup__Axis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis const Horizontal;

/// @brief Field Vertical offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Constraint
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13019))
// CS Name: UnityEngine.UI.GridLayoutGroup::Constraint
struct CORDL_TYPE ____UnityEngine__UI__GridLayoutGroup__Constraint : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__GridLayoutGroup__Constraint(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__GridLayoutGroup__Constraint(____UnityEngine__UI__GridLayoutGroup__Constraint const&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Constraint(____UnityEngine__UI__GridLayoutGroup__Constraint&&) = default;
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Constraint& operator=(____UnityEngine__UI__GridLayoutGroup__Constraint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__GridLayoutGroup__Constraint& operator=(____UnityEngine__UI__GridLayoutGroup__Constraint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__GridLayoutGroup__Constraint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__GridLayoutGroup__Constraint_Unwrapped : int32_t {
__Flexible = 0,
__FixedColumnCount = 1,
__FixedRowCount = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__GridLayoutGroup__Constraint_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__GridLayoutGroup__Constraint_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Flexible offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint const Flexible;

/// @brief Field FixedColumnCount offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint const FixedColumnCount;

/// @brief Field FixedRowCount offset 0
static ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint const FixedRowCount;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::GridLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13020))
// CS Name: UnityEngine.UI.GridLayoutGroup
class CORDL_TYPE GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
// Declarations
using Constraint = ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint;

using Axis = ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis;

using Corner = ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~GridLayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: " const&", def_value: None }]
constexpr GridLayoutGroup(GridLayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "&&", def_value: None }]
constexpr GridLayoutGroup(GridLayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GridLayoutGroup(void* ptr) noexcept : ::UnityEngine::UI::LayoutGroup(ptr) {
}


  constexpr GridLayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GridLayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GridLayoutGroup& operator=(GridLayoutGroup&& o) noexcept = default;
  constexpr GridLayoutGroup& operator=(GridLayoutGroup const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner __declspec(property(get=__get_m_StartCorner, put=__set_m_StartCorner))  m_StartCorner;

constexpr void __set_m_StartCorner(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner __get_m_StartCorner() const;

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis __declspec(property(get=__get_m_StartAxis, put=__set_m_StartAxis))  m_StartAxis;

constexpr void __set_m_StartAxis(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis __get_m_StartAxis() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_CellSize, put=__set_m_CellSize))  m_CellSize;

constexpr void __set_m_CellSize(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_CellSize() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Spacing, put=__set_m_Spacing))  m_Spacing;

constexpr void __set_m_Spacing(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Spacing() const;

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint __declspec(property(get=__get_m_Constraint, put=__set_m_Constraint))  m_Constraint;

constexpr void __set_m_Constraint(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint __get_m_Constraint() const;

 int32_t __declspec(property(get=__get_m_ConstraintCount, put=__set_m_ConstraintCount))  m_ConstraintCount;

constexpr void __set_m_ConstraintCount(int32_t value) ;

constexpr int32_t __get_m_ConstraintCount() const;


// Properties

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner __declspec(property(get=get_startCorner, put=set_startCorner))  startCorner;

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis __declspec(property(get=get_startAxis, put=set_startAxis))  startAxis;

 ::UnityEngine::Vector2 __declspec(property(get=get_cellSize, put=set_cellSize))  cellSize;

 ::UnityEngine::Vector2 __declspec(property(get=get_spacing, put=set_spacing))  spacing;

 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint __declspec(property(get=get_constraint, put=set_constraint))  constraint;

 int32_t __declspec(property(get=get_constraintCount, put=set_constraintCount))  constraintCount;


// Methods

/// @brief Method get_startCorner addr 0x2bfb93c size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner get_startCorner() ;

/// @brief Method set_startCorner addr 0x2bfb944 size 0x5c virtual false final false
 void set_startCorner(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner value) ;

/// @brief Method get_startAxis addr 0x2bfb9a0 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis get_startAxis() ;

/// @brief Method set_startAxis addr 0x2bfb9a8 size 0x5c virtual false final false
 void set_startAxis(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis value) ;

/// @brief Method get_cellSize addr 0x2bfba04 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_cellSize() ;

/// @brief Method set_cellSize addr 0x2bfba0c size 0x64 virtual false final false
 void set_cellSize(::UnityEngine::Vector2 value) ;

/// @brief Method get_spacing addr 0x2bfba70 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_spacing() ;

/// @brief Method set_spacing addr 0x2bfba78 size 0x64 virtual false final false
 void set_spacing(::UnityEngine::Vector2 value) ;

/// @brief Method get_constraint addr 0x2bfbadc size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint get_constraint() ;

/// @brief Method set_constraint addr 0x2bfbae4 size 0x5c virtual false final false
 void set_constraint(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint value) ;

/// @brief Method get_constraintCount addr 0x2bfbb40 size 0x8 virtual false final false
 int32_t get_constraintCount() ;

/// @brief Method set_constraintCount addr 0x2bfbb48 size 0x60 virtual false final false
 void set_constraintCount(int32_t value) ;

// Ctor Parameters []
explicit GridLayoutGroup() ;

/// @brief Method .ctor addr 0x2bfbba8 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bfbd3c size 0x1cc virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bfc348 size 0x228 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method SetLayoutHorizontal addr 0x2bfc604 size 0x8 virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2bfcbe4 size 0x8 virtual true final false
 void SetLayoutVertical() ;

/// @brief Method SetCellsAlongAxis addr 0x2bfc60c size 0x5d8 virtual false final false
 void SetCellsAlongAxis(int32_t axis) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__GridLayoutGroup__Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
NEED_NO_BOX(::UnityEngine::UI::GridLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup, "UnityEngine.UI", "GridLayoutGroup");
