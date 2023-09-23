#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class VersionSaveData;
}
// Type: ::VersionSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4801))
// CS Name: VersionSaveData
class CORDL_TYPE VersionSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VersionSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: " const&", def_value: None }]
constexpr VersionSaveData(VersionSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "&&", def_value: None }]
constexpr VersionSaveData(VersionSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VersionSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VersionSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VersionSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VersionSaveData& operator=(VersionSaveData&& o) noexcept = default;
  constexpr VersionSaveData& operator=(VersionSaveData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;


// Methods

// Ctor Parameters []
explicit VersionSaveData() ;

/// @brief Method .ctor addr 0x2226f64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VersionSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VersionSaveData, "", "VersionSaveData");
