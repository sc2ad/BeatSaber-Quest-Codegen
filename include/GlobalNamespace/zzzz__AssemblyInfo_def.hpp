#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AssemblyInfo;
}
// Type: ::AssemblyInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1875))
// CS Name: AssemblyInfo
class CORDL_TYPE AssemblyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssemblyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: " const&", def_value: None }]
constexpr AssemblyInfo(AssemblyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "&&", def_value: None }]
constexpr AssemblyInfo(AssemblyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssemblyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyInfo& operator=(AssemblyInfo&& o) noexcept = default;
  constexpr AssemblyInfo& operator=(AssemblyInfo const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

static void __set_version(::StringW value) ;

static ::StringW __get_version() ;


// Properties

static ::StringW __declspec(property(get=get_Version))  Version;


// Methods

/// @brief Method get_Version addr 0x10fd2e8 size 0x12c virtual false final false
static ::StringW get_Version() ;

// Ctor Parameters []
explicit AssemblyInfo() ;

/// @brief Method .ctor addr 0x10fd45c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssemblyInfo, "", "AssemblyInfo");
