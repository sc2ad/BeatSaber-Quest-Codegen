#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState;
}
namespace HoudiniEngineUnity {
class HEU_PDGAssetLink;
}
namespace HoudiniEngineUnity {
class ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate;
}
// Type: ::LinkState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9707))
// CS Name: HoudiniEngineUnity.HEU_PDGAssetLink::LinkState
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState(____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState(____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState& operator=(____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState& operator=(____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_PDGAssetLink__LinkState_Unwrapped : int32_t {
__INACTIVE = 0,
__LINKING = 1,
__LINKED = 2,
__ERROR_NOT_LINKED = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_PDGAssetLink__LinkState_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_PDGAssetLink__LinkState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field INACTIVE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const INACTIVE;

/// @brief Field LINKING offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const LINKING;

/// @brief Field LINKED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const LINKED;

/// @brief Field ERROR_NOT_LINKED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState const ERROR_NOT_LINKED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::UpdateUIDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9708))
// CS Name: HoudiniEngineUnity.HEU_PDGAssetLink::UpdateUIDelegate
class CORDL_TYPE ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: " const&", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate(____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: "&&", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate(____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate& operator=(____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate&& o) noexcept = default;
  constexpr ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate& operator=(____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x202afb8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x202b074 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x202b088 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x202b0a8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PDGAssetLink
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9709))
// CS Name: HoudiniEngineUnity.HEU_PDGAssetLink
class CORDL_TYPE HEU_PDGAssetLink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateUIDelegate = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate;

using LinkState = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState;

/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HEU_PDGAssetLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: " const&", def_value: None }]
constexpr HEU_PDGAssetLink(HEU_PDGAssetLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: "&&", def_value: None }]
constexpr HEU_PDGAssetLink(HEU_PDGAssetLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PDGAssetLink(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_PDGAssetLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PDGAssetLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PDGAssetLink& operator=(HEU_PDGAssetLink&& o) noexcept = default;
  constexpr HEU_PDGAssetLink& operator=(HEU_PDGAssetLink const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__assetPath, put=__set__assetPath))  _assetPath;

constexpr void __set__assetPath(::StringW value) ;

constexpr ::StringW __get__assetPath() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__assetGO, put=__set__assetGO))  _assetGO;

constexpr void __set__assetGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__assetGO() const;

 ::StringW __declspec(property(get=__get__assetName, put=__set__assetName))  _assetName;

constexpr void __set__assetName(::StringW value) ;

constexpr ::StringW __get__assetName() const;

 int32_t __declspec(property(get=__get__assetID, put=__set__assetID))  _assetID;

constexpr void __set__assetID(int32_t value) ;

constexpr int32_t __get__assetID() const;

 ::HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__heu, put=__set__heu))  _heu;

constexpr void __set__heu(::HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset __get__heu() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData> __declspec(property(get=__get__topNetworks, put=__set__topNetworks))  _topNetworks;

constexpr void __set__topNetworks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData> __get__topNetworks() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__topNetworkNames, put=__set__topNetworkNames))  _topNetworkNames;

constexpr void __set__topNetworkNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__topNetworkNames() const;

 int32_t __declspec(property(get=__get__selectedTOPNetwork, put=__set__selectedTOPNetwork))  _selectedTOPNetwork;

constexpr void __set__selectedTOPNetwork(int32_t value) ;

constexpr int32_t __get__selectedTOPNetwork() const;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState __declspec(property(get=__get__linkState, put=__set__linkState))  _linkState;

constexpr void __set__linkState(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState __get__linkState() const;

 bool __declspec(property(get=__get__autoCook, put=__set__autoCook))  _autoCook;

constexpr void __set__autoCook(bool value) ;

constexpr bool __get__autoCook() const;

 bool __declspec(property(get=__get__useHEngineData, put=__set__useHEngineData))  _useHEngineData;

constexpr void __set__useHEngineData(bool value) ;

constexpr bool __get__useHEngineData() const;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate __declspec(property(get=__get__repaintUIDelegate, put=__set__repaintUIDelegate))  _repaintUIDelegate;

constexpr void __set__repaintUIDelegate(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate __get__repaintUIDelegate() const;

 int32_t __declspec(property(get=__get__numWorkItems, put=__set__numWorkItems))  _numWorkItems;

constexpr void __set__numWorkItems(int32_t value) ;

constexpr int32_t __get__numWorkItems() const;

 ::HoudiniEngineUnity::HEU_WorkItemTally __declspec(property(get=__get__workItemTally, put=__set__workItemTally))  _workItemTally;

constexpr void __set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally value) ;

constexpr ::HoudiniEngineUnity::HEU_WorkItemTally __get__workItemTally() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__loadRootGameObject, put=__set__loadRootGameObject))  _loadRootGameObject;

