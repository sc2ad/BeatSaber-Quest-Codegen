#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
class Platform;
}
// Type: System::Platform
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7749))
// CS Name: System.Platform
class CORDL_TYPE Platform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Platform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: " const&", def_value: None }]
constexpr Platform(Platform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
constexpr Platform(Platform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Platform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Platform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Platform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Platform& operator=(Platform&& o) noexcept = default;
  constexpr Platform& operator=(Platform const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_checkedOS, put=__set_checkedOS))  checkedOS;

static void __set_checkedOS(bool value) ;

static bool __get_checkedOS() ;

static bool __declspec(property(get=__get_isMacOS, put=__set_isMacOS))  isMacOS;

static void __set_isMacOS(bool value) ;

static bool __get_isMacOS() ;

static bool __declspec(property(get=__get_isAix, put=__set_isAix))  isAix;

static void __set_isAix(bool value) ;

static bool __get_isAix() ;

static bool __declspec(property(get=__get_isIBMi, put=__set_isIBMi))  isIBMi;

static void __set_isIBMi(bool value) ;

static bool __get_isIBMi() ;

static bool __declspec(property(get=__get_isFreeBSD, put=__set_isFreeBSD))  isFreeBSD;

static void __set_isFreeBSD(bool value) ;

static bool __get_isFreeBSD() ;

static bool __declspec(property(get=__get_isOpenBSD, put=__set_isOpenBSD))  isOpenBSD;

static void __set_isOpenBSD(bool value) ;

static bool __get_isOpenBSD() ;


// Properties

static bool __declspec(property(get=get_IsMacOS))  IsMacOS;

static bool __declspec(property(get=get_IsFreeBSD))  IsFreeBSD;

static bool __declspec(property(get=get_IsOpenBSD))  IsOpenBSD;

static bool __declspec(property(get=get_IsIBMi))  IsIBMi;

static bool __declspec(property(get=get_IsAix))  IsAix;


// Methods

/// @brief Method uname addr 0x27bbe98 size 0x7c virtual false final false
static int32_t uname(::cordl_internals::intptr_t buf) ;

/// @brief Method CheckOS addr 0x27bbf14 size 0x20c virtual false final false
static void CheckOS() ;

/// @brief Method get_IsMacOS addr 0x27bc120 size 0xe0 virtual false final false
static bool get_IsMacOS() ;

/// @brief Method get_IsFreeBSD addr 0x27bc200 size 0x5c virtual false final false
static bool get_IsFreeBSD() ;

/// @brief Method get_IsOpenBSD addr 0x27bc25c size 0x5c virtual false final false
static bool get_IsOpenBSD() ;

/// @brief Method get_IsIBMi addr 0x27bc2b8 size 0x5c virtual false final false
static bool get_IsIBMi() ;

/// @brief Method get_IsAix addr 0x27bc314 size 0x5c virtual false final false
static bool get_IsAix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::Platform);
DEFINE_IL2CPP_ARG_TYPE(::System::Platform, "System", "Platform");
