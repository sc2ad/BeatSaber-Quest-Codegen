#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyCache;
}
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyCache
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7579))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyCache
class CORDL_TYPE StylePropertyCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StylePropertyCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: " const&", def_value: None }]
constexpr StylePropertyCache(StylePropertyCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: "&&", def_value: None }]
constexpr StylePropertyCache(StylePropertyCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StylePropertyCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StylePropertyCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StylePropertyCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StylePropertyCache& operator=(StylePropertyCache&& o) noexcept = default;
  constexpr StylePropertyCache& operator=(StylePropertyCache const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_PropertySyntaxCache, put=__set_s_PropertySyntaxCache))  s_PropertySyntaxCache;

static void __set_s_PropertySyntaxCache(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_PropertySyntaxCache() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_NonTerminalValues, put=__set_s_NonTerminalValues))  s_NonTerminalValues;

static void __set_s_NonTerminalValues(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_NonTerminalValues() ;


// Methods

/// @brief Method TryGetSyntax addr 0x2c764a4 size 0x90 virtual false final false
static bool TryGetSyntax(::StringW name, ByRef<::StringW> syntax) ;

/// @brief Method TryGetNonTerminalValue addr 0x2c76534 size 0x90 virtual false final false
static bool TryGetNonTerminalValue(::StringW name, ByRef<::StringW> syntax) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyCache, "UnityEngine.UIElements.StyleSheets", "StylePropertyCache");