constexpr void __set__loadRootGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__loadRootGameObject() const;

 ::StringW __declspec(property(get=__get__outputCachePathRoot, put=__set__outputCachePathRoot))  _outputCachePathRoot;

constexpr void __set__outputCachePathRoot(::StringW value) ;

constexpr ::StringW __get__outputCachePathRoot() const;


// Properties

 ::StringW __declspec(property(get=get_AssetName))  AssetName;

 int32_t __declspec(property(get=get_SelectedTOPNetwork))  SelectedTOPNetwork;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState __declspec(property(get=get_AssetLinkState))  AssetLinkState;


// Methods

/// @brief Method Awake addr 0x2027c38 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method OnBeforeSerialize addr 0x2027c40 size 0x4 virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2027c44 size 0x4 virtual true final true
 void OnAfterDeserialize() ;

/// @brief Method HandleInitialLoad addr 0x2027c3c size 0x4 virtual false final false
 void HandleInitialLoad() ;

/// @brief Method OnDestroy addr 0x2027c48 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method Setup addr 0x2027ccc size 0x12c virtual false final false
 void Setup(::HoudiniEngineUnity::HEU_HoudiniAsset hdaAsset) ;

/// @brief Method NotifyAssetCooked addr 0x2028228 size 0x2c virtual false final false
 void NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> generatedOutputs) ;

/// @brief Method NotifyAssetCooked addr 0x202841c size 0x10 virtual false final false
 void NotifyAssetCooked(::HoudiniEngineUnity::HEU_CookedEventData cookedEventData) ;

/// @brief Method NotifyAssetCooked addr 0x202842c size 0x10 virtual false final false
 void NotifyAssetCooked(::HoudiniEngineUnity::HEU_ReloadEventData reloadEventData) ;

/// @brief Method Reset addr 0x2027df8 size 0x4 virtual false final false
 void Reset() ;

/// @brief Method Refresh addr 0x2027dfc size 0x42c virtual false final false
 void Refresh() ;

/// @brief Method PopulateFromHDA addr 0x20282b4 size 0x168 virtual false final false
 void PopulateFromHDA() ;

/// @brief Method PopulateTOPNetworks addr 0x202871c size 0x4cc virtual false final false
 bool PopulateTOPNetworks() ;

/// @brief Method PopulateTOPNodes addr 0x20291d0 size 0x3e8 virtual false final false
static bool PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork, ::ArrayW<int32_t> topNodeIDs, bool useHEngineData) ;

/// @brief Method SelectTOPNetwork addr 0x2029888 size 0x5c virtual false final false
 void SelectTOPNetwork(int32_t newIndex) ;

/// @brief Method SelectTOPNode addr 0x20298e4 size 0x60 virtual false final false
 void SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData network, int32_t newIndex) ;

/// @brief Method GetSelectedTOPNetwork addr 0x2029944 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HEU_TOPNetworkData GetSelectedTOPNetwork() ;

/// @brief Method GetSelectedTOPNode addr 0x20299d0 size 0x90 virtual false final false
 ::HoudiniEngineUnity::HEU_TOPNodeData GetSelectedTOPNode() ;

/// @brief Method GetTOPNetwork addr 0x202994c size 0x84 virtual false final false
 ::HoudiniEngineUnity::HEU_TOPNetworkData GetTOPNetwork(int32_t index) ;

/// @brief Method GetTOPNetworkByName addr 0x202902c size 0xcc virtual false final false
static ::HoudiniEngineUnity::HEU_TOPNetworkData GetTOPNetworkByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData> topNetworks) ;

/// @brief Method GetTOPNodeByName addr 0x20295b8 size 0xcc virtual false final false
static ::HoudiniEngineUnity::HEU_TOPNodeData GetTOPNodeByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData> topNodes) ;

