#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace System {
class Exception;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Type: UnityEngine::Debug
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9987))
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
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

static UnityEngine::ILogger __declspec(property(get=__get_s_DefaultLogger, put=__set_s_DefaultLogger))  s_DefaultLogger;

static void __set_s_DefaultLogger(UnityEngine::ILogger value) ;

static UnityEngine::ILogger __get_s_DefaultLogger() ;

static UnityEngine::ILogger __declspec(property(get=__get_s_Logger, put=__set_s_Logger))  s_Logger;

static void __set_s_Logger(UnityEngine::ILogger value) ;

static UnityEngine::ILogger __get_s_Logger() ;


// Properties

static UnityEngine::ILogger __declspec(property(get=get_unityLogger))  unityLogger;

static bool __declspec(property(get=get_isDebugBuild))  isDebugBuild;


// Methods

/// @brief Method get_unityLogger addr 0x2b2996c size 0x58 virtual false final false
static UnityEngine::ILogger get_unityLogger() ;

/// @brief Method DrawLine addr 0x2b299c4 size 0xe8 virtual false final false
static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color) ;

/// @brief Method DrawLine addr 0x2b29aac size 0xb4 virtual false final false
static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color, float_t duration, bool depthTest) ;

/// @brief Method Break addr 0x2b29bcc size 0x28 virtual false final false
static void Break() ;

/// @brief Method ExtractStackTraceNoAlloc addr 0x2b29bf4 size 0x54 virtual false final false
static int32_t ExtractStackTraceNoAlloc(void* buffer, int32_t bufferMax, ::StringW projectFolder) ;

/// @brief Method Log addr 0x2b29c48 size 0x108 virtual false final false
static void Log(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Log addr 0x2b29d50 size 0x118 virtual false final false
static void Log(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogFormat addr 0x2b29e68 size 0x118 virtual false final false
static void LogFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogError addr 0x2b29f80 size 0x108 virtual false final false
static void LogError(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogError addr 0x2b2a088 size 0x118 virtual false final false
static void LogError(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogErrorFormat addr 0x2b2a1a0 size 0x118 virtual false final false
static void LogErrorFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogErrorFormat addr 0x2b2a2b8 size 0x11c virtual false final false
static void LogErrorFormat(UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogException addr 0x2b2a3d4 size 0x108 virtual false final false
static void LogException(System::Exception exception) ;

/// @brief Method LogException addr 0x2b2a4dc size 0x114 virtual false final false
static void LogException(System::Exception exception, UnityEngine::Object context) ;

/// @brief Method LogWarning addr 0x2b2a5f0 size 0x108 virtual false final false
static void LogWarning(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogWarning addr 0x2b2a6f8 size 0x118 virtual false final false
static void LogWarning(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogWarningFormat addr 0x2b2a810 size 0x118 virtual false final false
static void LogWarningFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogWarningFormat addr 0x2b2a928 size 0x11c virtual false final false
static void LogWarningFormat(UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Assert addr 0x2b2aa44 size 0x130 virtual false final false
static void Assert(bool condition) ;

/// @brief Method Assert addr 0x2b2ab74 size 0x11c virtual false final false
static void Assert(bool condition, ::StringW message) ;

/// @brief Method LogAssertion addr 0x2b2ac90 size 0x108 virtual false final false
static void LogAssertion(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogAssertionFormat addr 0x2b2ad98 size 0x118 virtual false final false
static void LogAssertionFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method get_isDebugBuild addr 0x2b2aeb0 size 0x28 virtual false final false
static bool get_isDebugBuild() ;

/// @brief Method CallOverridenDebugHandler addr 0x2b2aed8 size 0x3f8 virtual false final false
static bool CallOverridenDebugHandler(System::Exception exception, UnityEngine::Object obj) ;

/// @brief Method IsLoggingEnabled addr 0x2b2b2d0 size 0x224 virtual false final false
static bool IsLoggingEnabled() ;

/// @brief Method DrawLine_Injected addr 0x2b29b60 size 0x6c virtual false final false
static void DrawLine_Injected(ByRef<UnityEngine::Vector3> start, ByRef<UnityEngine::Vector3> end, ByRef<UnityEngine::Color> color, float_t duration, bool depthTest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Debug, "UnityEngine", "Debug");
