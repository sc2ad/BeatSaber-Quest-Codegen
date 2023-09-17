#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__TemplateAsset__AttributeOverride;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0;
}
// Type: ::UsingEntry
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7095))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::UsingEntry
struct CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualTreeAsset", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry(::StringW alias, ::StringW path, ::UnityEngine::UIElements::VisualTreeAsset asset) noexcept;


                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry(____UnityEngine__UIElements__VisualTreeAsset__UsingEntry const&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry(____UnityEngine__UIElements__VisualTreeAsset__UsingEntry&&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry& operator=(____UnityEngine__UIElements__VisualTreeAsset__UsingEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry& operator=(____UnityEngine__UIElements__VisualTreeAsset__UsingEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset__UsingEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

static void __set_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> value) ;

static ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __get_comparer() ;

 ::StringW __declspec(property(get=__get_alias, put=__set_alias))  alias;

constexpr void __set_alias(::StringW value) ;

constexpr ::StringW __get_alias() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get_asset, put=__set_asset))  asset;

constexpr void __set_asset(::UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset __get_asset() const;


// Methods

/// @brief Method .ctor addr 0x2c9c4ec size 0xc virtual false final false
 void _ctor(::StringW alias, ::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UsingEntryComparer
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7096))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::UsingEntryComparer
class CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry>
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer(____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer(____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer& operator=(____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer& operator=(____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x2c9c974 size 0x10 virtual true final true
 int32_t Compare(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry x, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry y) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer() ;

/// @brief Method .ctor addr 0x2c9c96c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::SlotDefinition
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7097))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::SlotDefinition
struct CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition(::StringW name, int32_t insertionPointId) noexcept;


                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition(____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition const&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition(____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition&&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition& operator=(____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition& operator=(____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_insertionPointId, put=__set_insertionPointId))  insertionPointId;

constexpr void __set_insertionPointId(int32_t value) ;

constexpr int32_t __get_insertionPointId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::SlotUsageEntry
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7098))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::SlotUsageEntry
struct CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept;


                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry(____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry const&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry(____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry&&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry& operator=(____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry& operator=(____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_slotName, put=__set_slotName))  slotName;

constexpr void __set_slotName(::StringW value) ;

constexpr ::StringW __get_slotName() const;

 int32_t __declspec(property(get=__get_assetId, put=__set_assetId))  assetId;

constexpr void __set_assetId(int32_t value) ;

constexpr int32_t __get_assetId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_templateDependencies>d__17
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7099))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::<get_templateDependencies>d__17
class CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17(____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17(____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17& operator=(____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17& operator=(____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset __get___4__this() const;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset> __declspec(property(get=__get__sent_5__1, put=__set__sent_5__1))  _sent_5__1;

constexpr void __set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset> __get__sent_5__1() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __declspec(property(get=__get___s__2, put=__set___s__2))  __s__2;

constexpr void __set___s__2(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __get___s__2() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry __declspec(property(get=__get__entry_5__3, put=__set__entry_5__3))  _entry_5__3;

constexpr void __set__entry_5__3(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry __get__entry_5__3() const;

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get__vta_5__4, put=__set__vta_5__4))  _vta_5__4;

constexpr void __set__vta_5__4(::UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset __get__vta_5__4() const;


// Properties

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c9a5d0 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c9c984 size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c9c9b0 size 0x4e0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2c9ce90 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current addr 0x2c9cee0 size 0x8 virtual true final true
 ::UnityEngine::UIElements::VisualTreeAsset System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c9cee8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c9cf28 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator addr 0x2c9cf30 size 0xa0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c9cfd0 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_stylesheets>d__21
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7100))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::<get_stylesheets>d__21
class CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21(____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21(____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21& operator=(____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21& operator=(____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset __get___4__this() const;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=__get__sent_5__1, put=__set__sent_5__1))  _sent_5__1;

constexpr void __set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet> __get__sent_5__1() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset> __declspec(property(get=__get___s__2, put=__set___s__2))  __s__2;

constexpr void __set___s__2(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset> __get___s__2() const;

 ::UnityEngine::UIElements::VisualElementAsset __declspec(property(get=__get__vea_5__3, put=__set__vea_5__3))  _vea_5__3;

constexpr void __set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset value) ;

constexpr ::UnityEngine::UIElements::VisualElementAsset __get__vea_5__3() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=__get___s__4, put=__set___s__4))  __s__4;

constexpr void __set___s__4(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet> __get___s__4() const;

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get__stylesheet_5__5, put=__set__stylesheet_5__5))  _stylesheet_5__5;

constexpr void __set__stylesheet_5__5(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get__stylesheet_5__5() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> __declspec(property(get=__get___s__6, put=__set___s__6))  __s__6;

constexpr void __set___s__6(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> __get___s__6() const;

 ::StringW __declspec(property(get=__get__stylesheetPath_5__7, put=__set__stylesheetPath_5__7))  _stylesheetPath_5__7;

constexpr void __set__stylesheetPath_5__7(::StringW value) ;

constexpr ::StringW __get__stylesheetPath_5__7() const;

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get__stylesheet_5__8, put=__set__stylesheet_5__8))  _stylesheet_5__8;

constexpr void __set__stylesheet_5__8(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get__stylesheet_5__8() const;


// Properties

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c9a678 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c9cfd4 size 0xec virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c9d0c0 size 0x5bc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2c9d71c size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2c9d67c size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method <>m__Finally3 addr 0x2c9d6cc size 0x50 virtual false final false
 void __m__Finally3() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current addr 0x2c9d76c size 0x8 virtual true final true
 ::UnityEngine::UIElements::StyleSheet System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c9d774 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c9d7b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator addr 0x2c9d7bc size 0xa0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c9d85c size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass45_0
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7101))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::<>c__DisplayClass45_0
class CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0& operator=(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0& operator=(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElementAsset __declspec(property(get=__get_childVea, put=__set_childVea))  childVea;

constexpr void __set_childVea(::UnityEngine::UIElements::VisualElementAsset value) ;

constexpr ::UnityEngine::UIElements::VisualElementAsset __get_childVea() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0() ;

/// @brief Method .ctor addr 0x2c9c238 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CloneSetupRecursively>b__0 addr 0x2c9d860 size 0x24 virtual false final false
 bool _CloneSetupRecursively_b__0(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry u) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass49_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7102))
// CS Name: UnityEngine.UIElements.VisualTreeAsset::<>c__DisplayClass49_0
struct CORDL_TYPE ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0(::UnityEngine::UIElements::VisualElementAsset asset) noexcept;


                    constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0 const&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0&&) = default;
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0& operator=(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0& operator=(____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::VisualElementAsset __declspec(property(get=__get_asset, put=__set_asset))  asset;

constexpr void __set_asset(::UnityEngine::UIElements::VisualElementAsset value) ;

constexpr ::UnityEngine::UIElements::VisualElementAsset __get_asset() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeAsset
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7103))
// CS Name: UnityEngine.UIElements.VisualTreeAsset
class CORDL_TYPE VisualTreeAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass49_0 = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0;

using __c__DisplayClass45_0 = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0;

using _get_stylesheets_d__21 = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21;

using _get_templateDependencies_d__17 = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17;

using SlotUsageEntry = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry;

using SlotDefinition = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition;

using UsingEntryComparer = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer;

using UsingEntry = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~VisualTreeAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: " const&", def_value: None }]
constexpr VisualTreeAsset(VisualTreeAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "&&", def_value: None }]
constexpr VisualTreeAsset(VisualTreeAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeAsset(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr VisualTreeAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeAsset& operator=(VisualTreeAsset&& o) noexcept = default;
  constexpr VisualTreeAsset& operator=(VisualTreeAsset const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_LinkedVEAInTemplatePropertyName, put=__set_LinkedVEAInTemplatePropertyName))  LinkedVEAInTemplatePropertyName;

static void __set_LinkedVEAInTemplatePropertyName(::StringW value) ;

static ::StringW __get_LinkedVEAInTemplatePropertyName() ;

 bool __declspec(property(get=__get_m_ImportedWithErrors, put=__set_m_ImportedWithErrors))  m_ImportedWithErrors;

constexpr void __set_m_ImportedWithErrors(bool value) ;

constexpr bool __get_m_ImportedWithErrors() const;

 bool __declspec(property(get=__get_m_ImportedWithWarnings, put=__set_m_ImportedWithWarnings))  m_ImportedWithWarnings;

constexpr void __set_m_ImportedWithWarnings(bool value) ;

constexpr bool __get_m_ImportedWithWarnings() const;

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_s_TemporarySlotInsertionPoints, put=__set_s_TemporarySlotInsertionPoints))  s_TemporarySlotInsertionPoints;

