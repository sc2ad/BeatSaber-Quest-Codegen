#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashManagerSO;
}
// Type: ::CrashManagerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5917))
// CS Name: CrashManagerSO
class CORDL_TYPE CrashManagerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrashManagerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: " const&", def_value: None }]
constexpr CrashManagerSO(CrashManagerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: "&&", def_value: None }]
constexpr CrashManagerSO(CrashManagerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrashManagerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr CrashManagerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrashManagerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrashManagerSO& operator=(CrashManagerSO&& o) noexcept = default;
  constexpr CrashManagerSO& operator=(CrashManagerSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__logString, put=__set__logString))  _logString;

constexpr void __set__logString(::StringW value) ;

constexpr ::StringW __get__logString() const;

 ::StringW __declspec(property(get=__get__stackTrace, put=__set__stackTrace))  _stackTrace;

constexpr void __set__stackTrace(::StringW value) ;

constexpr ::StringW __get__stackTrace() const;


// Properties

 ::StringW __declspec(property(get=get_logString))  logString;

 ::StringW __declspec(property(get=get_stackTrace))  stackTrace;


// Methods

/// @brief Method get_logString addr 0x21921b0 size 0x8 virtual false final false
 ::StringW get_logString() ;

/// @brief Method get_stackTrace addr 0x21921b8 size 0x8 virtual false final false
 ::StringW get_stackTrace() ;

/// @brief Method StartCatchingExceptions addr 0x21921c0 size 0x80 virtual false final false
 void StartCatchingExceptions() ;

/// @brief Method OnDisable addr 0x2192240 size 0x80 virtual false final false
 void OnDisable() ;

/// @brief Method HandleLog addr 0x21922c0 size 0xa0 virtual false final false
 void HandleLog(::StringW logString, ::StringW stackTrace, UnityEngine::LogType type) ;

// Ctor Parameters []
explicit CrashManagerSO() ;

/// @brief Method .ctor addr 0x2192360 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CrashManagerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashManagerSO, "", "CrashManagerSO");
