#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Linq::Expressions {
struct ExpressionType;
}
// Type: System.Linq.Expressions::ExpressionType
namespace System::Linq::Expressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14583))
// CS Name: System.Linq.Expressions.ExpressionType
struct CORDL_TYPE ExpressionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionType(int32_t value__) noexcept;


                    constexpr ExpressionType(ExpressionType const&) = default;
                    constexpr ExpressionType(ExpressionType&&) = default;
                    constexpr ExpressionType& operator=(ExpressionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExpressionType& operator=(ExpressionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExpressionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExpressionType_Unwrapped : int32_t {
__Add = 0,
__AddChecked = 1,
__And = 2,
__AndAlso = 3,
__ArrayLength = 4,
__ArrayIndex = 5,
__Call = 6,
__Coalesce = 7,
__Conditional = 8,
__Constant = 9,
__Convert = 10,
__ConvertChecked = 11,
__Divide = 12,
__Equal = 13,
__ExclusiveOr = 14,
__GreaterThan = 15,
__GreaterThanOrEqual = 16,
__Invoke = 17,
__Lambda = 18,
__LeftShift = 19,
__LessThan = 20,
__LessThanOrEqual = 21,
__ListInit = 22,
__MemberAccess = 23,
__MemberInit = 24,
__Modulo = 25,
__Multiply = 26,
__MultiplyChecked = 27,
__Negate = 28,
__UnaryPlus = 29,
__NegateChecked = 30,
__New = 31,
__NewArrayInit = 32,
__NewArrayBounds = 33,
__Not = 34,
__NotEqual = 35,
__Or = 36,
__OrElse = 37,
__Parameter = 38,
__Power = 39,
__Quote = 40,
__RightShift = 41,
__Subtract = 42,
__SubtractChecked = 43,
__TypeAs = 44,
__TypeIs = 45,
__Assign = 46,
__Block = 47,
__DebugInfo = 48,
__Decrement = 49,
__Dynamic = 50,
__Default = 51,
__Extension = 52,
__Goto = 53,
__Increment = 54,
__Index = 55,
__Label = 56,
__RuntimeVariables = 57,
__Loop = 58,
__Switch = 59,
__Throw = 60,
__Try = 61,
__Unbox = 62,
__AddAssign = 63,
__AndAssign = 64,
__DivideAssign = 65,
__ExclusiveOrAssign = 66,
__LeftShiftAssign = 67,
__ModuloAssign = 68,
__MultiplyAssign = 69,
__OrAssign = 70,
__PowerAssign = 71,
__RightShiftAssign = 72,
__SubtractAssign = 73,
__AddAssignChecked = 74,
__MultiplyAssignChecked = 75,
__SubtractAssignChecked = 76,
__PreIncrementAssign = 77,
__PreDecrementAssign = 78,
__PostIncrementAssign = 79,
__PostDecrementAssign = 80,
__TypeEqual = 81,
__OnesComplement = 82,
__IsTrue = 83,
__IsFalse = 84,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionType_Unwrapped () const noexcept {
return std::bit_cast<__ExpressionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Add offset 0
static System::Linq::Expressions::ExpressionType const Add;

/// @brief Field AddChecked offset 0
static System::Linq::Expressions::ExpressionType const AddChecked;

/// @brief Field And offset 0
static System::Linq::Expressions::ExpressionType const And;

/// @brief Field AndAlso offset 0
static System::Linq::Expressions::ExpressionType const AndAlso;

/// @brief Field ArrayLength offset 0
static System::Linq::Expressions::ExpressionType const ArrayLength;

/// @brief Field ArrayIndex offset 0
static System::Linq::Expressions::ExpressionType const ArrayIndex;

/// @brief Field Call offset 0
static System::Linq::Expressions::ExpressionType const Call;

/// @brief Field Coalesce offset 0
static System::Linq::Expressions::ExpressionType const Coalesce;

/// @brief Field Conditional offset 0
static System::Linq::Expressions::ExpressionType const Conditional;

/// @brief Field Constant offset 0
static System::Linq::Expressions::ExpressionType const Constant;

/// @brief Field Convert offset 0
static System::Linq::Expressions::ExpressionType const Convert;

/// @brief Field ConvertChecked offset 0
static System::Linq::Expressions::ExpressionType const ConvertChecked;

/// @brief Field Divide offset 0
static System::Linq::Expressions::ExpressionType const Divide;

/// @brief Field Equal offset 0
static System::Linq::Expressions::ExpressionType const Equal;

/// @brief Field ExclusiveOr offset 0
static System::Linq::Expressions::ExpressionType const ExclusiveOr;

/// @brief Field GreaterThan offset 0
static System::Linq::Expressions::ExpressionType const GreaterThan;

/// @brief Field GreaterThanOrEqual offset 0
static System::Linq::Expressions::ExpressionType const GreaterThanOrEqual;

/// @brief Field Invoke offset 0
static System::Linq::Expressions::ExpressionType const Invoke;

/// @brief Field Lambda offset 0
static System::Linq::Expressions::ExpressionType const Lambda;

/// @brief Field LeftShift offset 0
static System::Linq::Expressions::ExpressionType const LeftShift;

/// @brief Field LessThan offset 0
static System::Linq::Expressions::ExpressionType const LessThan;

/// @brief Field LessThanOrEqual offset 0
static System::Linq::Expressions::ExpressionType const LessThanOrEqual;

/// @brief Field ListInit offset 0
static System::Linq::Expressions::ExpressionType const ListInit;

/// @brief Field MemberAccess offset 0
static System::Linq::Expressions::ExpressionType const MemberAccess;

/// @brief Field MemberInit offset 0
static System::Linq::Expressions::ExpressionType const MemberInit;

/// @brief Field Modulo offset 0
static System::Linq::Expressions::ExpressionType const Modulo;

/// @brief Field Multiply offset 0
static System::Linq::Expressions::ExpressionType const Multiply;

/// @brief Field MultiplyChecked offset 0
static System::Linq::Expressions::ExpressionType const MultiplyChecked;

/// @brief Field Negate offset 0
static System::Linq::Expressions::ExpressionType const Negate;

/// @brief Field UnaryPlus offset 0
static System::Linq::Expressions::ExpressionType const UnaryPlus;

/// @brief Field NegateChecked offset 0
static System::Linq::Expressions::ExpressionType const NegateChecked;

/// @brief Field New offset 0
static System::Linq::Expressions::ExpressionType const New;

/// @brief Field NewArrayInit offset 0
static System::Linq::Expressions::ExpressionType const NewArrayInit;

/// @brief Field NewArrayBounds offset 0
static System::Linq::Expressions::ExpressionType const NewArrayBounds;

/// @brief Field Not offset 0
static System::Linq::Expressions::ExpressionType const Not;

/// @brief Field NotEqual offset 0
static System::Linq::Expressions::ExpressionType const NotEqual;

/// @brief Field Or offset 0
static System::Linq::Expressions::ExpressionType const Or;

/// @brief Field OrElse offset 0
static System::Linq::Expressions::ExpressionType const OrElse;

/// @brief Field Parameter offset 0
static System::Linq::Expressions::ExpressionType const Parameter;

/// @brief Field Power offset 0
static System::Linq::Expressions::ExpressionType const Power;

/// @brief Field Quote offset 0
static System::Linq::Expressions::ExpressionType const Quote;

/// @brief Field RightShift offset 0
static System::Linq::Expressions::ExpressionType const RightShift;

/// @brief Field Subtract offset 0
static System::Linq::Expressions::ExpressionType const Subtract;

/// @brief Field SubtractChecked offset 0
static System::Linq::Expressions::ExpressionType const SubtractChecked;

/// @brief Field TypeAs offset 0
static System::Linq::Expressions::ExpressionType const TypeAs;

/// @brief Field TypeIs offset 0
static System::Linq::Expressions::ExpressionType const TypeIs;

/// @brief Field Assign offset 0
static System::Linq::Expressions::ExpressionType const Assign;

/// @brief Field Block offset 0
static System::Linq::Expressions::ExpressionType const Block;

/// @brief Field DebugInfo offset 0
static System::Linq::Expressions::ExpressionType const DebugInfo;

/// @brief Field Decrement offset 0
static System::Linq::Expressions::ExpressionType const Decrement;

/// @brief Field Dynamic offset 0
static System::Linq::Expressions::ExpressionType const Dynamic;

/// @brief Field Default offset 0
static System::Linq::Expressions::ExpressionType const Default;

/// @brief Field Extension offset 0
static System::Linq::Expressions::ExpressionType const Extension;

/// @brief Field Goto offset 0
static System::Linq::Expressions::ExpressionType const Goto;

/// @brief Field Increment offset 0
static System::Linq::Expressions::ExpressionType const Increment;

/// @brief Field Index offset 0
static System::Linq::Expressions::ExpressionType const Index;

/// @brief Field Label offset 0
static System::Linq::Expressions::ExpressionType const Label;

/// @brief Field RuntimeVariables offset 0
static System::Linq::Expressions::ExpressionType const RuntimeVariables;

/// @brief Field Loop offset 0
static System::Linq::Expressions::ExpressionType const Loop;

/// @brief Field Switch offset 0
static System::Linq::Expressions::ExpressionType const Switch;

/// @brief Field Throw offset 0
static System::Linq::Expressions::ExpressionType const Throw;

/// @brief Field Try offset 0
static System::Linq::Expressions::ExpressionType const Try;

/// @brief Field Unbox offset 0
static System::Linq::Expressions::ExpressionType const Unbox;

/// @brief Field AddAssign offset 0
static System::Linq::Expressions::ExpressionType const AddAssign;

/// @brief Field AndAssign offset 0
static System::Linq::Expressions::ExpressionType const AndAssign;

/// @brief Field DivideAssign offset 0
static System::Linq::Expressions::ExpressionType const DivideAssign;

/// @brief Field ExclusiveOrAssign offset 0
static System::Linq::Expressions::ExpressionType const ExclusiveOrAssign;

/// @brief Field LeftShiftAssign offset 0
static System::Linq::Expressions::ExpressionType const LeftShiftAssign;

/// @brief Field ModuloAssign offset 0
static System::Linq::Expressions::ExpressionType const ModuloAssign;

/// @brief Field MultiplyAssign offset 0
static System::Linq::Expressions::ExpressionType const MultiplyAssign;

/// @brief Field OrAssign offset 0
static System::Linq::Expressions::ExpressionType const OrAssign;

/// @brief Field PowerAssign offset 0
static System::Linq::Expressions::ExpressionType const PowerAssign;

/// @brief Field RightShiftAssign offset 0
static System::Linq::Expressions::ExpressionType const RightShiftAssign;

/// @brief Field SubtractAssign offset 0
static System::Linq::Expressions::ExpressionType const SubtractAssign;

/// @brief Field AddAssignChecked offset 0
static System::Linq::Expressions::ExpressionType const AddAssignChecked;

/// @brief Field MultiplyAssignChecked offset 0
static System::Linq::Expressions::ExpressionType const MultiplyAssignChecked;

/// @brief Field SubtractAssignChecked offset 0
static System::Linq::Expressions::ExpressionType const SubtractAssignChecked;

/// @brief Field PreIncrementAssign offset 0
static System::Linq::Expressions::ExpressionType const PreIncrementAssign;

/// @brief Field PreDecrementAssign offset 0
static System::Linq::Expressions::ExpressionType const PreDecrementAssign;

/// @brief Field PostIncrementAssign offset 0
static System::Linq::Expressions::ExpressionType const PostIncrementAssign;

/// @brief Field PostDecrementAssign offset 0
static System::Linq::Expressions::ExpressionType const PostDecrementAssign;

/// @brief Field TypeEqual offset 0
static System::Linq::Expressions::ExpressionType const TypeEqual;

/// @brief Field OnesComplement offset 0
static System::Linq::Expressions::ExpressionType const OnesComplement;

/// @brief Field IsTrue offset 0
static System::Linq::Expressions::ExpressionType const IsTrue;

/// @brief Field IsFalse offset 0
static System::Linq::Expressions::ExpressionType const IsFalse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::ExpressionType, "System.Linq.Expressions", "ExpressionType");