static void __set_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement> __get_s_TemporarySlotInsertionPoints() ;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __declspec(property(get=__get_m_Usings, put=__set_m_Usings))  m_Usings;

constexpr void __set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry> __get_m_Usings() const;

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_inlineSheet, put=__set_inlineSheet))  inlineSheet;

constexpr void __set_inlineSheet(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get_inlineSheet() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> __declspec(property(get=__get_m_VisualElementAssets, put=__set_m_VisualElementAssets))  m_VisualElementAssets;

constexpr void __set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> __get_m_VisualElementAssets() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> __declspec(property(get=__get_m_TemplateAssets, put=__set_m_TemplateAssets))  m_TemplateAssets;

constexpr void __set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> __get_m_TemplateAssets() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> __declspec(property(get=__get_m_Slots, put=__set_m_Slots))  m_Slots;

constexpr void __set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> __get_m_Slots() const;

 int32_t __declspec(property(get=__get_m_ContentContainerId, put=__set_m_ContentContainerId))  m_ContentContainerId;

constexpr void __set_m_ContentContainerId(int32_t value) ;

constexpr int32_t __get_m_ContentContainerId() const;

 int32_t __declspec(property(get=__get_m_ContentHash, put=__set_m_ContentHash))  m_ContentHash;

constexpr void __set_m_ContentHash(int32_t value) ;

constexpr int32_t __get_m_ContentHash() const;


// Properties

 bool __declspec(property(get=get_importedWithErrors, put=set_importedWithErrors))  importedWithErrors;

 bool __declspec(property(get=get_importedWithWarnings, put=set_importedWithWarnings))  importedWithWarnings;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset> __declspec(property(get=get_templateDependencies))  templateDependencies;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=get_stylesheets))  stylesheets;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> __declspec(property(get=get_visualElementAssets, put=set_visualElementAssets))  visualElementAssets;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> __declspec(property(get=get_templateAssets, put=set_templateAssets))  templateAssets;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> __declspec(property(get=get_slots, put=set_slots))  slots;

 int32_t __declspec(property(get=get_contentContainerId, put=set_contentContainerId))  contentContainerId;

 int32_t __declspec(property(get=get_contentHash, put=set_contentHash))  contentHash;


