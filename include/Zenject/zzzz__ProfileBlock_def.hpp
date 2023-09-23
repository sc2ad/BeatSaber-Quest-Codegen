#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class IDisposable;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Zenject {
class ProfileBlock;
}
// Type: Zenject::ProfileBlock
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11294))
// CS Name: Zenject.ProfileBlock
class CORDL_TYPE ProfileBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProfileBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfileBlock", modifiers: " const&", def_value: None }]
constexpr ProfileBlock(ProfileBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfileBlock", modifiers: "&&", def_value: None }]
constexpr ProfileBlock(ProfileBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProfileBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProfileBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProfileBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProfileBlock& operator=(ProfileBlock&& o) noexcept = default;
  constexpr ProfileBlock& operator=(ProfileBlock const& o) noexcept = default;
                


// Fields

static System::Text::RegularExpressions::Regex __declspec(property(get=__get__ProfilePattern_k__BackingField, put=__set__ProfilePattern_k__BackingField))  _ProfilePattern_k__BackingField;

static void __set__ProfilePattern_k__BackingField(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get__ProfilePattern_k__BackingField() ;


// Properties

static System::Text::RegularExpressions::Regex __declspec(property(get=get_ProfilePattern, put=set_ProfilePattern))  ProfilePattern;


// Methods

// Ctor Parameters [CppParam { name: "sampleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rootBlock", ty: "bool", modifiers: "", def_value: None }]
explicit ProfileBlock(::StringW sampleName, bool rootBlock) ;

/// @brief Method .ctor addr 0x2da5064 size 0x8 virtual false final false
 void _ctor(::StringW sampleName, bool rootBlock) ;

// Ctor Parameters [CppParam { name: "sampleName", ty: "::StringW", modifiers: "", def_value: None }]
explicit ProfileBlock(::StringW sampleName) ;

/// @brief Method .ctor addr 0x2da506c size 0x8 virtual false final false
 void _ctor(::StringW sampleName) ;

/// @brief Method get_ProfilePattern addr 0x2da5074 size 0x48 virtual false final false
static System::Text::RegularExpressions::Regex get_ProfilePattern() ;

/// @brief Method set_ProfilePattern addr 0x2da50bc size 0x4c virtual false final false
static void set_ProfilePattern(System::Text::RegularExpressions::Regex value) ;

/// @brief Method Start addr 0x2da5108 size 0x8 virtual false final false
static Zenject::ProfileBlock Start() ;

/// @brief Method Start addr 0x2da5110 size 0x8 virtual false final false
static Zenject::ProfileBlock Start(::StringW sampleNameFormat, ::bs_hook::Il2CppWrapperType obj1, ::bs_hook::Il2CppWrapperType obj2) ;

/// @brief Method Start addr 0x2da5118 size 0x8 virtual false final false
static Zenject::ProfileBlock Start(::StringW sampleNameFormat, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Start addr 0x2da5120 size 0x8 virtual false final false
static Zenject::ProfileBlock Start(::StringW sampleName) ;

/// @brief Method Dispose addr 0x2da5128 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ProfileBlock);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProfileBlock, "Zenject", "ProfileBlock");
