#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Logger;
}
// Type: HoudiniEngineUnity::HEU_Logger
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9791))
// CS Name: HoudiniEngineUnity.HEU_Logger
class CORDL_TYPE HEU_Logger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Logger() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: " const&", def_value: None }]
constexpr HEU_Logger(HEU_Logger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: "&&", def_value: None }]
constexpr HEU_Logger(HEU_Logger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Logger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Logger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Logger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Logger& operator=(HEU_Logger&& o) noexcept = default;
  constexpr HEU_Logger& operator=(HEU_Logger const& o) noexcept = default;
                


// Methods

/// @brief Method Log addr 0x205e534 size 0x58 virtual false final false
static void Log(::StringW text) ;

/// @brief Method LogFormat addr 0x205e58c size 0x68 virtual false final false
static void LogFormat(::StringW text, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogWarning addr 0x20591ac size 0x60 virtual false final false
static void LogWarning(::StringW text) ;

/// @brief Method LogWarningFormat addr 0x205920c size 0x74 virtual false final false
static void LogWarningFormat(::StringW text, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogError addr 0x20578bc size 0x60 virtual false final false
static void LogError(::StringW text) ;

/// @brief Method LogErrorFormat addr 0x2059c00 size 0x74 virtual false final false
static void LogErrorFormat(::StringW text, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogError addr 0x205e698 size 0x8c virtual false final false
static void LogError(::System::Exception ex) ;

/// @brief Method LogAssertion addr 0x205e724 size 0x4 virtual false final false
static void LogAssertion(::StringW text) ;

/// @brief Method LogAssertionFormat addr 0x205e728 size 0x4 virtual false final false
static void LogAssertionFormat(::StringW text, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogToCookLogsIfOn addr 0x205e5f4 size 0x40 virtual false final false
static void LogToCookLogsIfOn(::StringW text) ;

/// @brief Method LogToCookLogsIfOnFormat addr 0x205e634 size 0x64 virtual false final false
static void LogToCookLogsIfOnFormat(::StringW text, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

// Ctor Parameters []
explicit HEU_Logger() ;

/// @brief Method .ctor addr 0x205e72c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Logger);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Logger, "HoudiniEngineUnity", "HEU_Logger");
