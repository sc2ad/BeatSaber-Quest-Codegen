#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
struct RangeValuePair_2<TKey,TValue>;
}
// Type: IntervalTree::RangeValuePair`2
// Type: IntervalTree::RangeValuePair`2
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(15981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15981), inst: 80 })
// CS Name: IntervalTree.RangeValuePair`2
struct CORDL_TYPE RangeValuePair_2<TKey,TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>
constexpr operator  ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>() const;

// Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: None }]
constexpr RangeValuePair_2(TKey _From_k__BackingField, TKey _To_k__BackingField, TValue _Value_k__BackingField) noexcept;


                    constexpr RangeValuePair_2(RangeValuePair_2 const&) = default;
                    constexpr RangeValuePair_2(RangeValuePair_2&&) = default;
                    constexpr RangeValuePair_2& operator=(RangeValuePair_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RangeValuePair_2& operator=(RangeValuePair_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RangeValuePair_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TKey __declspec(property(get=__get__From_k__BackingField, put=__set__From_k__BackingField))  _From_k__BackingField;

constexpr void __set__From_k__BackingField(TKey value) ;

constexpr TKey __get__From_k__BackingField() const;

 TKey __declspec(property(get=__get__To_k__BackingField, put=__set__To_k__BackingField))  _To_k__BackingField;

constexpr void __set__To_k__BackingField(TKey value) ;

constexpr TKey __get__To_k__BackingField() const;

 TValue __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(TValue value) ;

constexpr TValue __get__Value_k__BackingField() const;


// Properties

 TKey __declspec(property(get=get_From))  From;

 TKey __declspec(property(get=get_To))  To;

 TValue __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_From addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_From() ;

/// @brief Method get_To addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_To() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue get_Value() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TKey from, TKey to, TValue value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::IntervalTree::RangeValuePair_2<TKey,TValue> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::IntervalTree::RangeValuePair_2<TKey,TValue> left, ::IntervalTree::RangeValuePair_2<TKey,TValue> right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(::IntervalTree::RangeValuePair_2<TKey,TValue> left, ::IntervalTree::RangeValuePair_2<TKey,TValue> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IntervalTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::IntervalTree::RangeValuePair_2, "IntervalTree", "RangeValuePair`2");
