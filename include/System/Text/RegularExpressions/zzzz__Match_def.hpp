#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Match;
}
// Type: System.Text.RegularExpressions::Match
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7757))
// CS Name: System.Text.RegularExpressions.Match
class CORDL_TYPE Match : public System::Text::RegularExpressions::Group {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Match() = default;

// Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: " const&", def_value: None }]
constexpr Match(Match const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "&&", def_value: None }]
constexpr Match(Match&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Match(void* ptr) noexcept : System::Text::RegularExpressions::Group(ptr) {
}


  constexpr Match& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Match& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Match& operator=(Match&& o) noexcept = default;
  constexpr Match& operator=(Match const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::GroupCollection __declspec(property(get=__get__groupcoll, put=__set__groupcoll))  _groupcoll;

constexpr void __set__groupcoll(System::Text::RegularExpressions::GroupCollection value) ;

constexpr System::Text::RegularExpressions::GroupCollection __get__groupcoll() const;

 System::Text::RegularExpressions::Regex __declspec(property(get=__get__regex, put=__set__regex))  _regex;

constexpr void __set__regex(System::Text::RegularExpressions::Regex value) ;

constexpr System::Text::RegularExpressions::Regex __get__regex() const;

 int32_t __declspec(property(get=__get__textbeg, put=__set__textbeg))  _textbeg;

constexpr void __set__textbeg(int32_t value) ;

constexpr int32_t __get__textbeg() const;

 int32_t __declspec(property(get=__get__textpos, put=__set__textpos))  _textpos;

constexpr void __set__textpos(int32_t value) ;

constexpr int32_t __get__textpos() const;

 int32_t __declspec(property(get=__get__textend, put=__set__textend))  _textend;

constexpr void __set__textend(int32_t value) ;

constexpr int32_t __get__textend() const;

 int32_t __declspec(property(get=__get__textstart, put=__set__textstart))  _textstart;

constexpr void __set__textstart(int32_t value) ;

constexpr int32_t __get__textstart() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get__matches, put=__set__matches))  _matches;

constexpr void __set__matches(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get__matches() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__matchcount, put=__set__matchcount))  _matchcount;

constexpr void __set__matchcount(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__matchcount() const;

 bool __declspec(property(get=__get__balancing, put=__set__balancing))  _balancing;

constexpr void __set__balancing(bool value) ;

constexpr bool __get__balancing() const;

static System::Text::RegularExpressions::Match __declspec(property(get=__get__Empty_k__BackingField, put=__set__Empty_k__BackingField))  _Empty_k__BackingField;

static void __set__Empty_k__BackingField(System::Text::RegularExpressions::Match value) ;

static System::Text::RegularExpressions::Match __get__Empty_k__BackingField() ;


// Properties

static System::Text::RegularExpressions::Match __declspec(property(get=get_Empty))  Empty;

 System::Text::RegularExpressions::GroupCollection __declspec(property(get=get_Groups))  Groups;


// Methods

static System::Text::RegularExpressions::Match New_ctor(System::Text::RegularExpressions::Regex regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos) ;

/// @brief Method .ctor addr 0x27bdeb0 size 0x170 virtual false final false
 void _ctor(System::Text::RegularExpressions::Regex regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos) ;

/// @brief Method get_Empty addr 0x27be020 size 0x58 virtual false final false
static System::Text::RegularExpressions::Match get_Empty() ;

/// @brief Method Reset addr 0x27be078 size 0x64 virtual true final false
 void Reset(System::Text::RegularExpressions::Regex regex, ::StringW text, int32_t textbeg, int32_t textend, int32_t textstart) ;

/// @brief Method get_Groups addr 0x27be0dc size 0x70 virtual true final false
 System::Text::RegularExpressions::GroupCollection get_Groups() ;

/// @brief Method NextMatch addr 0x27be14c size 0x30 virtual false final false
 System::Text::RegularExpressions::Match NextMatch() ;

/// @brief Method GroupToStringImpl addr 0x27be40c size 0x198 virtual true final false
 System::ReadOnlySpan_1<char16_t> GroupToStringImpl(int32_t groupnum) ;

/// @brief Method LastGroupToStringImpl addr 0x27be5a4 size 0x28 virtual false final false
 System::ReadOnlySpan_1<char16_t> LastGroupToStringImpl() ;

/// @brief Method AddMatch addr 0x27be5cc size 0x224 virtual true final false
 void AddMatch(int32_t cap, int32_t start, int32_t len) ;

/// @brief Method BalanceMatch addr 0x27be7f0 size 0xd8 virtual true final false
 void BalanceMatch(int32_t cap) ;

/// @brief Method RemoveMatch addr 0x27be8c8 size 0x38 virtual true final false
 void RemoveMatch(int32_t cap) ;

/// @brief Method IsMatched addr 0x27be900 size 0x90 virtual true final false
 bool IsMatched(int32_t cap) ;

/// @brief Method MatchIndex addr 0x27be990 size 0x8c virtual true final false
 int32_t MatchIndex(int32_t cap) ;

/// @brief Method MatchLength addr 0x27bea1c size 0x8c virtual true final false
 int32_t MatchLength(int32_t cap) ;

/// @brief Method Tidy addr 0x27beaa8 size 0x164 virtual true final false
 void Tidy(int32_t textpos) ;

static System::Text::RegularExpressions::Match New_ctor() ;

/// @brief Method .ctor addr 0x27beca4 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::Match);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Match, "System.Text.RegularExpressions", "Match");
