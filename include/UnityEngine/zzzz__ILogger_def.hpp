#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class ILogHandler;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ILogger;
}
// Type: UnityEngine::ILogger
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9996))
// CS Name: UnityEngine.ILogger
class CORDL_TYPE ILogger : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ILogHandler
constexpr operator  ::UnityEngine::ILogHandler() const noexcept;

~ILogger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILogger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::ILogHandler __declspec(property(get=get_logHandler))  logHandler;

 bool __declspec(property(get=get_logEnabled))  logEnabled;


// Methods

/// @brief Method get_logHandler addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ILogHandler get_logHandler() ;

/// @brief Method get_logEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_logEnabled() ;

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
 void Log(::UnityEngine::LogType logType, ::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
 void Log(::UnityEngine::LogType logType, ::bs_hook::Il2CppWrapperType message, ::UnityEngine::Object context) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogError(::StringW tag, ::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogFormat addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogger, "UnityEngine", "ILogger");
