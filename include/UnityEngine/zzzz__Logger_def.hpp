#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class ILogger;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ILogHandler;
}
// Forward declare root types
namespace UnityEngine {
class Logger;
}
// Type: UnityEngine::Logger
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9998))
// CS Name: UnityEngine.Logger
class CORDL_TYPE Logger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ILogger
constexpr operator  UnityEngine::ILogger() const noexcept;

/// @brief Convert operator to UnityEngine::ILogHandler
constexpr operator  UnityEngine::ILogHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Logger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: " const&", def_value: None }]
constexpr Logger(Logger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
constexpr Logger(Logger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Logger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Logger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Logger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Logger& operator=(Logger&& o) noexcept = default;
  constexpr Logger& operator=(Logger const& o) noexcept = default;
                


// Fields

 UnityEngine::ILogHandler __declspec(property(get=__get__logHandler_k__BackingField, put=__set__logHandler_k__BackingField))  _logHandler_k__BackingField;

constexpr void __set__logHandler_k__BackingField(UnityEngine::ILogHandler value) ;

constexpr UnityEngine::ILogHandler __get__logHandler_k__BackingField() const;

 bool __declspec(property(get=__get__logEnabled_k__BackingField, put=__set__logEnabled_k__BackingField))  _logEnabled_k__BackingField;

constexpr void __set__logEnabled_k__BackingField(bool value) ;

constexpr bool __get__logEnabled_k__BackingField() const;

 UnityEngine::LogType __declspec(property(get=__get__filterLogType_k__BackingField, put=__set__filterLogType_k__BackingField))  _filterLogType_k__BackingField;

constexpr void __set__filterLogType_k__BackingField(UnityEngine::LogType value) ;

constexpr UnityEngine::LogType __get__filterLogType_k__BackingField() const;


// Properties

 UnityEngine::ILogHandler __declspec(property(get=get_logHandler, put=set_logHandler))  logHandler;

 bool __declspec(property(get=get_logEnabled, put=set_logEnabled))  logEnabled;

 UnityEngine::LogType __declspec(property(get=get_filterLogType, put=set_filterLogType))  filterLogType;


// Methods

// Ctor Parameters [CppParam { name: "logHandler", ty: "UnityEngine::ILogHandler", modifiers: "", def_value: None }]
explicit Logger(UnityEngine::ILogHandler logHandler) ;

/// @brief Method .ctor addr 0x2b2b604 size 0x38 virtual false final false
 void _ctor(UnityEngine::ILogHandler logHandler) ;

/// @brief Method get_logHandler addr 0x2b2b88c size 0x8 virtual true final true
 UnityEngine::ILogHandler get_logHandler() ;

/// @brief Method set_logHandler addr 0x2b2b894 size 0x8 virtual true final true
 void set_logHandler(UnityEngine::ILogHandler value) ;

/// @brief Method get_logEnabled addr 0x2b2b89c size 0x8 virtual true final true
 bool get_logEnabled() ;

/// @brief Method set_logEnabled addr 0x2b2b8a4 size 0xc virtual true final true
 void set_logEnabled(bool value) ;

/// @brief Method get_filterLogType addr 0x2b2b8b0 size 0x8 virtual true final true
 UnityEngine::LogType get_filterLogType() ;

/// @brief Method set_filterLogType addr 0x2b2b8b8 size 0x8 virtual true final true
 void set_filterLogType(UnityEngine::LogType value) ;

/// @brief Method IsLogTypeAllowed addr 0x2b2b8c0 size 0x3c virtual true final true
 bool IsLogTypeAllowed(UnityEngine::LogType logType) ;

/// @brief Method GetString addr 0x2b2b8fc size 0x120 virtual false final false
static ::StringW GetString(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Log addr 0x2b2ba1c size 0x174 virtual true final true
 void Log(UnityEngine::LogType logType, ::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Log addr 0x2b2bb90 size 0x178 virtual true final true
 void Log(UnityEngine::LogType logType, ::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogError addr 0x2b2bd08 size 0x190 virtual true final true
 void LogError(::StringW tag, ::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogException addr 0x2b2be98 size 0xd4 virtual true final true
 void LogException(System::Exception exception, UnityEngine::Object context) ;

/// @brief Method LogFormat addr 0x2b2bf6c size 0xf8 virtual true final true
 void LogFormat(UnityEngine::LogType logType, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogFormat addr 0x2b2c064 size 0x108 virtual true final true
 void LogFormat(UnityEngine::LogType logType, UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Logger);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Logger, "UnityEngine", "Logger");
