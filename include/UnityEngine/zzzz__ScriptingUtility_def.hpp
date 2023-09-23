#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class ScriptingUtility;
}
namespace UnityEngine {
struct UnityEngine__ScriptingUtility__TestClass;
}
// Type: ::TestClass
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10170))
// CS Name: UnityEngine.ScriptingUtility::TestClass
struct CORDL_TYPE UnityEngine__ScriptingUtility__TestClass : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ScriptingUtility__TestClass(int32_t value) noexcept;


                    constexpr UnityEngine__ScriptingUtility__TestClass(UnityEngine__ScriptingUtility__TestClass const&) = default;
                    constexpr UnityEngine__ScriptingUtility__TestClass(UnityEngine__ScriptingUtility__TestClass&&) = default;
                    constexpr UnityEngine__ScriptingUtility__TestClass& operator=(UnityEngine__ScriptingUtility__TestClass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ScriptingUtility__TestClass& operator=(UnityEngine__ScriptingUtility__TestClass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ScriptingUtility__TestClass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::ScriptingUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10171))
// CS Name: UnityEngine.ScriptingUtility
class CORDL_TYPE ScriptingUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TestClass = UnityEngine::UnityEngine__ScriptingUtility__TestClass;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScriptingUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: " const&", def_value: None }]
constexpr ScriptingUtility(ScriptingUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "&&", def_value: None }]
constexpr ScriptingUtility(ScriptingUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptingUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptingUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptingUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptingUtility& operator=(ScriptingUtility&& o) noexcept = default;
  constexpr ScriptingUtility& operator=(ScriptingUtility const& o) noexcept = default;
                


// Methods

/// @brief Method IsManagedCodeWorking addr 0x2b5c0d8 size 0x8 virtual false final false
static bool IsManagedCodeWorking() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ScriptingUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScriptingUtility, "UnityEngine", "ScriptingUtility");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ScriptingUtility__TestClass, "UnityEngine", "ScriptingUtility/TestClass");