// Methods

/// @brief Method get_importedWithErrors addr 0x2c9a4e4 size 0x8 virtual false final false
 bool get_importedWithErrors() ;

/// @brief Method set_importedWithErrors addr 0x2c9a4ec size 0xc virtual false final false
 void set_importedWithErrors(bool value) ;

/// @brief Method get_importedWithWarnings addr 0x2c9a4f8 size 0x8 virtual false final false
 bool get_importedWithWarnings() ;

/// @brief Method set_importedWithWarnings addr 0x2c9a500 size 0xc virtual false final false
 void set_importedWithWarnings(bool value) ;

/// @brief Method GetNextChildSerialNumber addr 0x2c9a50c size 0x60 virtual false final false
 int32_t GetNextChildSerialNumber() ;

/// @brief Method get_templateDependencies addr 0x2c9a56c size 0x64 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset> get_templateDependencies() ;

/// @brief Method get_stylesheets addr 0x2c9a614 size 0x64 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet> get_stylesheets() ;

/// @brief Method get_visualElementAssets addr 0x2c9a6bc size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> get_visualElementAssets() ;

/// @brief Method set_visualElementAssets addr 0x2c9a6c4 size 0x8 virtual false final false
 void set_visualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset> value) ;

/// @brief Method get_templateAssets addr 0x2c9a6cc size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> get_templateAssets() ;

/// @brief Method set_templateAssets addr 0x2c9a6d4 size 0x8 virtual false final false
 void set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset> value) ;

/// @brief Method get_slots addr 0x2c9a6dc size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> get_slots() ;

/// @brief Method set_slots addr 0x2c9a6e4 size 0x8 virtual false final false
 void set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition> value) ;

/// @brief Method get_contentContainerId addr 0x2c9a6ec size 0x8 virtual false final false
 int32_t get_contentContainerId() ;

