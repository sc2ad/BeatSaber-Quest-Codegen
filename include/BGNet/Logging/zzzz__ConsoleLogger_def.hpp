#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace BGNet::Logging {
class BGNet__Logging__Debug__ILogger;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BGNet::Logging {
class ConsoleLogger;
}
// Type: BGNet.Logging::ConsoleLogger
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16051))
// CS Name: BGNet.Logging.ConsoleLogger
class CORDL_TYPE ConsoleLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to BGNet::Logging::BGNet__Logging__Debug__ILogger
constexpr operator  BGNet::Logging::BGNet__Logging__Debug__ILogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConsoleLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: " const&", def_value: None }]
constexpr ConsoleLogger(ConsoleLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: "&&", def_value: None }]
constexpr ConsoleLogger(ConsoleLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConsoleLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConsoleLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConsoleLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConsoleLogger& operator=(ConsoleLogger&& o) noexcept = default;
  constexpr ConsoleLogger& operator=(ConsoleLogger const& o) noexcept = default;
                


// Methods

/// @brief Method LogInfo addr 0xdd3dbc size 0xe0 virtual true final true
 void LogInfo(::StringW message) ;

/// @brief Method LogError addr 0xdd3e9c size 0x1a0 virtual true final true
 void LogError(::StringW message) ;

/// @brief Method LogException addr 0xdd403c size 0x134 virtual true final true
 void LogException(System::Exception exception, ::StringW message) ;

/// @brief Method LogWarning addr 0xdd4170 size 0xe0 virtual true final true
 void LogWarning(::StringW message) ;

static BGNet::Logging::ConsoleLogger New_ctor() ;

/// @brief Method .ctor addr 0xdd4250 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
NEED_NO_BOX(BGNet::Logging::ConsoleLogger);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Logging::ConsoleLogger, "BGNet.Logging", "ConsoleLogger");
