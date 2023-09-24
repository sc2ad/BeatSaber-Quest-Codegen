#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IValueTupleInternal;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IComparable;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::cordl_internals::is_or_is_backed_by<int32_t> T4,::cordl_internals::is_or_is_backed_by<int32_t> T6>
struct ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>;
}
// Type: System::ValueTuple`8
// Type: System::ValueTuple`8
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::cordl_internals::is_or_is_backed_by<int32_t> T4,::cordl_internals::is_or_is_backed_by<int32_t> T6>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2510)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 5165 })
// CS Name: System.ValueTuple`8
struct CORDL_TYPE ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>
constexpr operator  System::IEquatable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>
constexpr operator  System::IComparable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }, CppParam { name: "Item5", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Item6", ty: "T6", modifiers: "", def_value: None }, CppParam { name: "Item7", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Rest", ty: "System::ValueTuple_1<bool>", modifiers: "", def_value: None }]
constexpr ValueTuple_8(::cordl_internals::intptr_t Item1, T2 Item2, ::cordl_internals::intptr_t Item3, T4 Item4, ::cordl_internals::intptr_t Item5, T6 Item6, bool Item7, System::ValueTuple_1<bool> Rest) noexcept;


                    constexpr ValueTuple_8(ValueTuple_8 const&) = default;
                    constexpr ValueTuple_8(ValueTuple_8&&) = default;
                    constexpr ValueTuple_8& operator=(ValueTuple_8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_8& operator=(ValueTuple_8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Item3() const;

 T4 __declspec(property(get=__get_Item4, put=__set_Item4))  Item4;

constexpr void __set_Item4(T4 value) ;

constexpr T4 __get_Item4() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_Item5, put=__set_Item5))  Item5;

constexpr void __set_Item5(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Item5() const;

 T6 __declspec(property(get=__get_Item6, put=__set_Item6))  Item6;

constexpr void __set_Item6(T6 value) ;

constexpr T6 __get_Item6() const;

 bool __declspec(property(get=__get_Item7, put=__set_Item7))  Item7;

constexpr void __set_Item7(bool value) ;

constexpr bool __get_Item7() const;

 System::ValueTuple_1<bool> __declspec(property(get=__get_Rest, put=__set_Rest))  Rest;

constexpr void __set_Rest(System::ValueTuple_1<bool> value) ;

constexpr System::ValueTuple_1<bool> __get_Rest() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::cordl_internals::intptr_t item1, T2 item2, ::cordl_internals::intptr_t item3, T4 item4, ::cordl_internals::intptr_t item5, T6 item6, bool item7, System::ValueTuple_1<bool> rest) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>> other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetHashCodeCore(System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ValueTuple_8, "System", "ValueTuple`8");
