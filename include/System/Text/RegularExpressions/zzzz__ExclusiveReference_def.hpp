#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class ExclusiveReference;
}
// Type: System.Text.RegularExpressions::ExclusiveReference
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7761))
// CS Name: System.Text.RegularExpressions.ExclusiveReference
class CORDL_TYPE ExclusiveReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ExclusiveReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExclusiveReference", modifiers: " const&", def_value: None }]
constexpr ExclusiveReference(ExclusiveReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExclusiveReference", modifiers: "&&", def_value: None }]
constexpr ExclusiveReference(ExclusiveReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExclusiveReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExclusiveReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExclusiveReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExclusiveReference& operator=(ExclusiveReference&& o) noexcept = default;
  constexpr ExclusiveReference& operator=(ExclusiveReference const& o) noexcept = default;
                


// Fields

 ::System::Text::RegularExpressions::RegexRunner __declspec(property(get=__get__ref, put=__set__ref))  _ref;

constexpr void __set__ref(::System::Text::RegularExpressions::RegexRunner value) ;

constexpr ::System::Text::RegularExpressions::RegexRunner __get__ref() const;

 ::System::Text::RegularExpressions::RegexRunner __declspec(property(get=__get__obj, put=__set__obj))  _obj;

constexpr void __set__obj(::System::Text::RegularExpressions::RegexRunner value) ;

constexpr ::System::Text::RegularExpressions::RegexRunner __get__obj() const;

 int32_t __declspec(property(get=__get__locked, put=__set__locked))  _locked;

constexpr void __set__locked(int32_t value) ;

constexpr int32_t __get__locked() const;


// Methods

/// @brief Method Get addr 0x27bfb84 size 0x58 virtual false final false
 ::System::Text::RegularExpressions::RegexRunner Get() ;

/// @brief Method Release addr 0x27bfbdc size 0xbc virtual false final false
 void Release(::System::Text::RegularExpressions::RegexRunner obj) ;

// Ctor Parameters []
explicit ExclusiveReference() ;

/// @brief Method .ctor addr 0x27bfc98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::ExclusiveReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::ExclusiveReference, "System.Text.RegularExpressions", "ExclusiveReference");
