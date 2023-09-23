#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCode;
}
// Type: System.Text.RegularExpressions::RegexCode
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7770))
// CS Name: System.Text.RegularExpressions.RegexCode
class CORDL_TYPE RegexCode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RegexCode() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: " const&", def_value: None }]
constexpr RegexCode(RegexCode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: "&&", def_value: None }]
constexpr RegexCode(RegexCode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexCode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexCode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexCode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexCode& operator=(RegexCode&& o) noexcept = default;
  constexpr RegexCode& operator=(RegexCode const& o) noexcept = default;
                


// Fields

/// @brief Field Onerep offset 0
static constexpr int32_t  Onerep{0};

/// @brief Field Notonerep offset 0
static constexpr int32_t  Notonerep{1};

/// @brief Field Setrep offset 0
static constexpr int32_t  Setrep{2};

/// @brief Field Oneloop offset 0
static constexpr int32_t  Oneloop{3};

/// @brief Field Notoneloop offset 0
static constexpr int32_t  Notoneloop{4};

/// @brief Field Setloop offset 0
static constexpr int32_t  Setloop{5};

/// @brief Field Onelazy offset 0
static constexpr int32_t  Onelazy{6};

/// @brief Field Notonelazy offset 0
static constexpr int32_t  Notonelazy{7};

/// @brief Field Setlazy offset 0
static constexpr int32_t  Setlazy{8};

/// @brief Field One offset 0
static constexpr int32_t  One{9};

/// @brief Field Notone offset 0
static constexpr int32_t  Notone{10};

/// @brief Field Set offset 0
static constexpr int32_t  Set{11};

/// @brief Field Multi offset 0
static constexpr int32_t  Multi{12};

/// @brief Field Ref offset 0
static constexpr int32_t  Ref{13};

/// @brief Field Bol offset 0
static constexpr int32_t  Bol{14};

/// @brief Field Eol offset 0
static constexpr int32_t  Eol{15};

/// @brief Field Boundary offset 0
static constexpr int32_t  Boundary{16};

/// @brief Field Nonboundary offset 0
static constexpr int32_t  Nonboundary{17};

/// @brief Field Beginning offset 0
static constexpr int32_t  Beginning{18};

/// @brief Field Start offset 0
static constexpr int32_t  Start{19};

/// @brief Field EndZ offset 0
static constexpr int32_t  EndZ{20};

/// @brief Field End offset 0
static constexpr int32_t  End{21};

/// @brief Field Nothing offset 0
static constexpr int32_t  Nothing{22};

/// @brief Field Lazybranch offset 0
static constexpr int32_t  Lazybranch{23};

/// @brief Field Branchmark offset 0
static constexpr int32_t  Branchmark{24};

/// @brief Field Lazybranchmark offset 0
static constexpr int32_t  Lazybranchmark{25};

/// @brief Field Nullcount offset 0
static constexpr int32_t  Nullcount{26};

/// @brief Field Setcount offset 0
static constexpr int32_t  Setcount{27};

/// @brief Field Branchcount offset 0
static constexpr int32_t  Branchcount{28};

/// @brief Field Lazybranchcount offset 0
static constexpr int32_t  Lazybranchcount{29};

/// @brief Field Nullmark offset 0
static constexpr int32_t  Nullmark{30};

/// @brief Field Setmark offset 0
static constexpr int32_t  Setmark{31};

/// @brief Field Capturemark offset 0
static constexpr int32_t  Capturemark{32};

/// @brief Field Getmark offset 0
static constexpr int32_t  Getmark{33};

/// @brief Field Setjump offset 0
static constexpr int32_t  Setjump{34};

/// @brief Field Backjump offset 0
static constexpr int32_t  Backjump{35};

/// @brief Field Forejump offset 0
static constexpr int32_t  Forejump{36};

/// @brief Field Testref offset 0
static constexpr int32_t  Testref{37};

/// @brief Field Goto offset 0
static constexpr int32_t  Goto{38};

/// @brief Field Prune offset 0
static constexpr int32_t  Prune{39};

/// @brief Field Stop offset 0
static constexpr int32_t  Stop{40};

/// @brief Field ECMABoundary offset 0
static constexpr int32_t  ECMABoundary{41};

/// @brief Field NonECMABoundary offset 0
static constexpr int32_t  NonECMABoundary{42};

/// @brief Field Mask offset 0
static constexpr int32_t  Mask{63};

/// @brief Field Rtl offset 0
static constexpr int32_t  Rtl{64};

/// @brief Field Back offset 0
static constexpr int32_t  Back{128};

/// @brief Field Back2 offset 0
static constexpr int32_t  Back2{256};

/// @brief Field Ci offset 0
static constexpr int32_t  Ci{512};

 ::ArrayW<int32_t> __declspec(property(get=__get_Codes, put=__set_Codes))  Codes;

constexpr void __set_Codes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_Codes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_Strings, put=__set_Strings))  Strings;

