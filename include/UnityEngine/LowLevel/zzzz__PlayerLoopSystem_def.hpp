#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Type: ::UpdateFunction
namespace UnityEngine::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10409))
// CS Name: UnityEngine.LowLevel.PlayerLoopSystem::UpdateFunction
class CORDL_TYPE ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction(____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction(____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction& operator=(____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction&& o) noexcept = default;
  constexpr ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction& operator=(____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b81478 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b81534 size 0x1014 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::LowLevel
// Type: UnityEngine.LowLevel::PlayerLoopSystem
namespace UnityEngine::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10410))
// CS Name: UnityEngine.LowLevel.PlayerLoopSystem
struct CORDL_TYPE PlayerLoopSystem : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using UpdateFunction = ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "subSystemList", ty: "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr PlayerLoopSystem(::System::Type type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> subSystemList, ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction updateDelegate, ::cordl_internals::intptr_t updateFunction, ::cordl_internals::intptr_t loopConditionFunction) noexcept;


                    constexpr PlayerLoopSystem(PlayerLoopSystem const&) = default;
                    constexpr PlayerLoopSystem(PlayerLoopSystem&&) = default;
                    constexpr PlayerLoopSystem& operator=(PlayerLoopSystem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayerLoopSystem& operator=(PlayerLoopSystem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayerLoopSystem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Type value) ;

constexpr ::System::Type __get_type() const;

 ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> __declspec(property(get=__get_subSystemList, put=__set_subSystemList))  subSystemList;

constexpr void __set_subSystemList(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> value) ;

constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> __get_subSystemList() const;

 ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction __declspec(property(get=__get_updateDelegate, put=__set_updateDelegate))  updateDelegate;

constexpr void __set_updateDelegate(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction value) ;

constexpr ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction __get_updateDelegate() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_updateFunction, put=__set_updateFunction))  updateFunction;

constexpr void __set_updateFunction(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_updateFunction() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_loopConditionFunction, put=__set_loopConditionFunction))  loopConditionFunction;

constexpr void __set_loopConditionFunction(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_loopConditionFunction() const;


// Methods

/// @brief Method ToString addr 0x2b81458 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
