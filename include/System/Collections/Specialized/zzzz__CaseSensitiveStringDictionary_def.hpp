#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Specialized {
class CaseSensitiveStringDictionary;
}
// Type: System.Collections.Specialized::CaseSensitiveStringDictionary
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8370))
// CS Name: System.Collections.Specialized.CaseSensitiveStringDictionary
class CORDL_TYPE CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CaseSensitiveStringDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: " const&", def_value: None }]
constexpr CaseSensitiveStringDictionary(CaseSensitiveStringDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: "&&", def_value: None }]
constexpr CaseSensitiveStringDictionary(CaseSensitiveStringDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CaseSensitiveStringDictionary(void* ptr) noexcept : ::System::Collections::Specialized::StringDictionary(ptr) {
}


  constexpr CaseSensitiveStringDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CaseSensitiveStringDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CaseSensitiveStringDictionary& operator=(CaseSensitiveStringDictionary&& o) noexcept = default;
  constexpr CaseSensitiveStringDictionary& operator=(CaseSensitiveStringDictionary const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CaseSensitiveStringDictionary() ;

/// @brief Method .ctor addr 0x27ad3f0 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x27ad3f4 size 0x74 virtual true final false
 void Add(::StringW key, ::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Specialized::CaseSensitiveStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CaseSensitiveStringDictionary, "System.Collections.Specialized", "CaseSensitiveStringDictionary");
