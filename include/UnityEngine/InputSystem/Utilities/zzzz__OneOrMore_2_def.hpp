#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
class UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
class UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TList>
class UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
struct OneOrMore_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TList>
struct OneOrMore_2<TValue,TList>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
struct OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>;
}
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6779), inst: 4651 })
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2::Enumerator
class CORDL_TYPE UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> __get_m_List() const;


// Properties

 TValue __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TList>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6779))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6779), inst: 80 })
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2::Enumerator
class CORDL_TYPE UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<TValue>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator& operator=(UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

 UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> value) ;

constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> __get_m_List() const;


// Properties

 TValue __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue,TList> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6780)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6780), inst: 4651 })
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2
struct CORDL_TYPE OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<TValue>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<TValue>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<TValue>() const;

// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "m_Multiple", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
constexpr OneOrMore_2(bool m_IsSingle, TValue m_Single, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> m_Multiple) noexcept;


                    constexpr OneOrMore_2(OneOrMore_2 const&) = default;
                    constexpr OneOrMore_2(OneOrMore_2&&) = default;
                    constexpr OneOrMore_2& operator=(OneOrMore_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OneOrMore_2& operator=(OneOrMore_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OneOrMore_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_IsSingle, put=__set_m_IsSingle))  m_IsSingle;

constexpr void __set_m_IsSingle(bool value) ;

constexpr bool __get_m_IsSingle() const;

 TValue __declspec(property(get=__get_m_Single, put=__set_m_Single))  m_Single;

constexpr void __set_m_Single(TValue value) ;

constexpr TValue __get_m_Single() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_Multiple, put=__set_m_Multiple))  m_Multiple;

constexpr void __set_m_Multiple(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> __get_m_Multiple() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TValue __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(int32_t index) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TValue single) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> multiple) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___bs_hook__Il2CppWrapperType__(TValue single) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___bs_hook__Il2CppWrapperType__(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> multiple) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TValue> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type TList>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6780)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6780), inst: 80 })
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2
struct CORDL_TYPE OneOrMore_2<TValue,TList> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator<TValue, TList>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<TValue>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<TValue>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<TValue>() const;

// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "m_Multiple", ty: "TList", modifiers: "", def_value: None }]
constexpr OneOrMore_2(bool m_IsSingle, TValue m_Single, TList m_Multiple) noexcept;


                    constexpr OneOrMore_2(OneOrMore_2 const&) = default;
                    constexpr OneOrMore_2(OneOrMore_2&&) = default;
                    constexpr OneOrMore_2& operator=(OneOrMore_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OneOrMore_2& operator=(OneOrMore_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OneOrMore_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_IsSingle, put=__set_m_IsSingle))  m_IsSingle;

constexpr void __set_m_IsSingle(bool value) ;

constexpr bool __get_m_IsSingle() const;

 TValue __declspec(property(get=__get_m_Single, put=__set_m_Single))  m_Single;

constexpr void __set_m_Single(TValue value) ;

constexpr TValue __get_m_Single() const;

 TList __declspec(property(get=__get_m_Multiple, put=__set_m_Multiple))  m_Multiple;

constexpr void __set_m_Multiple(TList value) ;

constexpr TList __get_m_Multiple() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TValue __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(int32_t index) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TValue single) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TList multiple) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,TList_(TValue single) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> op_Implicit_UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue,TList_(TList multiple) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TValue> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__OneOrMore_2__Enumerator, "UnityEngine.InputSystem.Utilities", "OneOrMore`2/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::Utilities::OneOrMore_2, "UnityEngine.InputSystem.Utilities", "OneOrMore`2");
