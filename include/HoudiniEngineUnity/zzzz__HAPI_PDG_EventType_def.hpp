#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventType;
}
// Type: HoudiniEngineUnity::HAPI_PDG_EventType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9664))
// CS Name: HoudiniEngineUnity.HAPI_PDG_EventType
struct CORDL_TYPE HAPI_PDG_EventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_EventType(int32_t value__) noexcept;


                    constexpr HAPI_PDG_EventType(HAPI_PDG_EventType const&) = default;
                    constexpr HAPI_PDG_EventType(HAPI_PDG_EventType&&) = default;
                    constexpr HAPI_PDG_EventType& operator=(HAPI_PDG_EventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_EventType& operator=(HAPI_PDG_EventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_EventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PDG_EventType_Unwrapped : int32_t {
__HAPI_PDG_EVENT_NULL = 0,
__HAPI_PDG_EVENT_WORKITEM_ADD = 1,
__HAPI_PDG_EVENT_WORKITEM_REMOVE = 2,
__HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE = 3,
__HAPI_PDG_EVENT_WORKITEM_ADD_DEP = 4,
__HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP = 5,
__HAPI_PDG_EVENT_WORKITEM_ADD_PARENT = 6,
__HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT = 7,
__HAPI_PDG_EVENT_NODE_CLEAR = 8,
__HAPI_PDG_EVENT_COOK_ERROR = 9,
__HAPI_PDG_EVENT_COOK_WARNING = 10,
__HAPI_PDG_EVENT_COOK_COMPLETE = 11,
__HAPI_PDG_EVENT_DIRTY_START = 12,
__HAPI_PDG_EVENT_DIRTY_STOP = 13,
__HAPI_PDG_EVENT_DIRTY_ALL = 14,
__HAPI_PDG_EVENT_UI_SELECT = 15,
__HAPI_PDG_EVENT_NODE_CREATE = 16,
__HAPI_PDG_EVENT_NODE_REMOVE = 17,
__HAPI_PDG_EVENT_NODE_RENAME = 18,
__HAPI_PDG_EVENT_NODE_CONNECT = 19,
__HAPI_PDG_EVENT_NODE_DISCONNECT = 20,
__HAPI_PDG_EVENT_WORKITEM_SET_INT = 21,
__HAPI_PDG_EVENT_WORKITEM_SET_FLOAT = 22,
__HAPI_PDG_EVENT_WORKITEM_SET_STRING = 23,
__HAPI_PDG_EVENT_WORKITEM_SET_FILE = 24,
__HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT = 25,
__HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY = 26,
__HAPI_PDG_EVENT_WORKITEM_MERGE = 27,
__HAPI_PDG_EVENT_WORKITEM_RESULT = 28,
__HAPI_PDG_EVENT_WORKITEM_PRIORITY = 29,
__HAPI_PDG_EVENT_COOK_START = 30,
__HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR = 31,
__HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR = 32,
__HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE = 33,
__HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED = 34,
__HAPI_PDG_EVENT_ALL = 35,
__HAPI_PDG_EVENT_LOG = 36,
__HAPI_PDG_EVENT_SCHEDULER_ADDED = 37,
__HAPI_PDG_EVENT_SCHEDULER_REMOVED = 38,
__HAPI_PDG_EVENT_SET_SCHEDULER = 39,
__HAPI_PDG_EVENT_SERVICE_MANAGER_ALL = 40,
__HAPI_PDG_CONTEXT_EVENTS = 41,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PDG_EventType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PDG_EventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PDG_EVENT_NULL offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NULL;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_DEP offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_DEP;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_PARENT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_PARENT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT;

/// @brief Field HAPI_PDG_EVENT_NODE_CLEAR offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CLEAR;

/// @brief Field HAPI_PDG_EVENT_COOK_ERROR offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_ERROR;

/// @brief Field HAPI_PDG_EVENT_COOK_WARNING offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_WARNING;

/// @brief Field HAPI_PDG_EVENT_COOK_COMPLETE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_COMPLETE;

/// @brief Field HAPI_PDG_EVENT_DIRTY_START offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_START;

/// @brief Field HAPI_PDG_EVENT_DIRTY_STOP offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_STOP;

/// @brief Field HAPI_PDG_EVENT_DIRTY_ALL offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_DIRTY_ALL;

/// @brief Field HAPI_PDG_EVENT_UI_SELECT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_UI_SELECT;

/// @brief Field HAPI_PDG_EVENT_NODE_CREATE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CREATE;

/// @brief Field HAPI_PDG_EVENT_NODE_REMOVE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_REMOVE;

/// @brief Field HAPI_PDG_EVENT_NODE_RENAME offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_RENAME;

/// @brief Field HAPI_PDG_EVENT_NODE_CONNECT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_CONNECT;

/// @brief Field HAPI_PDG_EVENT_NODE_DISCONNECT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_DISCONNECT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_INT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_INT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FLOAT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FLOAT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_STRING offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_STRING;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_FILE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_FILE;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_MERGE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_MERGE;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_RESULT offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_RESULT;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_PRIORITY offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_PRIORITY;

/// @brief Field HAPI_PDG_EVENT_COOK_START offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_COOK_START;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR;

/// @brief Field HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR;

/// @brief Field HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE;

/// @brief Field HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED;

/// @brief Field HAPI_PDG_EVENT_ALL offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_ALL;

/// @brief Field HAPI_PDG_EVENT_LOG offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_LOG;

/// @brief Field HAPI_PDG_EVENT_SCHEDULER_ADDED offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_ADDED;

/// @brief Field HAPI_PDG_EVENT_SCHEDULER_REMOVED offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SCHEDULER_REMOVED;

/// @brief Field HAPI_PDG_EVENT_SET_SCHEDULER offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SET_SCHEDULER;

/// @brief Field HAPI_PDG_EVENT_SERVICE_MANAGER_ALL offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_EVENT_SERVICE_MANAGER_ALL;

/// @brief Field HAPI_PDG_CONTEXT_EVENTS offset 0
static ::HoudiniEngineUnity::HAPI_PDG_EventType const HAPI_PDG_CONTEXT_EVENTS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventType, "HoudiniEngineUnity", "HAPI_PDG_EventType");
