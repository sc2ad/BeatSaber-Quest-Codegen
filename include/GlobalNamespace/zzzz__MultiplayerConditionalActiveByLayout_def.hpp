#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
class MultiplayerConditionalActiveByLayout;
}
// Type: ::Condition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5294))
// CS Name: MultiplayerConditionalActiveByLayout::Condition
struct CORDL_TYPE GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition(GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition const&) = default;
                    constexpr GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition(GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition&&) = default;
                    constexpr GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition& operator=(GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition& operator=(GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition_Unwrapped : int32_t {
__ShowIf = 0,
__HideIf = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ShowIf offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition const ShowIf;

/// @brief Field HideIf offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition const HideIf;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerConditionalActiveByLayout
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5295))
// CS Name: MultiplayerConditionalActiveByLayout
class CORDL_TYPE MultiplayerConditionalActiveByLayout : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Condition = GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerConditionalActiveByLayout() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: " const&", def_value: None }]
constexpr MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "&&", def_value: None }]
constexpr MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConditionalActiveByLayout(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConditionalActiveByLayout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConditionalActiveByLayout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConditionalActiveByLayout& operator=(MultiplayerConditionalActiveByLayout&& o) noexcept = default;
  constexpr MultiplayerConditionalActiveByLayout& operator=(MultiplayerConditionalActiveByLayout const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition __declspec(property(get=__get__condition, put=__set__condition))  _condition;

constexpr void __set__condition(GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition __get__condition() const;

 GlobalNamespace::MultiplayerPlayerLayout __declspec(property(get=__get__layout, put=__set__layout))  _layout;

constexpr void __set__layout(GlobalNamespace::MultiplayerPlayerLayout value) ;

constexpr GlobalNamespace::MultiplayerPlayerLayout __get__layout() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;


// Methods

/// @brief Method Start addr 0x20f1590 size 0xa0 virtual false final false
 void Start() ;

/// @brief Method HandlePlayersLayoutWasCalculated addr 0x20f1630 size 0x58 virtual false final false
 void HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount) ;

static GlobalNamespace::MultiplayerConditionalActiveByLayout New_ctor() ;

/// @brief Method .ctor addr 0x20f1688 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition, "", "MultiplayerConditionalActiveByLayout/Condition");
NEED_NO_BOX(GlobalNamespace::MultiplayerConditionalActiveByLayout);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConditionalActiveByLayout, "", "MultiplayerConditionalActiveByLayout");
