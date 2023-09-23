#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Specialized {
class StringDictionary;
}
// Type: System.Collections.Specialized::StringDictionary
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8369))
// CS Name: System.Collections.Specialized.StringDictionary
class CORDL_TYPE StringDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StringDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: " const&", def_value: None }]
constexpr StringDictionary(StringDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: "&&", def_value: None }]
constexpr StringDictionary(StringDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringDictionary& operator=(StringDictionary&& o) noexcept = default;
  constexpr StringDictionary& operator=(StringDictionary const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_contents, put=__set_contents))  contents;

constexpr void __set_contents(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_contents() const;


// Methods

// Ctor Parameters []
explicit StringDictionary() ;

/// @brief Method .ctor addr 0x27ad2cc size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x27ad334 size 0x98 virtual true final false
 void Add(::StringW key, ::StringW value) ;

/// @brief Method GetEnumerator addr 0x27ad3cc size 0x24 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(System::Collections::Specialized::StringDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::StringDictionary, "System.Collections.Specialized", "StringDictionary");
