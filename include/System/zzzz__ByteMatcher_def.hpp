#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class Hashtable;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class ByteMatcher;
}
// Type: System::ByteMatcher
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2622))
// CS Name: System.ByteMatcher
class CORDL_TYPE ByteMatcher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ByteMatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: " const&", def_value: None }]
constexpr ByteMatcher(ByteMatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "&&", def_value: None }]
constexpr ByteMatcher(ByteMatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteMatcher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ByteMatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteMatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteMatcher& operator=(ByteMatcher&& o) noexcept = default;
  constexpr ByteMatcher& operator=(ByteMatcher const& o) noexcept = default;
                


// Fields

 ::System::Collections::Hashtable __declspec(property(get=__get_map, put=__set_map))  map;

constexpr void __set_map(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_map() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_starts, put=__set_starts))  starts;

constexpr void __set_starts(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_starts() const;


// Methods

/// @brief Method AddMapping addr 0x2496b20 size 0x120 virtual false final false
 void AddMapping(::System::TermInfoStrings key, ::ArrayW<uint8_t> val) ;

/// @brief Method Sort addr 0x2496c40 size 0x4 virtual false final false
 void Sort() ;

/// @brief Method StartsWith addr 0x2493b44 size 0x88 virtual false final false
 bool StartsWith(int32_t c) ;

/// @brief Method Match addr 0x2493bcc size 0x48c virtual false final false
 ::System::TermInfoStrings Match(::ArrayW<char16_t> buffer, int32_t offset, int32_t length, ByRef<int32_t> used) ;

// Ctor Parameters []
explicit ByteMatcher() ;

/// @brief Method .ctor addr 0x2496a58 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ByteMatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::ByteMatcher, "System", "ByteMatcher");
