#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSaveDataHelpers;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData;
}
// Type: ::VersionSerializedData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14955))
// CS Name: BeatmapSaveDataHelpers::VersionSerializedData
class CORDL_TYPE ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData(____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData(____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData& operator=(____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData& operator=(____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;


// Properties

 ::StringW __declspec(property(get=get_v))  v;


// Methods

/// @brief Method get_v addr 0xd98624 size 0x30 virtual false final false
 ::StringW get_v() ;

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData() ;

/// @brief Method .ctor addr 0xd98654 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapSaveDataHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14956))
// CS Name: BeatmapSaveDataHelpers
class CORDL_TYPE BeatmapSaveDataHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VersionSerializedData = ::GlobalNamespace::____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapSaveDataHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataHelpers(BeatmapSaveDataHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataHelpers(BeatmapSaveDataHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataHelpers& operator=(BeatmapSaveDataHelpers&& o) noexcept = default;
  constexpr BeatmapSaveDataHelpers& operator=(BeatmapSaveDataHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method GetVersion addr 0xd98578 size 0xac virtual false final false
static ::System::Version GetVersion(::StringW data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers, "", "BeatmapSaveDataHelpers");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapSaveDataHelpers__VersionSerializedData, "", "BeatmapSaveDataHelpers/VersionSerializedData");