/// @brief Method ClearAllTOPData addr 0x202843c size 0x2c4 virtual false final false
 void ClearAllTOPData() ;

/// @brief Method ClearTOPNetworkWorkItemResults addr 0x2029a60 size 0x140 virtual false final false
static void ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork) ;

/// @brief Method ClearTOPNodeWorkItemResults addr 0x2029768 size 0x120 virtual false final false
static void ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method ClearWorkItemResultByID addr 0x2029d88 size 0x1c virtual false final false
static void ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t workItemID) ;

/// @brief Method ClearWorkItemResult addr 0x2029f00 size 0x74 virtual false final false
static void ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult result) ;

/// @brief Method UpdateTOPNodeResultsVisibility addr 0x2029f74 size 0x8c virtual false final false
 void UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method GetWorkResultByID addr 0x2029da4 size 0x15c virtual false final false
static ::HoudiniEngineUnity::HEU_TOPWorkResult GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t workItemID) ;

/// @brief Method DestroyWorkItemResultData addr 0x2029ba0 size 0x1e8 virtual false final false
static void DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult result) ;

/// @brief Method DirtyTOPNode addr 0x202a000 size 0x20 virtual false final false
 void DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method CookTOPNode addr 0x202a028 size 0x20 virtual false final false
 void CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method DirtyAll addr 0x202a050 size 0x20 virtual false final false
 void DirtyAll() ;

/// @brief Method CookOutput addr 0x2028254 size 0x60 virtual false final false
 void CookOutput() ;

/// @brief Method PauseCook addr 0x202a130 size 0x60 virtual false final false
 void PauseCook() ;

/// @brief Method CancelCook addr 0x202a194 size 0x60 virtual false final false
 void CancelCook() ;

/// @brief Method GetHAPISession addr 0x2028be8 size 0x8c virtual false final false
 ::HoudiniEngineUnity::HEU_SessionBase GetHAPISession() ;

/// @brief Method LoadResults addr 0x202a1f8 size 0x5ec virtual false final false
 void LoadResults(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo workItemInfo, ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo> resultInfos, int32_t workItemID) ;

/// @brief Method GetLoadRootTransform addr 0x202a868 size 0xe4 virtual false final false
 ::UnityEngine::Transform GetLoadRootTransform() ;

/// @brief Method GetTOPNode addr 0x202a94c size 0x170 virtual false final false
 ::HoudiniEngineUnity::HEU_TOPNodeData GetTOPNode(int32_t nodeID) ;

/// @brief Method RepaintUI addr 0x2028700 size 0x1c virtual false final false
 void RepaintUI() ;

/// @brief Method UpdateWorkItemTally addr 0x202aabc size 0x2d8 virtual false final false
 void UpdateWorkItemTally() ;

/// @brief Method ResetTOPNetworkWorkItemTally addr 0x202a084 size 0xa8 virtual false final false
 void ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork) ;

/// @brief Method GetTOPNodeStatus addr 0x202ad94 size 0x100 virtual false final false
 ::StringW GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method ParseHEngineData addr 0x2028e60 size 0x1cc virtual false final false
static void ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase session, int32_t topNodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, ByRef<::HoudiniEngineUnity::TOPNodeTags> nodeTags) ;

/// @brief Method get_AssetName addr 0x202aeb8 size 0x8 virtual false final false
 ::StringW get_AssetName() ;

/// @brief Method get_SelectedTOPNetwork addr 0x202aec0 size 0x8 virtual false final false
 int32_t get_SelectedTOPNetwork() ;

/// @brief Method get_AssetLinkState addr 0x202aec8 size 0x8 virtual false final false
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState get_AssetLinkState() ;

// Ctor Parameters []
explicit HEU_PDGAssetLink() ;

/// @brief Method .ctor addr 0x202aed0 size 0xe0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__LinkState, "HoudiniEngineUnity", "HEU_PDGAssetLink/LinkState");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PDGAssetLink);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGAssetLink, "HoudiniEngineUnity", "HEU_PDGAssetLink");
NEED_NO_BOX(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate, "HoudiniEngineUnity", "HEU_PDGAssetLink/UpdateUIDelegate");
