#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct EventType;
}
// Forward declare root types
namespace UnityEngine {
struct EventInterests;
}
// Type: UnityEngine::EventInterests
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14764))
// CS Name: UnityEngine.EventInterests
struct CORDL_TYPE EventInterests : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_wantsMouseMove_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_wantsMouseEnterLeaveWindow_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_wantsLessLayoutEvents_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr EventInterests(bool _wantsMouseMove_k__BackingField, bool _wantsMouseEnterLeaveWindow_k__BackingField, bool _wantsLessLayoutEvents_k__BackingField) noexcept;


                    constexpr EventInterests(EventInterests const&) = default;
                    constexpr EventInterests(EventInterests&&) = default;
                    constexpr EventInterests& operator=(EventInterests const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventInterests& operator=(EventInterests&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventInterests(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__wantsMouseMove_k__BackingField, put=__set__wantsMouseMove_k__BackingField))  _wantsMouseMove_k__BackingField;

constexpr void __set__wantsMouseMove_k__BackingField(bool value) ;

constexpr bool __get__wantsMouseMove_k__BackingField() const;

 bool __declspec(property(get=__get__wantsMouseEnterLeaveWindow_k__BackingField, put=__set__wantsMouseEnterLeaveWindow_k__BackingField))  _wantsMouseEnterLeaveWindow_k__BackingField;

constexpr void __set__wantsMouseEnterLeaveWindow_k__BackingField(bool value) ;

constexpr bool __get__wantsMouseEnterLeaveWindow_k__BackingField() const;

 bool __declspec(property(get=__get__wantsLessLayoutEvents_k__BackingField, put=__set__wantsLessLayoutEvents_k__BackingField))  _wantsLessLayoutEvents_k__BackingField;

constexpr void __set__wantsLessLayoutEvents_k__BackingField(bool value) ;

constexpr bool __get__wantsLessLayoutEvents_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_wantsMouseMove, put=set_wantsMouseMove))  wantsMouseMove;

 bool __declspec(property(get=get_wantsMouseEnterLeaveWindow, put=set_wantsMouseEnterLeaveWindow))  wantsMouseEnterLeaveWindow;

 bool __declspec(property(get=get_wantsLessLayoutEvents))  wantsLessLayoutEvents;


// Methods

/// @brief Method get_wantsMouseMove addr 0x2b86300 size 0x8 virtual false final false
 bool get_wantsMouseMove() ;

/// @brief Method set_wantsMouseMove addr 0x2b86308 size 0xc virtual false final false
 void set_wantsMouseMove(bool value) ;

/// @brief Method get_wantsMouseEnterLeaveWindow addr 0x2b86314 size 0x8 virtual false final false
 bool get_wantsMouseEnterLeaveWindow() ;

/// @brief Method set_wantsMouseEnterLeaveWindow addr 0x2b8631c size 0xc virtual false final false
 void set_wantsMouseEnterLeaveWindow(bool value) ;

/// @brief Method get_wantsLessLayoutEvents addr 0x2b86328 size 0x8 virtual false final false
 bool get_wantsLessLayoutEvents() ;

/// @brief Method WantsEvent addr 0x2b86330 size 0x30 virtual false final false
 bool WantsEvent(UnityEngine::EventType type) ;

/// @brief Method WantsLayoutPass addr 0x2b86360 size 0x94 virtual false final false
 bool WantsLayoutPass(UnityEngine::EventType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventInterests, "UnityEngine", "EventInterests");