/// @brief Method set_contentContainerId addr 0x2c9a6f4 size 0x8 virtual false final false
 void set_contentContainerId(int32_t value) ;

/// @brief Method Instantiate addr 0x2c9a6fc size 0x180 virtual false final false
 ::UnityEngine::UIElements::TemplateContainer Instantiate() ;

/// @brief Method Instantiate addr 0x2c9aefc size 0x20 virtual false final false
 ::UnityEngine::UIElements::TemplateContainer Instantiate(::StringW bindingPath) ;

/// @brief Method CloneTree addr 0x2c9af1c size 0x4 virtual false final false
 ::UnityEngine::UIElements::TemplateContainer CloneTree() ;

/// @brief Method CloneTree addr 0x2c9af20 size 0x20 virtual false final false
 ::UnityEngine::UIElements::TemplateContainer CloneTree(::StringW bindingPath) ;

/// @brief Method CloneTree addr 0x2c9af40 size 0x1c virtual false final false
 void CloneTree(::UnityEngine::UIElements::VisualElement target) ;

/// @brief Method CloneTree addr 0x2c9af5c size 0x1dc virtual false final false
 void CloneTree(::UnityEngine::UIElements::VisualElement target, ByRef<int32_t> firstElementIndex, ByRef<int32_t> elementAddedCount) ;

/// @brief Method CloneTree addr 0x2c9a87c size 0x680 virtual false final false
 void CloneTree(::UnityEngine::UIElements::VisualElement target, ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement> slotInsertionPoints, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride> attributeOverrides) ;

/// @brief Method CloneSetupRecursively addr 0x2c9b378 size 0x848 virtual false final false
 ::UnityEngine::UIElements::VisualElement CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset root, ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset>> idToChildren, ::UnityEngine::UIElements::CreationContext context) ;

/// @brief Method CompareForOrder addr 0x2c9c240 size 0x34 virtual false final false
static int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset a, ::UnityEngine::UIElements::VisualElementAsset b) ;

/// @brief Method TryGetSlotInsertionPoint addr 0x2c9c180 size 0xb0 virtual false final false
 bool TryGetSlotInsertionPoint(int32_t insertionPointId, ByRef<::StringW> slotName) ;

/// @brief Method ResolveTemplate addr 0x2c9c27c size 0x270 virtual false final false
 ::UnityEngine::UIElements::VisualTreeAsset ResolveTemplate(::StringW templateName) ;

/// @brief Method Create addr 0x2c9bbc0 size 0x5c0 virtual false final false
static ::UnityEngine::UIElements::VisualElement Create(::UnityEngine::UIElements::VisualElementAsset asset, ::UnityEngine::UIElements::CreationContext ctx) ;

/// @brief Method AssignClassListFromAssetToElement addr 0x2c9b140 size 0x6c virtual false final false
static void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset asset, ::UnityEngine::UIElements::VisualElement element) ;

/// @brief Method AssignStyleSheetFromAssetToElement addr 0x2c9b1ac size 0x1b8 virtual false final false
static void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset asset, ::UnityEngine::UIElements::VisualElement element) ;

/// @brief Method get_contentHash addr 0x2c9c824 size 0x8 virtual false final false
 int32_t get_contentHash() ;

/// @brief Method set_contentHash addr 0x2c9c82c size 0x8 virtual false final false
 void set_contentHash(int32_t value) ;

// Ctor Parameters []
explicit VisualTreeAsset() ;

/// @brief Method .ctor addr 0x2c9c834 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Create>g__CreateError|49_0 addr 0x2c9c500 size 0x144 virtual false final false
static ::UnityEngine::UIElements::VisualElement _Create_g__CreateError_49_0(ByRef<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset, "UnityEngine.UIElements", "VisualTreeAsset");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntryComparer, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntryComparer");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass45_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass45_0");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_stylesheets_d__21, "UnityEngine.UIElements", "VisualTreeAsset/<get_stylesheets>d__21");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset___get_templateDependencies_d__17, "UnityEngine.UIElements", "VisualTreeAsset/<get_templateDependencies>d__17");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotDefinition, "UnityEngine.UIElements", "VisualTreeAsset/SlotDefinition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry, "UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__UsingEntry, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset____c__DisplayClass49_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass49_0");
