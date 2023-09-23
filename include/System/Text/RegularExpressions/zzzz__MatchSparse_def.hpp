#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class MatchSparse;
}
// Type: System.Text.RegularExpressions::MatchSparse
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7757))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7758))
// CS Name: System.Text.RegularExpressions.MatchSparse
class CORDL_TYPE MatchSparse : public System::Text::RegularExpressions::Match {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MatchSparse() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: " const&", def_value: None }]
constexpr MatchSparse(MatchSparse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: "&&", def_value: None }]
constexpr MatchSparse(MatchSparse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchSparse(void* ptr) noexcept : System::Text::RegularExpressions::Match(ptr) {
}


  constexpr MatchSparse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchSparse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchSparse& operator=(MatchSparse&& o) noexcept = default;
  constexpr MatchSparse& operator=(MatchSparse const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__caps, put=__set__caps))  _caps;

constexpr void __set__caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__caps() const;


// Properties

 System::Text::RegularExpressions::GroupCollection __declspec(property(get=get_Groups))  Groups;


// Methods

// Ctor Parameters [CppParam { name: "regex", ty: "System::Text::RegularExpressions::Regex", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capcount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "begpos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startpos", ty: "int32_t", modifiers: "", def_value: None }]
explicit MatchSparse(System::Text::RegularExpressions::Regex regex, System::Collections::Hashtable caps, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos) ;

/// @brief Method .ctor addr 0x27becdc size 0xb0 virtual false final false
 void _ctor(System::Text::RegularExpressions::Regex regex, System::Collections::Hashtable caps, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos) ;

/// @brief Method get_Groups addr 0x27bed8c size 0x74 virtual true final false
 System::Text::RegularExpressions::GroupCollection get_Groups() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::MatchSparse);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::MatchSparse, "System.Text.RegularExpressions", "MatchSparse");
