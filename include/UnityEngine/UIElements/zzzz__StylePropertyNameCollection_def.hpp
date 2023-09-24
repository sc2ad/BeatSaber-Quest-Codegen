#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StylePropertyNameCollection__Enumerator;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StylePropertyNameCollection__Enumerator;
}
// Type: ::Enumerator
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7285))
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection::Enumerator
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyNameCollection__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StylePropertyName>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StylePropertyName>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyNameCollection__Enumerator(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName> m_Enumerator) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyNameCollection__Enumerator(UnityEngine__UIElements__StylePropertyNameCollection__Enumerator const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyNameCollection__Enumerator(UnityEngine__UIElements__StylePropertyNameCollection__Enumerator&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyNameCollection__Enumerator& operator=(UnityEngine__UIElements__StylePropertyNameCollection__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyNameCollection__Enumerator& operator=(UnityEngine__UIElements__StylePropertyNameCollection__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyNameCollection__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator))  m_Enumerator;

constexpr void __set_m_Enumerator(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName> __get_m_Enumerator() const;


// Properties

 UnityEngine::UIElements::StylePropertyName __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x2cd7358 size 0xc virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::UIElements::StylePropertyName> enumerator) ;

/// @brief Method MoveNext addr 0x2cd7434 size 0x48 virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x2cd747c size 0x3c virtual true final true
 UnityEngine::UIElements::StylePropertyName get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2cd74b8 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x2cd7534 size 0x4 virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x2cd7538 size 0x48 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyNameCollection
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7286))
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection
struct CORDL_TYPE StylePropertyNameCollection : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyNameCollection__Enumerator;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::StylePropertyName>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::StylePropertyName>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "propertiesList", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }]
constexpr StylePropertyNameCollection(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> propertiesList) noexcept;


                    constexpr StylePropertyNameCollection(StylePropertyNameCollection const&) = default;
                    constexpr StylePropertyNameCollection(StylePropertyNameCollection&&) = default;
                    constexpr StylePropertyNameCollection& operator=(StylePropertyNameCollection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StylePropertyNameCollection& operator=(StylePropertyNameCollection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StylePropertyNameCollection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=__get_propertiesList, put=__set_propertiesList))  propertiesList;

constexpr void __set_propertiesList(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __get_propertiesList() const;


// Methods

/// @brief Method .ctor addr 0x2cd72e0 size 0x8 virtual false final false
 void _ctor(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> list) ;

/// @brief Method GetEnumerator addr 0x2cd72e8 size 0x70 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyNameCollection__Enumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator addr 0x2cd7364 size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StylePropertyName> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2cd73cc size 0x68 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StylePropertyNameCollection, "UnityEngine.UIElements", "StylePropertyNameCollection");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyNameCollection__Enumerator, "UnityEngine.UIElements", "StylePropertyNameCollection/Enumerator");
