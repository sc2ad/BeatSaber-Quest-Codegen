#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace BGNet::Logging {
class BGNet__Logging__Debug__ILogger;
}
namespace BGNet::Logging {
class BGNet__Logging__Debug__LoggerLinkedList;
}
namespace BGNet::Logging {
class Debug;
}
// Type: ::LoggerLinkedList
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16052))
// CS Name: BGNet.Logging.Debug::LoggerLinkedList
class CORDL_TYPE BGNet__Logging__Debug__LoggerLinkedList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Logging__Debug__LoggerLinkedList() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Logging__Debug__LoggerLinkedList", modifiers: " const&", def_value: None }]
constexpr BGNet__Logging__Debug__LoggerLinkedList(BGNet__Logging__Debug__LoggerLinkedList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Logging__Debug__LoggerLinkedList", modifiers: "&&", def_value: None }]
constexpr BGNet__Logging__Debug__LoggerLinkedList(BGNet__Logging__Debug__LoggerLinkedList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Logging__Debug__LoggerLinkedList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Logging__Debug__LoggerLinkedList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Logging__Debug__LoggerLinkedList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Logging__Debug__LoggerLinkedList& operator=(BGNet__Logging__Debug__LoggerLinkedList&& o) noexcept = default;
  constexpr BGNet__Logging__Debug__LoggerLinkedList& operator=(BGNet__Logging__Debug__LoggerLinkedList const& o) noexcept = default;
                


// Fields

 BGNet::Logging::BGNet__Logging__Debug__ILogger __declspec(property(get=__get_logger, put=__set_logger))  logger;

constexpr void __set_logger(BGNet::Logging::BGNet__Logging__Debug__ILogger value) ;

constexpr BGNet::Logging::BGNet__Logging__Debug__ILogger __get_logger() const;

 BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList value) ;

constexpr BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList __get_next() const;


// Methods

// Ctor Parameters [CppParam { name: "logger", ty: "BGNet::Logging::BGNet__Logging__Debug__ILogger", modifiers: "", def_value: None }]
explicit BGNet__Logging__Debug__LoggerLinkedList(BGNet::Logging::BGNet__Logging__Debug__ILogger logger) ;

/// @brief Method .ctor addr 0xdd44e0 size 0x28 virtual false final false
 void _ctor(BGNet::Logging::BGNet__Logging__Debug__ILogger logger) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
// Type: ::ILogger
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16053))
// CS Name: BGNet.Logging.Debug::ILogger
class CORDL_TYPE BGNet__Logging__Debug__ILogger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~BGNet__Logging__Debug__ILogger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Logging__Debug__ILogger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LogInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogInfo(::StringW message) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogError(::StringW message) ;

/// @brief Method LogException addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogException(System::Exception exception, ::StringW message) ;

/// @brief Method LogWarning addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogWarning(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
// Type: BGNet.Logging::Debug
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16054))
// CS Name: BGNet.Logging.Debug
class CORDL_TYPE Debug : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ILogger = BGNet::Logging::BGNet__Logging__Debug__ILogger;

using LoggerLinkedList = BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Debug() = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: " const&", def_value: None }]
constexpr Debug(Debug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
constexpr Debug(Debug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Debug(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Debug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Debug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Debug& operator=(Debug&& o) noexcept = default;
  constexpr Debug& operator=(Debug const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__loggersMutex, put=__set__loggersMutex))  _loggersMutex;

static void __set__loggersMutex(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__loggersMutex() ;

static BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList __declspec(property(get=__get__loggers, put=__set__loggers))  _loggers;

static void __set__loggers(BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList value) ;

static BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList __get__loggers() ;


// Methods

/// @brief Method NoDomainReloadInit addr 0xdd4258 size 0x90 virtual false final false
static void NoDomainReloadInit() ;

/// @brief Method AddLogger addr 0xdd42f0 size 0x178 virtual false final false
static void AddLogger(BGNet::Logging::BGNet__Logging__Debug__ILogger logger) ;

/// @brief Method RemoveLogger addr 0xdd4508 size 0x24c virtual false final false
static void RemoveLogger(BGNet::Logging::BGNet__Logging__Debug__ILogger logger) ;

/// @brief Method Log addr 0xdd4754 size 0xf4 virtual false final false
static void Log(::StringW message) ;

/// @brief Method LogError addr 0xdd4848 size 0xf8 virtual false final false
static void LogError(::StringW message) ;

/// @brief Method LogException addr 0xdd4940 size 0x100 virtual false final false
static void LogException(System::Exception exception, ::StringW message) ;

/// @brief Method LogWarning addr 0xdd4a40 size 0xf8 virtual false final false
static void LogWarning(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
NEED_NO_BOX(BGNet::Logging::BGNet__Logging__Debug__ILogger);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Logging::BGNet__Logging__Debug__ILogger, "BGNet.Logging", "Debug/ILogger");
NEED_NO_BOX(BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Logging::BGNet__Logging__Debug__LoggerLinkedList, "BGNet.Logging", "Debug/LoggerLinkedList");
NEED_NO_BOX(BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Logging::Debug, "BGNet.Logging", "Debug");
