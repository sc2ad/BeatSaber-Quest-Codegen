#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
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
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MetricIdentifier___GetTags_d__13;
}
namespace GlobalNamespace {
struct MetricIdentifier;
}
namespace {
// Type: ::<GetTags>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2505), inst: 600 }), TypeDefinitionIndex(TypeDefinitionIndex(3747)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3821), inst: 3013 }), TypeDefinitionIndex(TypeDefinitionIndex(2505)), TypeDefinitionIndex(TypeDefinitionIndex(3820)), TypeDefinitionIndex(TypeDefinitionIndex(3748)), TypeDefinitionIndex(TypeDefinitionIndex(2413)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3820), inst: 3013 }), TypeDefinitionIndex(TypeDefinitionIndex(3821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12796))
// CS Name: MetricIdentifier::<GetTags>d__13
class CORDL_TYPE GlobalNamespace__MetricIdentifier___GetTags_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::StringW,::StringW>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::StringW,::StringW>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::StringW,::StringW>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::StringW,::StringW>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~GlobalNamespace__MetricIdentifier___GetTags_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MetricIdentifier___GetTags_d__13", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13(GlobalNamespace__MetricIdentifier___GetTags_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MetricIdentifier___GetTags_d__13", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13(GlobalNamespace__MetricIdentifier___GetTags_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MetricIdentifier___GetTags_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13& operator=(GlobalNamespace__MetricIdentifier___GetTags_d__13&& o) noexcept = default;
  constexpr GlobalNamespace__MetricIdentifier___GetTags_d__13& operator=(GlobalNamespace__MetricIdentifier___GetTags_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::ValueTuple_2<::StringW,::StringW> value) ;

constexpr System::ValueTuple_2<::StringW,::StringW> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 GlobalNamespace::MetricIdentifier __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MetricIdentifier value) ;

constexpr GlobalNamespace::MetricIdentifier __get___4__this() const;

 GlobalNamespace::MetricIdentifier __declspec(property(get=__get___3____4__this, put=__set___3____4__this))  __3____4__this;

constexpr void __set___3____4__this(GlobalNamespace::MetricIdentifier value) ;

constexpr GlobalNamespace::MetricIdentifier __get___3____4__this() const;


// Properties

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=System_Collections_Generic_IEnumerator_(System_Stringkey,System_Stringvalue)__get_Current))  System_Collections_Generic_IEnumerator_(System_Stringkey,System_Stringvalue)__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MetricIdentifier___GetTags_d__13(int32_t __1__state) ;

/// @brief Method .ctor addr 0xdc4644 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xdc46c4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xdc46c8 size 0xd4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<(System.Stringkey,System.Stringvalue)>.get_Current addr 0xdc479c size 0xc virtual true final true
 System::ValueTuple_2<::StringW,::StringW> System_Collections_Generic_IEnumerator_(System_Stringkey,System_Stringvalue)__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xdc47a8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xdc47e8 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<(System.Stringkey,System.Stringvalue)>.GetEnumerator addr 0xdc4844 size 0xc4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<::StringW,::StringW>> System_Collections_Generic_IEnumerable_(System_Stringkey,System_Stringvalue)__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xdc4908 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MetricIdentifier
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2414), inst: 2646 }), TypeDefinitionIndex(TypeDefinitionIndex(2414)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(2410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2410), inst: 2646 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12797))
// CS Name: MetricIdentifier
struct CORDL_TYPE MetricIdentifier : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetTags_d__13 = GlobalNamespace::GlobalNamespace__MetricIdentifier___GetTags_d__13;

/// @brief Convert operator to System::IComparable_1<GlobalNamespace::MetricIdentifier>
constexpr operator  System::IComparable_1<GlobalNamespace::MetricIdentifier>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::MetricIdentifier>
constexpr operator  System::IEquatable_1<GlobalNamespace::MetricIdentifier>() const;

// Ctor Parameters [CppParam { name: "metricName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_tag0", ty: "System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "_tag1", ty: "System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "_tag2", ty: "System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "_tag3", ty: "System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }]
constexpr MetricIdentifier(::StringW metricName, System::ValueTuple_2<::StringW,::StringW> _tag0, System::ValueTuple_2<::StringW,::StringW> _tag1, System::ValueTuple_2<::StringW,::StringW> _tag2, System::ValueTuple_2<::StringW,::StringW> _tag3) noexcept;


                    constexpr MetricIdentifier(MetricIdentifier const&) = default;
                    constexpr MetricIdentifier(MetricIdentifier&&) = default;
                    constexpr MetricIdentifier& operator=(MetricIdentifier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MetricIdentifier& operator=(MetricIdentifier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MetricIdentifier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_metricName, put=__set_metricName))  metricName;

constexpr void __set_metricName(::StringW value) ;

constexpr ::StringW __get_metricName() const;

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=__get__tag0, put=__set__tag0))  _tag0;

constexpr void __set__tag0(System::ValueTuple_2<::StringW,::StringW> value) ;

constexpr System::ValueTuple_2<::StringW,::StringW> __get__tag0() const;

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=__get__tag1, put=__set__tag1))  _tag1;

constexpr void __set__tag1(System::ValueTuple_2<::StringW,::StringW> value) ;

constexpr System::ValueTuple_2<::StringW,::StringW> __get__tag1() const;

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=__get__tag2, put=__set__tag2))  _tag2;

constexpr void __set__tag2(System::ValueTuple_2<::StringW,::StringW> value) ;

constexpr System::ValueTuple_2<::StringW,::StringW> __get__tag2() const;

 System::ValueTuple_2<::StringW,::StringW> __declspec(property(get=__get__tag3, put=__set__tag3))  _tag3;

constexpr void __set__tag3(System::ValueTuple_2<::StringW,::StringW> value) ;

constexpr System::ValueTuple_2<::StringW,::StringW> __get__tag3() const;


// Properties

 int32_t __declspec(property(get=get_tagCount))  tagCount;


// Methods

/// @brief Method get_tagCount addr 0xdc3ec0 size 0x44 virtual false final false
 int32_t get_tagCount() ;

/// @brief Method .ctor addr 0xdc2cf8 size 0xc0 virtual false final false
 void _ctor(::StringW metricName, System::ValueTuple_2<::StringW,::StringW> tag0, System::ValueTuple_2<::StringW,::StringW> tag1, System::ValueTuple_2<::StringW,::StringW> tag2, System::ValueTuple_2<::StringW,::StringW> tag3) ;

/// @brief Method CompareTo addr 0xdc3f04 size 0x98 virtual true final true
 int32_t CompareTo(GlobalNamespace::MetricIdentifier other) ;

/// @brief Method Equals addr 0xdc3f9c size 0x38 virtual true final true
 bool Equals(GlobalNamespace::MetricIdentifier other) ;

/// @brief Method Equals addr 0xdc3fd4 size 0x94 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xdc4068 size 0xd4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0xdc413c size 0x484 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetTags addr 0xdc45c0 size 0x84 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::StringW,::StringW>> GetTags() ;

/// @brief Method op_Implicit addr 0xdc4678 size 0x4c virtual false final false
static GlobalNamespace::MetricIdentifier op_Implicit_GlobalNamespace__MetricIdentifier(::StringW metricName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__MetricIdentifier___GetTags_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__MetricIdentifier___GetTags_d__13, "", "MetricIdentifier/<GetTags>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MetricIdentifier, "", "MetricIdentifier");
} // end anonymous namespace
