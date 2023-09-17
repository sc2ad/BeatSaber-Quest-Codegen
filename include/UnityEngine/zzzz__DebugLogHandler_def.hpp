#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct LogOption;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class ILogHandler;
}
// Forward declare root types
namespace UnityEngine {
class DebugLogHandler;
}
// Type: UnityEngine::DebugLogHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9986))
// CS Name: UnityEngine.DebugLogHandler
class CORDL_TYPE DebugLogHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ILogHandler
constexpr operator  ::UnityEngine::ILogHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DebugLogHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: " const&", def_value: None }]
constexpr DebugLogHandler(DebugLogHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: "&&", def_value: None }]
constexpr DebugLogHandler(DebugLogHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebugLogHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DebugLogHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebugLogHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebugLogHandler& operator=(DebugLogHandler&& o) noexcept = default;
  constexpr DebugLogHandler& operator=(DebugLogHandler const& o) noexcept = default;
                


// Methods

/// @brief Method Internal_Log addr 0x2b297c8 size 0x5c virtual false final false
static void Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object obj) ;

/// @brief Method Internal_LogException addr 0x2b29824 size 0x44 virtual false final false
static void Internal_LogException(::System::Exception ex, ::UnityEngine::Object obj) ;

/// @brief Method LogFormat addr 0x2b29868 size 0x68 virtual true final true
 void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogException addr 0x2b298d0 size 0x94 virtual true final true
 void LogException(::System::Exception exception, ::UnityEngine::Object context) ;

// Ctor Parameters []
explicit DebugLogHandler() ;

/// @brief Method .ctor addr 0x2b29964 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::DebugLogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DebugLogHandler, "UnityEngine", "DebugLogHandler");
