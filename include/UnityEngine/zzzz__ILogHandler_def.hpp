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
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine {
class ILogHandler;
}
// Type: UnityEngine::ILogHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9997))
// CS Name: UnityEngine.ILogHandler
class CORDL_TYPE ILogHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILogHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILogHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LogFormat addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogException addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogException(::System::Exception exception, ::UnityEngine::Object context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ILogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogHandler, "UnityEngine", "ILogHandler");
