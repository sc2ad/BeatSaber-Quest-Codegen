#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::IO {
struct MatchType;
}
namespace System::IO {
struct MatchCasing;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct SearchOption;
}
// Forward declare root types
namespace System::IO {
class EnumerationOptions;
}
// Type: System.IO::EnumerationOptions
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3577))
// CS Name: System.IO.EnumerationOptions
class CORDL_TYPE EnumerationOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnumerationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerationOptions", modifiers: " const&", def_value: None }]
constexpr EnumerationOptions(EnumerationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerationOptions", modifiers: "&&", def_value: None }]
constexpr EnumerationOptions(EnumerationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerationOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerationOptions& operator=(EnumerationOptions&& o) noexcept = default;
  constexpr EnumerationOptions& operator=(EnumerationOptions const& o) noexcept = default;
                


// Fields

static ::System::IO::EnumerationOptions __declspec(property(get=__get__Compatible_k__BackingField, put=__set__Compatible_k__BackingField))  _Compatible_k__BackingField;

static void __set__Compatible_k__BackingField(::System::IO::EnumerationOptions value) ;

static ::System::IO::EnumerationOptions __get__Compatible_k__BackingField() ;

static ::System::IO::EnumerationOptions __declspec(property(get=__get__CompatibleRecursive_k__BackingField, put=__set__CompatibleRecursive_k__BackingField))  _CompatibleRecursive_k__BackingField;

static void __set__CompatibleRecursive_k__BackingField(::System::IO::EnumerationOptions value) ;

static ::System::IO::EnumerationOptions __get__CompatibleRecursive_k__BackingField() ;

static ::System::IO::EnumerationOptions __declspec(property(get=__get__Default_k__BackingField, put=__set__Default_k__BackingField))  _Default_k__BackingField;

static void __set__Default_k__BackingField(::System::IO::EnumerationOptions value) ;

static ::System::IO::EnumerationOptions __get__Default_k__BackingField() ;

 bool __declspec(property(get=__get__RecurseSubdirectories_k__BackingField, put=__set__RecurseSubdirectories_k__BackingField))  _RecurseSubdirectories_k__BackingField;

constexpr void __set__RecurseSubdirectories_k__BackingField(bool value) ;

constexpr bool __get__RecurseSubdirectories_k__BackingField() const;

 bool __declspec(property(get=__get__IgnoreInaccessible_k__BackingField, put=__set__IgnoreInaccessible_k__BackingField))  _IgnoreInaccessible_k__BackingField;

constexpr void __set__IgnoreInaccessible_k__BackingField(bool value) ;

constexpr bool __get__IgnoreInaccessible_k__BackingField() const;

 ::System::IO::FileAttributes __declspec(property(get=__get__AttributesToSkip_k__BackingField, put=__set__AttributesToSkip_k__BackingField))  _AttributesToSkip_k__BackingField;

constexpr void __set__AttributesToSkip_k__BackingField(::System::IO::FileAttributes value) ;

constexpr ::System::IO::FileAttributes __get__AttributesToSkip_k__BackingField() const;

 ::System::IO::MatchType __declspec(property(get=__get__MatchType_k__BackingField, put=__set__MatchType_k__BackingField))  _MatchType_k__BackingField;

constexpr void __set__MatchType_k__BackingField(::System::IO::MatchType value) ;

constexpr ::System::IO::MatchType __get__MatchType_k__BackingField() const;

 ::System::IO::MatchCasing __declspec(property(get=__get__MatchCasing_k__BackingField, put=__set__MatchCasing_k__BackingField))  _MatchCasing_k__BackingField;

constexpr void __set__MatchCasing_k__BackingField(::System::IO::MatchCasing value) ;

constexpr ::System::IO::MatchCasing __get__MatchCasing_k__BackingField() const;

 bool __declspec(property(get=__get__ReturnSpecialDirectories_k__BackingField, put=__set__ReturnSpecialDirectories_k__BackingField))  _ReturnSpecialDirectories_k__BackingField;

constexpr void __set__ReturnSpecialDirectories_k__BackingField(bool value) ;

constexpr bool __get__ReturnSpecialDirectories_k__BackingField() const;


// Properties

static ::System::IO::EnumerationOptions __declspec(property(get=get_Compatible))  Compatible;

static ::System::IO::EnumerationOptions __declspec(property(get=get_CompatibleRecursive))  CompatibleRecursive;

static ::System::IO::EnumerationOptions __declspec(property(get=get_Default))  Default;

 bool __declspec(property(get=get_RecurseSubdirectories, put=set_RecurseSubdirectories))  RecurseSubdirectories;

 bool __declspec(property(get=get_IgnoreInaccessible, put=set_IgnoreInaccessible))  IgnoreInaccessible;

 ::System::IO::FileAttributes __declspec(property(get=get_AttributesToSkip, put=set_AttributesToSkip))  AttributesToSkip;

 ::System::IO::MatchType __declspec(property(get=get_MatchType, put=set_MatchType))  MatchType;

 ::System::IO::MatchCasing __declspec(property(get=get_MatchCasing))  MatchCasing;

 bool __declspec(property(get=get_ReturnSpecialDirectories))  ReturnSpecialDirectories;


// Methods

/// @brief Method get_Compatible addr 0x239ba9c size 0x58 virtual false final false
static ::System::IO::EnumerationOptions get_Compatible() ;

/// @brief Method get_CompatibleRecursive addr 0x239baf4 size 0x58 virtual false final false
static ::System::IO::EnumerationOptions get_CompatibleRecursive() ;

/// @brief Method get_Default addr 0x239bb4c size 0x58 virtual false final false
static ::System::IO::EnumerationOptions get_Default() ;

// Ctor Parameters []
explicit EnumerationOptions() ;

/// @brief Method .ctor addr 0x239bba4 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method FromSearchOption addr 0x239ac4c size 0x13c virtual false final false
static ::System::IO::EnumerationOptions FromSearchOption(::System::IO::SearchOption searchOption) ;

/// @brief Method get_RecurseSubdirectories addr 0x239bbcc size 0x8 virtual false final false
 bool get_RecurseSubdirectories() ;

/// @brief Method set_RecurseSubdirectories addr 0x239bbd4 size 0xc virtual false final false
 void set_RecurseSubdirectories(bool value) ;

/// @brief Method get_IgnoreInaccessible addr 0x239bbe0 size 0x8 virtual false final false
 bool get_IgnoreInaccessible() ;

/// @brief Method set_IgnoreInaccessible addr 0x239bbe8 size 0xc virtual false final false
 void set_IgnoreInaccessible(bool value) ;

/// @brief Method get_AttributesToSkip addr 0x239bbf4 size 0x8 virtual false final false
 ::System::IO::FileAttributes get_AttributesToSkip() ;

/// @brief Method set_AttributesToSkip addr 0x239bbfc size 0x8 virtual false final false
 void set_AttributesToSkip(::System::IO::FileAttributes value) ;

/// @brief Method get_MatchType addr 0x239bc04 size 0x8 virtual false final false
 ::System::IO::MatchType get_MatchType() ;

/// @brief Method set_MatchType addr 0x239bc0c size 0x8 virtual false final false
 void set_MatchType(::System::IO::MatchType value) ;

/// @brief Method get_MatchCasing addr 0x239bc14 size 0x8 virtual false final false
 ::System::IO::MatchCasing get_MatchCasing() ;

/// @brief Method get_ReturnSpecialDirectories addr 0x239bc1c size 0x8 virtual false final false
 bool get_ReturnSpecialDirectories() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::EnumerationOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::EnumerationOptions, "System.IO", "EnumerationOptions");
