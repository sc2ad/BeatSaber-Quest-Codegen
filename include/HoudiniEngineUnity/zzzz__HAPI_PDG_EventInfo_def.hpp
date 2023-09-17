#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
// Type: HoudiniEngineUnity::HAPI_PDG_EventInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9693))
// CS Name: HoudiniEngineUnity.HAPI_PDG_EventInfo
struct CORDL_TYPE HAPI_PDG_EventInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "workitemId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dependencyId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "msgSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_EventInfo(int32_t nodeId, int32_t workitemId, int32_t dependencyId, int32_t currentState, int32_t lastState, int32_t eventType, int32_t msgSH) noexcept;


                    constexpr HAPI_PDG_EventInfo(HAPI_PDG_EventInfo const&) = default;
                    constexpr HAPI_PDG_EventInfo(HAPI_PDG_EventInfo&&) = default;
                    constexpr HAPI_PDG_EventInfo& operator=(HAPI_PDG_EventInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_EventInfo& operator=(HAPI_PDG_EventInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_EventInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nodeId, put=__set_nodeId))  nodeId;

constexpr void __set_nodeId(int32_t value) ;

constexpr int32_t __get_nodeId() const;

 int32_t __declspec(property(get=__get_workitemId, put=__set_workitemId))  workitemId;

constexpr void __set_workitemId(int32_t value) ;

constexpr int32_t __get_workitemId() const;

 int32_t __declspec(property(get=__get_dependencyId, put=__set_dependencyId))  dependencyId;

constexpr void __set_dependencyId(int32_t value) ;

constexpr int32_t __get_dependencyId() const;

 int32_t __declspec(property(get=__get_currentState, put=__set_currentState))  currentState;

constexpr void __set_currentState(int32_t value) ;

constexpr int32_t __get_currentState() const;

 int32_t __declspec(property(get=__get_lastState, put=__set_lastState))  lastState;

constexpr void __set_lastState(int32_t value) ;

constexpr int32_t __get_lastState() const;

 int32_t __declspec(property(get=__get_eventType, put=__set_eventType))  eventType;

constexpr void __set_eventType(int32_t value) ;

constexpr int32_t __get_eventType() const;

 int32_t __declspec(property(get=__get_msgSH, put=__set_msgSH))  msgSH;

constexpr void __set_msgSH(int32_t value) ;

constexpr int32_t __get_msgSH() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventInfo, "HoudiniEngineUnity", "HAPI_PDG_EventInfo");
