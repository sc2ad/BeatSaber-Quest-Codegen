#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityDebugLogger;
}
// Type: ::UnityDebugLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5969))
// CS Name: UnityDebugLogger
class CORDL_TYPE UnityDebugLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBeatSaberLogger
constexpr operator  ::GlobalNamespace::IBeatSaberLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityDebugLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: " const&", def_value: None }]
constexpr UnityDebugLogger(UnityDebugLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "&&", def_value: None }]
constexpr UnityDebugLogger(UnityDebugLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityDebugLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityDebugLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityDebugLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityDebugLogger& operator=(UnityDebugLogger&& o) noexcept = default;
  constexpr UnityDebugLogger& operator=(UnityDebugLogger const& o) noexcept = default;
                


// Methods

/// @brief Method Log addr 0x219ea84 size 0x58 virtual true final true
 void Log(::StringW message) ;

/// @brief Method Log addr 0x219eadc size 0xb8 virtual true final true
 void Log(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogWarning addr 0x219eb94 size 0x58 virtual true final true
 void LogWarning(::StringW message) ;

/// @brief Method LogWarning addr 0x219ebec size 0xb8 virtual true final true
 void LogWarning(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogError addr 0x219eca4 size 0x58 virtual true final true
 void LogError(::StringW message) ;

/// @brief Method LogError addr 0x219ecfc size 0xb8 virtual true final true
 void LogError(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogException addr 0x219edb4 size 0x58 virtual true final true
 void LogException(::System::Exception exception) ;

/// @brief Method LogException addr 0x219ee0c size 0xb8 virtual true final true
 void LogException(::System::Exception exception, ::bs_hook::Il2CppWrapperType context) ;

// Ctor Parameters []
explicit UnityDebugLogger() ;

/// @brief Method .ctor addr 0x219eec4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::UnityDebugLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityDebugLogger, "", "UnityDebugLogger");
