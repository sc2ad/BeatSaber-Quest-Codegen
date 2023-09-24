#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements::StyleSheets {
class UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache;
}
namespace UnityEngine::UIElements::StyleSheets {
class UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey;
}
// Type: ::SheetHandleKey
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7575))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache::SheetHandleKey
struct CORDL_TYPE UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey(int32_t sheetInstanceID, int32_t index) noexcept;


                    constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey const&) = default;
                    constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey&&) = default;
                    constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey& operator=(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey& operator=(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_sheetInstanceID, put=__set_sheetInstanceID))  sheetInstanceID;

constexpr void __set_sheetInstanceID(int32_t value) ;

constexpr int32_t __get_sheetInstanceID() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

/// @brief Method .ctor addr 0x2c73608 size 0x34 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheet sheet, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
// Type: ::SheetHandleKeyComparer
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7576))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache::SheetHandleKeyComparer
class CORDL_TYPE UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer& operator=(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer& operator=(UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x2c7363c size 0x20 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey x, UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey y) ;

/// @brief Method GetHashCode addr 0x2c7365c size 0x40 virtual true final true
 int32_t GetHashCode(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey key) ;

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer New_ctor() ;

/// @brief Method .ctor addr 0x2c7369c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetCache
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7577))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache
class CORDL_TYPE StyleSheetCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SheetHandleKeyComparer = UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer;

using SheetHandleKey = UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleSheetCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: " const&", def_value: None }]
constexpr StyleSheetCache(StyleSheetCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "&&", def_value: None }]
constexpr StyleSheetCache(StyleSheetCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSheetCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSheetCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSheetCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSheetCache& operator=(StyleSheetCache&& o) noexcept = default;
  constexpr StyleSheetCache& operator=(StyleSheetCache const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer __declspec(property(get=__get_s_Comparer, put=__set_s_Comparer))  s_Comparer;

static void __set_s_Comparer(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer value) ;

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer __get_s_Comparer() ;

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>> __declspec(property(get=__get_s_RulePropertyIdsCache, put=__set_s_RulePropertyIdsCache))  s_RulePropertyIdsCache;

static void __set_s_RulePropertyIdsCache(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>> __get_s_RulePropertyIdsCache() ;


// Methods

/// @brief Method GetPropertyIds addr 0x2c6d644 size 0x1b0 virtual false final false
static ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> GetPropertyIds(UnityEngine::UIElements::StyleSheet sheet, int32_t ruleIndex) ;

/// @brief Method GetPropertyIds addr 0x2c73454 size 0xe0 virtual false final false
static ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> GetPropertyIds(UnityEngine::UIElements::StyleRule rule) ;

/// @brief Method GetPropertyId addr 0x2c73360 size 0xf4 virtual false final false
static UnityEngine::UIElements::StyleSheets::StylePropertyId GetPropertyId(UnityEngine::UIElements::StyleRule rule, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StyleSheetCache);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleSheetCache, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache");
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKeyComparer, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKeyComparer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey");
