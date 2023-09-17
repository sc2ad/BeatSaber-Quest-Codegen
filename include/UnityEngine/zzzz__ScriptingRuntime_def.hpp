#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class ScriptingRuntime;
}
// Type: UnityEngine::ScriptingRuntime
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10144))
// CS Name: UnityEngine.ScriptingRuntime
class CORDL_TYPE ScriptingRuntime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScriptingRuntime() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntime", modifiers: " const&", def_value: None }]
constexpr ScriptingRuntime(ScriptingRuntime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntime", modifiers: "&&", def_value: None }]
constexpr ScriptingRuntime(ScriptingRuntime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptingRuntime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptingRuntime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptingRuntime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptingRuntime& operator=(ScriptingRuntime&& o) noexcept = default;
  constexpr ScriptingRuntime& operator=(ScriptingRuntime const& o) noexcept = default;
                


// Methods

/// @brief Method GetAllUserAssemblies addr 0x2b59734 size 0x28 virtual false final false
static ::ArrayW<::StringW> GetAllUserAssemblies() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ScriptingRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingRuntime, "UnityEngine", "ScriptingRuntime");
