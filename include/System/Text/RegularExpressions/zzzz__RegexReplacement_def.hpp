#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
// Type: System.Text.RegularExpressions::RegexReplacement
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7779))
// CS Name: System.Text.RegularExpressions.RegexReplacement
class CORDL_TYPE RegexReplacement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RegexReplacement() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: " const&", def_value: None }]
constexpr RegexReplacement(RegexReplacement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: "&&", def_value: None }]
constexpr RegexReplacement(RegexReplacement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexReplacement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexReplacement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexReplacement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexReplacement& operator=(RegexReplacement&& o) noexcept = default;
  constexpr RegexReplacement& operator=(RegexReplacement const& o) noexcept = default;
                


// Fields

/// @brief Field Specials offset 0
static constexpr int32_t  Specials{4};

/// @brief Field LeftPortion offset 0
static constexpr int32_t  LeftPortion{-1};

/// @brief Field RightPortion offset 0
static constexpr int32_t  RightPortion{-2};

/// @brief Field LastGroup offset 0
static constexpr int32_t  LastGroup{-3};

/// @brief Field WholeString offset 0
static constexpr int32_t  WholeString{-4};

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__strings, put=__set__strings))  _strings;

constexpr void __set__strings(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__strings() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__rules, put=__set__rules))  _rules;

constexpr void __set__rules(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get__rules() const;

 ::StringW __declspec(property(get=__get__Pattern_k__BackingField, put=__set__Pattern_k__BackingField))  _Pattern_k__BackingField;

constexpr void __set__Pattern_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Pattern_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Pattern))  Pattern;


// Methods

// Ctor Parameters [CppParam { name: "rep", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "concat", ty: "::System::Text::RegularExpressions::RegexNode", modifiers: "", def_value: None }, CppParam { name: "_caps", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit RegexReplacement(::StringW rep, ::System::Text::RegularExpressions::RegexNode concat, ::System::Collections::Hashtable _caps) ;

/// @brief Method .ctor addr 0x27d1668 size 0x4e8 virtual false final false
 void _ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode concat, ::System::Collections::Hashtable _caps) ;

/// @brief Method GetOrCreate addr 0x27d60fc size 0x114 virtual false final false
static ::System::Text::RegularExpressions::RegexReplacement GetOrCreate(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement> replRef, ::StringW replacement, ::System::Collections::Hashtable caps, int32_t capsize, ::System::Collections::Hashtable capnames, ::System::Text::RegularExpressions::RegexOptions roptions) ;

/// @brief Method get_Pattern addr 0x27d6210 size 0x8 virtual false final false
 ::StringW get_Pattern() ;

/// @brief Method ReplacementImpl addr 0x27d6218 size 0x1a4 virtual false final false
 void ReplacementImpl(::System::Text::StringBuilder sb, ::System::Text::RegularExpressions::Match match) ;

/// @brief Method ReplacementImplRTL addr 0x27d63bc size 0x230 virtual false final false
 void ReplacementImplRTL(::System::Collections::Generic::List_1<::StringW> al, ::System::Text::RegularExpressions::Match match) ;

/// @brief Method Replace addr 0x27d65ec size 0x3a0 virtual false final false
 ::StringW Replace(::System::Text::RegularExpressions::Regex regex, ::StringW input, int32_t count, int32_t startat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::RegexReplacement);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexReplacement, "System.Text.RegularExpressions", "RegexReplacement");
