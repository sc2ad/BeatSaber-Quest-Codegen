#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class RequireComponent;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ExecuteInEditMode;
}
namespace UnityEngine {
class DisallowMultipleComponent;
}
// Forward declare root types
namespace UnityEngine {
class AttributeHelperEngine;
}
// Type: UnityEngine::AttributeHelperEngine
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10135))
// CS Name: UnityEngine.AttributeHelperEngine
class CORDL_TYPE AttributeHelperEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AttributeHelperEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeHelperEngine", modifiers: " const&", def_value: None }]
constexpr AttributeHelperEngine(AttributeHelperEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeHelperEngine", modifiers: "&&", def_value: None }]
constexpr AttributeHelperEngine(AttributeHelperEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeHelperEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AttributeHelperEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeHelperEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeHelperEngine& operator=(AttributeHelperEngine&& o) noexcept = default;
  constexpr AttributeHelperEngine& operator=(AttributeHelperEngine const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::DisallowMultipleComponent> __declspec(property(get=__get__disallowMultipleComponentArray, put=__set__disallowMultipleComponentArray))  _disallowMultipleComponentArray;

static void __set__disallowMultipleComponentArray(::ArrayW<::UnityEngine::DisallowMultipleComponent> value) ;

static ::ArrayW<::UnityEngine::DisallowMultipleComponent> __get__disallowMultipleComponentArray() ;

static ::ArrayW<::UnityEngine::ExecuteInEditMode> __declspec(property(get=__get__executeInEditModeArray, put=__set__executeInEditModeArray))  _executeInEditModeArray;

static void __set__executeInEditModeArray(::ArrayW<::UnityEngine::ExecuteInEditMode> value) ;

static ::ArrayW<::UnityEngine::ExecuteInEditMode> __get__executeInEditModeArray() ;

static ::ArrayW<::UnityEngine::RequireComponent> __declspec(property(get=__get__requireComponentArray, put=__set__requireComponentArray))  _requireComponentArray;

static void __set__requireComponentArray(::ArrayW<::UnityEngine::RequireComponent> value) ;

static ::ArrayW<::UnityEngine::RequireComponent> __get__requireComponentArray() ;


// Methods

/// @brief Method GetParentTypeDisallowingMultipleInclusion addr 0x2b55ffc size 0x100 virtual false final false
static ::System::Type GetParentTypeDisallowingMultipleInclusion(::System::Type type) ;

/// @brief Method GetRequiredComponents addr 0x2b560fc size 0x43c virtual false final false
static ::ArrayW<::System::Type> GetRequiredComponents(::System::Type klass) ;

/// @brief Method GetExecuteMode addr 0x2b56538 size 0x114 virtual false final false
static int32_t GetExecuteMode(::System::Type klass) ;

/// @brief Method CheckIsEditorScript addr 0x2b5664c size 0xe0 virtual false final false
static int32_t CheckIsEditorScript(::System::Type klass) ;

/// @brief Method GetDefaultExecutionOrderFor addr 0x2b5672c size 0x78 virtual false final false
static int32_t GetDefaultExecutionOrderFor(::System::Type klass) ;

/// @brief Method GetCustomAttributeOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCustomAttributeOfType(::System::Type klass) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AttributeHelperEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AttributeHelperEngine, "UnityEngine", "AttributeHelperEngine");