constexpr void __set_Strings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_Strings() const;

 int32_t __declspec(property(get=__get_TrackCount, put=__set_TrackCount))  TrackCount;

constexpr void __set_TrackCount(int32_t value) ;

constexpr int32_t __get_TrackCount() const;

 System::Collections::Hashtable __declspec(property(get=__get_Caps, put=__set_Caps))  Caps;

constexpr void __set_Caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Caps() const;

 int32_t __declspec(property(get=__get_CapSize, put=__set_CapSize))  CapSize;

constexpr void __set_CapSize(int32_t value) ;

constexpr int32_t __get_CapSize() const;

 System::Nullable_1<System::Text::RegularExpressions::RegexPrefix> __declspec(property(get=__get_FCPrefix, put=__set_FCPrefix))  FCPrefix;

constexpr void __set_FCPrefix(System::Nullable_1<System::Text::RegularExpressions::RegexPrefix> value) ;

constexpr System::Nullable_1<System::Text::RegularExpressions::RegexPrefix> __get_FCPrefix() const;

 System::Text::RegularExpressions::RegexBoyerMoore __declspec(property(get=__get_BMPrefix, put=__set_BMPrefix))  BMPrefix;

constexpr void __set_BMPrefix(System::Text::RegularExpressions::RegexBoyerMoore value) ;

constexpr System::Text::RegularExpressions::RegexBoyerMoore __get_BMPrefix() const;

 int32_t __declspec(property(get=__get_Anchors, put=__set_Anchors))  Anchors;

constexpr void __set_Anchors(int32_t value) ;

constexpr int32_t __get_Anchors() const;

 bool __declspec(property(get=__get_RightToLeft, put=__set_RightToLeft))  RightToLeft;

constexpr void __set_RightToLeft(bool value) ;

constexpr bool __get_RightToLeft() const;


// Methods

// Ctor Parameters [CppParam { name: "codes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringlist", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "trackcount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capsize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bmPrefix", ty: "System::Text::RegularExpressions::RegexBoyerMoore", modifiers: "", def_value: None }, CppParam { name: "fcPrefix", ty: "System::Nullable_1<System::Text::RegularExpressions::RegexPrefix>", modifiers: "", def_value: None }, CppParam { name: "anchors", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightToLeft", ty: "bool", modifiers: "", def_value: None }]
explicit RegexCode(::ArrayW<int32_t> codes, System::Collections::Generic::List_1<::StringW> stringlist, int32_t trackcount, System::Collections::Hashtable caps, int32_t capsize, System::Text::RegularExpressions::RegexBoyerMoore bmPrefix, System::Nullable_1<System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft) ;

/// @brief Method .ctor addr 0x27cba24 size 0xd0 virtual false final false
 void _ctor(::ArrayW<int32_t> codes, System::Collections::Generic::List_1<::StringW> stringlist, int32_t trackcount, System::Collections::Hashtable caps, int32_t capsize, System::Text::RegularExpressions::RegexBoyerMoore bmPrefix, System::Nullable_1<System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft) ;

/// @brief Method OpcodeBacktracks addr 0x27cbaf4 size 0x30 virtual false final false
static bool OpcodeBacktracks(int32_t Op) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexCode);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCode, "System.Text.RegularExpressions", "RegexCode");
