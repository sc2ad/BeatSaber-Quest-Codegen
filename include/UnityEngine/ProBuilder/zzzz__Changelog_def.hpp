#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Changelog;
}
// Type: UnityEngine.ProBuilder::Changelog
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12050))
// CS Name: UnityEngine.ProBuilder.Changelog
class CORDL_TYPE Changelog : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Changelog() = default;

// Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: " const&", def_value: None }]
constexpr Changelog(Changelog const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: "&&", def_value: None }]
constexpr Changelog(Changelog&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Changelog(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Changelog& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Changelog& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Changelog& operator=(Changelog&& o) noexcept = default;
  constexpr Changelog& operator=(Changelog const& o) noexcept = default;
                


// Fields

/// @brief Field k_ChangelogEntryPattern offset 0
static constexpr ::ConstString  k_ChangelogEntryPattern{u"(##\\s\\[[0-9]+\\.[0-9]+\\.[0-9]+(\\-[a-zA-Z]+(\\.[0-9]+)*)*\\])"};

/// @brief Field k_VersionInfoPattern offset 0
static constexpr ::ConstString  k_VersionInfoPattern{u"(?<=##\\s\\[).*(?=\\])"};

/// @brief Field k_VersionDatePattern offset 0
static constexpr ::ConstString  k_VersionDatePattern{u"(?<=##\\s\\[.*\\]\\s-\\s)[0-9-]*"};

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry> __declspec(property(get=__get_m_Entries, put=__set_m_Entries))  m_Entries;

constexpr void __set_m_Entries(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry> __get_m_Entries() const;


// Properties

 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry> __declspec(property(get=get_entries))  entries;


// Methods

/// @brief Method get_entries addr 0x29a83a0 size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry> get_entries() ;

// Ctor Parameters [CppParam { name: "log", ty: "::StringW", modifiers: "", def_value: None }]
explicit Changelog(::StringW log) ;

/// @brief Method .ctor addr 0x29a841c size 0x30c virtual false final false
 void _ctor(::StringW log) ;

/// @brief Method CreateEntry addr 0x29a8728 size 0x170 virtual false final false
 UnityEngine::ProBuilder::ChangelogEntry CreateEntry(::StringW version, ::StringW contents) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Changelog);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Changelog, "UnityEngine.ProBuilder", "Changelog");
