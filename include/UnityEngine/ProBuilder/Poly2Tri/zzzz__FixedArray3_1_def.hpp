#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
class UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10<T>;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
struct FixedArray3_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<::cordl_internals::il2cpp_reference_type T>
struct FixedArray3_1<T>;
}
// Type: ::<Enumerate>d__10
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1
// Type: ::<Enumerate>d__10
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15370))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15370), inst: 2 })
// CS Name: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::<Enumerate>d__10
class CORDL_TYPE UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10(UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10(UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10& operator=(UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10& operator=(UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __get___4__this() const;

 UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __declspec(property(get=__get___3____4__this, put=__set___3____4__this))  __3____4__this;

constexpr void __set___3____4__this(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __get___3____4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15371)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15371), inst: 2 })
// CS Name: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
struct CORDL_TYPE FixedArray3_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _Enumerate_d__10 = UnityEngine::ProBuilder::Poly2Tri::UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10<T>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_2", ty: "T", modifiers: "", def_value: None }]
constexpr FixedArray3_1(T _0, T _1, T _2) noexcept;


                    constexpr FixedArray3_1(FixedArray3_1 const&) = default;
                    constexpr FixedArray3_1(FixedArray3_1&&) = default;
                    constexpr FixedArray3_1& operator=(FixedArray3_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FixedArray3_1& operator=(FixedArray3_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FixedArray3_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get__0, put=__set__0))  _0;

constexpr void __set__0(T value) ;

constexpr T __get__0() const;

 T __declspec(property(get=__get__1, put=__set__1))  _1;

constexpr void __set__1(T value) ;

constexpr T __get__1() const;

 T __declspec(property(get=__get__2, put=__set__2))  _2;

constexpr void __set__2(T value) ;

constexpr T __get__2() const;


// Properties

 T __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, T value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(T value) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(T value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear(T value) ;

/// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerable_1<T> Enumerate() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::Poly2Tri::UnityEngine__ProBuilder__Poly2Tri__FixedArray3_1___Enumerate_d__10, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1/<Enumerate>d__10");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1");
