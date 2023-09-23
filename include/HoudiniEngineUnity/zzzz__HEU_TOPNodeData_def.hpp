#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_TOPNodeData__PDGState;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
// Type: ::PDGState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9712))
// CS Name: HoudiniEngineUnity.HEU_TOPNodeData::PDGState
struct CORDL_TYPE HoudiniEngineUnity__HEU_TOPNodeData__PDGState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TOPNodeData__PDGState(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_TOPNodeData__PDGState(HoudiniEngineUnity__HEU_TOPNodeData__PDGState const&) = default;
                    constexpr HoudiniEngineUnity__HEU_TOPNodeData__PDGState(HoudiniEngineUnity__HEU_TOPNodeData__PDGState&&) = default;
                    constexpr HoudiniEngineUnity__HEU_TOPNodeData__PDGState& operator=(HoudiniEngineUnity__HEU_TOPNodeData__PDGState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_TOPNodeData__PDGState& operator=(HoudiniEngineUnity__HEU_TOPNodeData__PDGState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TOPNodeData__PDGState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_TOPNodeData__PDGState_Unwrapped : int32_t {
__NONE = 0,
__DIRTIED = 1,
__DIRTYING = 2,
__COOKING = 3,
__COOK_COMPLETE = 4,
__COOK_FAILED = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_TOPNodeData__PDGState_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_TOPNodeData__PDGState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const NONE;

/// @brief Field DIRTIED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const DIRTIED;

/// @brief Field DIRTYING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const DIRTYING;

/// @brief Field COOKING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const COOKING;

/// @brief Field COOK_COMPLETE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const COOK_COMPLETE;

/// @brief Field COOK_FAILED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState const COOK_FAILED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_TOPNodeData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9713))
// CS Name: HoudiniEngineUnity.HEU_TOPNodeData
class CORDL_TYPE HEU_TOPNodeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PDGState = HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HEU_TOPNodeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNodeData", modifiers: " const&", def_value: None }]
constexpr HEU_TOPNodeData(HEU_TOPNodeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNodeData", modifiers: "&&", def_value: None }]
constexpr HEU_TOPNodeData(HEU_TOPNodeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TOPNodeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TOPNodeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TOPNodeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TOPNodeData& operator=(HEU_TOPNodeData&& o) noexcept = default;
  constexpr HEU_TOPNodeData& operator=(HEU_TOPNodeData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__nodeID, put=__set__nodeID))  _nodeID;

constexpr void __set__nodeID(int32_t value) ;

constexpr int32_t __get__nodeID() const;

 ::StringW __declspec(property(get=__get__nodeName, put=__set__nodeName))  _nodeName;

constexpr void __set__nodeName(::StringW value) ;

constexpr ::StringW __get__nodeName() const;

 ::StringW __declspec(property(get=__get__parentName, put=__set__parentName))  _parentName;

constexpr void __set__parentName(::StringW value) ;

constexpr ::StringW __get__parentName() const;

 UnityEngine::GameObject __declspec(property(get=__get__workResultParentGO, put=__set__workResultParentGO))  _workResultParentGO;

constexpr void __set__workResultParentGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__workResultParentGO() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult> __declspec(property(get=__get__workResults, put=__set__workResults))  _workResults;

constexpr void __set__workResults(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPWorkResult> __get__workResults() const;

 HoudiniEngineUnity::TOPNodeTags __declspec(property(get=__get__tags, put=__set__tags))  _tags;

constexpr void __set__tags(HoudiniEngineUnity::TOPNodeTags value) ;

constexpr HoudiniEngineUnity::TOPNodeTags __get__tags() const;

 bool __declspec(property(get=__get__showResults, put=__set__showResults))  _showResults;

constexpr void __set__showResults(bool value) ;

constexpr bool __get__showResults() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState __declspec(property(get=__get__pdgState, put=__set__pdgState))  _pdgState;

constexpr void __set__pdgState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState __get__pdgState() const;

 HoudiniEngineUnity::HEU_WorkItemTally __declspec(property(get=__get__workItemTally, put=__set__workItemTally))  _workItemTally;

constexpr void __set__workItemTally(HoudiniEngineUnity::HEU_WorkItemTally value) ;

constexpr HoudiniEngineUnity::HEU_WorkItemTally __get__workItemTally() const;


// Methods

/// @brief Method Reset addr 0x202b0b4 size 0x24 virtual false final false
 void Reset() ;

/// @brief Method AreAllWorkItemsComplete addr 0x202b0d8 size 0x4c virtual false final false
 bool AreAllWorkItemsComplete() ;

/// @brief Method AnyWorkItemsFailed addr 0x202ae94 size 0x24 virtual false final false
 bool AnyWorkItemsFailed() ;

/// @brief Method AnyWorkItemsPending addr 0x202b16c size 0x58 virtual false final false
 bool AnyWorkItemsPending() ;

// Ctor Parameters []
explicit HEU_TOPNodeData() ;

/// @brief Method .ctor addr 0x2029684 size 0xe4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_TOPNodeData__PDGState, "HoudiniEngineUnity", "HEU_TOPNodeData/PDGState");
NEED_NO_BOX(HoudiniEngineUnity::HEU_TOPNodeData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TOPNodeData, "HoudiniEngineUnity", "HEU_TOPNodeData");
