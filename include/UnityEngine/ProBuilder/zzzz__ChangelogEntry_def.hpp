#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Type: UnityEngine.ProBuilder::ChangelogEntry
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12049))
// CS Name: UnityEngine.ProBuilder.ChangelogEntry
class CORDL_TYPE ChangelogEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ChangelogEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: " const&", def_value: None }]
constexpr ChangelogEntry(ChangelogEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: "&&", def_value: None }]
constexpr ChangelogEntry(ChangelogEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangelogEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChangelogEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangelogEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangelogEntry& operator=(ChangelogEntry&& o) noexcept = default;
  constexpr ChangelogEntry& operator=(ChangelogEntry const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::SemVer __declspec(property(get=__get_m_VersionInfo, put=__set_m_VersionInfo))  m_VersionInfo;

constexpr void __set_m_VersionInfo(UnityEngine::ProBuilder::SemVer value) ;

constexpr UnityEngine::ProBuilder::SemVer __get_m_VersionInfo() const;

 ::StringW __declspec(property(get=__get_m_ReleaseNotes, put=__set_m_ReleaseNotes))  m_ReleaseNotes;

constexpr void __set_m_ReleaseNotes(::StringW value) ;

constexpr ::StringW __get_m_ReleaseNotes() const;


// Properties

 UnityEngine::ProBuilder::SemVer __declspec(property(get=get_versionInfo))  versionInfo;

 ::StringW __declspec(property(get=get_releaseNotes))  releaseNotes;


// Methods

/// @brief Method get_versionInfo addr 0x29a8300 size 0x8 virtual false final false
 UnityEngine::ProBuilder::SemVer get_versionInfo() ;

/// @brief Method get_releaseNotes addr 0x29a8308 size 0x8 virtual false final false
 ::StringW get_releaseNotes() ;

// Ctor Parameters [CppParam { name: "version", ty: "UnityEngine::ProBuilder::SemVer", modifiers: "", def_value: None }, CppParam { name: "releaseNotes", ty: "::StringW", modifiers: "", def_value: None }]
explicit ChangelogEntry(UnityEngine::ProBuilder::SemVer version, ::StringW releaseNotes) ;

/// @brief Method .ctor addr 0x29a8310 size 0x2c virtual false final false
 void _ctor(UnityEngine::ProBuilder::SemVer version, ::StringW releaseNotes) ;

/// @brief Method ToString addr 0x29a833c size 0x64 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ChangelogEntry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ChangelogEntry, "UnityEngine.ProBuilder", "ChangelogEntry");
