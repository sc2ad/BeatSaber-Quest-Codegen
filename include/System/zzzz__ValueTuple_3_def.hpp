#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class IValueTupleInternal;
}
namespace System {
class IComparable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
struct ValueTuple_3<T1,int32_t,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
struct ValueTuple_3<T1,T2,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
struct ValueTuple_3<T1,T2,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
struct ValueTuple_3<int32_t,T2,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3>
struct ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>;
}
namespace System {
template<>
struct ValueTuple_3<int32_t,int32_t,int32_t>;
}
// Type: System::ValueTuple`3
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5149 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<int32_t,int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(int32_t Item1, int32_t Item2, int32_t Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(int32_t value) ;

constexpr int32_t __get_Item1() const;

 int32_t __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(int32_t value) ;

constexpr int32_t __get_Item2() const;

 int32_t __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(int32_t value) ;

constexpr int32_t __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t item1, int32_t item2, int32_t item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<int32_t,int32_t,int32_t> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<int32_t,int32_t,int32_t> other) ;

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
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5150 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<int32_t,T2,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<int32_t,T2,int32_t>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<int32_t,T2,int32_t>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<int32_t,T2,int32_t>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<int32_t,T2,int32_t>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(int32_t Item1, T2 Item2, int32_t Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(int32_t value) ;

constexpr int32_t __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

 int32_t __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(int32_t value) ;

constexpr int32_t __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t item1, T2 item2, int32_t item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<int32_t,T2,int32_t> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<int32_t,T2,int32_t> other) ;

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
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5152 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<System::Int32Enum,System::Int32Enum,T3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr ValueTuple_3(System::Int32Enum Item1, System::Int32Enum Item2, T3 Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Int32Enum __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(System::Int32Enum value) ;

constexpr System::Int32Enum __get_Item1() const;

 System::Int32Enum __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(System::Int32Enum value) ;

constexpr System::Int32Enum __get_Item2() const;

 T3 __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(T3 value) ;

constexpr T3 __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Int32Enum item1, System::Int32Enum item2, T3 item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3> other) ;

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
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5153 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<T1,int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,int32_t,int32_t>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<T1,int32_t,int32_t>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,int32_t,int32_t>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<T1,int32_t,int32_t>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1 Item1, int32_t Item2, int32_t Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(T1 value) ;

constexpr T1 __get_Item1() const;

 int32_t __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(int32_t value) ;

constexpr int32_t __get_Item2() const;

 int32_t __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(int32_t value) ;

constexpr int32_t __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, int32_t item2, int32_t item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<T1,int32_t,int32_t> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<T1,int32_t,int32_t> other) ;

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
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5154 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<T1,T2,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,int32_t>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<T1,T2,int32_t>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,int32_t>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<T1,T2,int32_t>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1 Item1, T2 Item2, int32_t Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(T1 value) ;

constexpr T1 __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

 int32_t __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(int32_t value) ;

constexpr int32_t __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2, int32_t item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<T1,T2,int32_t> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<T1,T2,int32_t> other) ;

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
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5155 })
// CS Name: System.ValueTuple`3
struct CORDL_TYPE ValueTuple_3<T1,T2,T3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr operator  System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr operator  System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept;


                    constexpr ValueTuple_3(ValueTuple_3 const&) = default;
                    constexpr ValueTuple_3(ValueTuple_3&&) = default;
                    constexpr ValueTuple_3& operator=(ValueTuple_3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_3& operator=(ValueTuple_3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(T1 value) ;

constexpr T1 __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

 T3 __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(T3 value) ;

constexpr T3 __get_Item3() const;


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T1 item1, T2 item2, T3 item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::ValueTuple_3<T1,T2,T3> other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(System::ValueTuple_3<T1,T2,T3> other) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ValueTuple_3, "System", "ValueTuple`3");
