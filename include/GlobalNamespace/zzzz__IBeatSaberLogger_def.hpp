#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatSaberLogger;
}
// Type: ::IBeatSaberLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5965))
// CS Name: IBeatSaberLogger
class CORDL_TYPE IBeatSaberLogger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatSaberLogger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatSaberLogger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
 void Log(::StringW message) ;

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
 void Log(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogWarning addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogWarning(::StringW message) ;

/// @brief Method LogWarning addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogWarning(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogError(::StringW message) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogError(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogException addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogException(System::Exception exception) ;

/// @brief Method LogException addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogException(System::Exception exception, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatSaberLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatSaberLogger, "", "IBeatSaberLogger");
