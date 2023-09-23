#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleCache;
}
// Type: UnityEngine.UIElements::StyleCache
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6901))
// CS Name: UnityEngine.UIElements.StyleCache
class CORDL_TYPE StyleCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: " const&", def_value: None }]
constexpr StyleCache(StyleCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: "&&", def_value: None }]
constexpr StyleCache(StyleCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleCache& operator=(StyleCache&& o) noexcept = default;
  constexpr StyleCache& operator=(StyleCache const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::UIElements::ComputedStyle> __declspec(property(get=__get_s_ComputedStyleCache, put=__set_s_ComputedStyleCache))  s_ComputedStyleCache;

static void __set_s_ComputedStyleCache(System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::UIElements::ComputedStyle> value) ;

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::UIElements::ComputedStyle> __get_s_ComputedStyleCache() ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::StyleVariableContext> __declspec(property(get=__get_s_StyleVariableContextCache, put=__set_s_StyleVariableContextCache))  s_StyleVariableContextCache;

static void __set_s_StyleVariableContextCache(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::StyleVariableContext> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UIElements::StyleVariableContext> __get_s_StyleVariableContextCache() ;

static System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty>> __declspec(property(get=__get_s_ComputedTransitionsCache, put=__set_s_ComputedTransitionsCache))  s_ComputedTransitionsCache;

static void __set_s_ComputedTransitionsCache(System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty>> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty>> __get_s_ComputedTransitionsCache() ;


// Methods

/// @brief Method TryGetValue addr 0x2c47f2c size 0x90 virtual false final false
static bool TryGetValue(int64_t hash, ByRef<UnityEngine::UIElements::ComputedStyle> data) ;

/// @brief Method SetValue addr 0x2c47fbc size 0xc4 virtual false final false
static void SetValue(int64_t hash, ByRef<UnityEngine::UIElements::ComputedStyle> data) ;

/// @brief Method TryGetValue addr 0x2c48080 size 0x90 virtual false final false
static bool TryGetValue(int32_t hash, ByRef<UnityEngine::UIElements::StyleVariableContext> data) ;

/// @brief Method SetValue addr 0x2c48110 size 0x90 virtual false final false
static void SetValue(int32_t hash, UnityEngine::UIElements::StyleVariableContext data) ;

/// @brief Method TryGetValue addr 0x2c481a0 size 0x90 virtual false final false
static bool TryGetValue(int32_t hash, ByRef<::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty>> data) ;

/// @brief Method SetValue addr 0x2c48230 size 0x90 virtual false final false
static void SetValue(int32_t hash, ::ArrayW<UnityEngine::UIElements::ComputedTransitionProperty> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleCache);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleCache, "UnityEngine.UIElements", "StyleCache");
