#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_TOPNodeData__PDGState;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_State;
}
namespace HoudiniEngineUnity {
class HEU_PDGAssetLink;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor;
}
namespace HoudiniEngineUnity {
class HEU_PDGSession;
}
// Type: ::EventMessageColor
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9716))
// CS Name: HoudiniEngineUnity.HEU_PDGSession::EventMessageColor
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor(____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor(____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor& operator=(____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor& operator=(____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_PDGSession__EventMessageColor_Unwrapped : int32_t {
__DEFAULT = 0,
__WARNING = 1,
__ERROR = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_PDGSession__EventMessageColor_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_PDGSession__EventMessageColor_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor const DEFAULT;

/// @brief Field WARNING offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor const WARNING;

/// @brief Field ERROR offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor const ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PDGSession
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9717))
// CS Name: HoudiniEngineUnity.HEU_PDGSession
class CORDL_TYPE HEU_PDGSession : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EventMessageColor = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HEU_PDGSession() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: " const&", def_value: None }]
constexpr HEU_PDGSession(HEU_PDGSession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: "&&", def_value: None }]
constexpr HEU_PDGSession(HEU_PDGSession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PDGSession(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_PDGSession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PDGSession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PDGSession& operator=(HEU_PDGSession&& o) noexcept = default;
  constexpr HEU_PDGSession& operator=(HEU_PDGSession const& o) noexcept = default;
                


// Fields

static ::HoudiniEngineUnity::HEU_PDGSession __declspec(property(get=__get__pdgSession, put=__set__pdgSession))  _pdgSession;

static void __set__pdgSession(::HoudiniEngineUnity::HEU_PDGSession value) ;

static ::HoudiniEngineUnity::HEU_PDGSession __get__pdgSession() ;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink> __declspec(property(get=__get__pdgAssets, put=__set__pdgAssets))  _pdgAssets;

constexpr void __set__pdgAssets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink> __get__pdgAssets() const;

 int32_t __declspec(property(get=__get__pdgMaxProcessEvents, put=__set__pdgMaxProcessEvents))  _pdgMaxProcessEvents;

constexpr void __set__pdgMaxProcessEvents(int32_t value) ;

constexpr int32_t __get__pdgMaxProcessEvents() const;

 ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo> __declspec(property(get=__get__pdgQueryEvents, put=__set__pdgQueryEvents))  _pdgQueryEvents;

constexpr void __set__pdgQueryEvents(::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo> value) ;

constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo> __get__pdgQueryEvents() const;

 int32_t __declspec(property(get=__get__pdgContextSize, put=__set__pdgContextSize))  _pdgContextSize;

constexpr void __set__pdgContextSize(int32_t value) ;

constexpr int32_t __get__pdgContextSize() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__pdgContextIDs, put=__set__pdgContextIDs))  _pdgContextIDs;

constexpr void __set__pdgContextIDs(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__pdgContextIDs() const;

 bool __declspec(property(get=__get__errored, put=__set__errored))  _errored;

constexpr void __set__errored(bool value) ;

constexpr bool __get__errored() const;

 ::StringW __declspec(property(get=__get__errorMsg, put=__set__errorMsg))  _errorMsg;

constexpr void __set__errorMsg(::StringW value) ;

constexpr ::StringW __get__errorMsg() const;

 ::HoudiniEngineUnity::HAPI_PDG_State __declspec(property(get=__get__pdgState, put=__set__pdgState))  _pdgState;

constexpr void __set__pdgState(::HoudiniEngineUnity::HAPI_PDG_State value) ;

constexpr ::HoudiniEngineUnity::HAPI_PDG_State __get__pdgState() const;

 ::System::Text::StringBuilder __declspec(property(get=__get__pdgEventMessages, put=__set__pdgEventMessages))  _pdgEventMessages;

constexpr void __set__pdgEventMessages(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get__pdgEventMessages() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__eventMessageColorCode, put=__set__eventMessageColorCode))  _eventMessageColorCode;

constexpr void __set__eventMessageColorCode(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__eventMessageColorCode() const;


// Methods

/// @brief Method GetPDGSession addr 0x2027c4c size 0x7c virtual false final false
static ::HoudiniEngineUnity::HEU_PDGSession GetPDGSession() ;

// Ctor Parameters []
explicit HEU_PDGSession() ;

/// @brief Method .ctor addr 0x202b2b4 size 0x1b4 virtual false final false
 void _ctor() ;

/// @brief Method AddAsset addr 0x202b468 size 0x4 virtual false final false
 void AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink asset) ;

/// @brief Method RemoveAsset addr 0x2027cc8 size 0x4 virtual false final false
 void RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink asset) ;

/// @brief Method Update addr 0x202b46c size 0x4 virtual false final false
 void Update() ;

/// @brief Method CleanUp addr 0x202b470 size 0xfc virtual false final false
 void CleanUp() ;

/// @brief Method UpdatePDGContext addr 0x202b56c size 0x4 virtual false final false
 void UpdatePDGContext() ;

/// @brief Method ReinitializePDGContext addr 0x202b570 size 0x4 virtual false final false
 void ReinitializePDGContext() ;

/// @brief Method ProcessPDGEvent addr 0x202b574 size 0x4 virtual false final false
 void ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase session, int32_t contextID, ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo) ;

/// @brief Method GetTOPAssetLinkAndNode addr 0x202b578 size 0xe8 virtual false final false
 bool GetTOPAssetLinkAndNode(int32_t nodeID, ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink> assetLink, ByRef<::HoudiniEngineUnity::HEU_TOPNodeData> topNode) ;

/// @brief Method SetTOPNodePDGState addr 0x202b660 size 0x38 virtual false final false
 void SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_TOPNodeData__PDGState pdgState) ;

/// @brief Method NotifyTOPNodePDGStateClear addr 0x202b698 size 0x48 virtual false final false
 void NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method NotifyTOPNodeTotalWorkItem addr 0x202b6e0 size 0x4c virtual false final false
 void NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc) ;

/// @brief Method NotifyTOPNodeCookedWorkItem addr 0x202b72c size 0x48 virtual false final false
 void NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method NotifyTOPNodeErrorWorkItem addr 0x202b774 size 0x48 virtual false final false
 void NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method NotifyTOPNodeWaitingWorkItem addr 0x202b7bc size 0x4c virtual false final false
 void NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc) ;

/// @brief Method NotifyTOPNodeScheduledWorkItem addr 0x202b808 size 0x4c virtual false final false
 void NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc) ;

/// @brief Method NotifyTOPNodeCookingWorkItem addr 0x202b854 size 0x4c virtual false final false
 void NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc) ;

/// @brief Method ResetPDGEventInfo addr 0x202b8a0 size 0x14 virtual false final false
static void ResetPDGEventInfo(ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo) ;

/// @brief Method SetErrorState addr 0x202b8b4 size 0x40 virtual false final false
 void SetErrorState(::StringW msg, bool bLogIt) ;

/// @brief Method ClearErrorState addr 0x202b8f4 size 0x4c virtual false final false
 void ClearErrorState() ;

/// @brief Method GetHAPIPDGSession addr 0x202b940 size 0x68 virtual false final false
 ::HoudiniEngineUnity::HEU_SessionBase GetHAPIPDGSession(bool bCreate) ;

/// @brief Method CookTOPNetworkOutputNode addr 0x202a12c size 0x4 virtual false final false
 void CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork) ;

/// @brief Method PauseCook addr 0x202a190 size 0x4 virtual false final false
 void PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork) ;

/// @brief Method CancelCook addr 0x202a1f4 size 0x4 virtual false final false
 void CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork) ;

/// @brief Method ClearWorkItemResult addr 0x202bcb8 size 0x4 virtual false final false
 void ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase session, int32_t contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData topNode) ;

/// @brief Method DirtyTOPNode addr 0x202a020 size 0x8 virtual false final false
 bool DirtyTOPNode(int32_t nodeID) ;

/// @brief Method CookTOPNode addr 0x202a048 size 0x8 virtual false final false
 bool CookTOPNode(int32_t nodeID) ;

/// @brief Method DirtyAll addr 0x202a070 size 0x8 virtual false final false
 bool DirtyAll(int32_t nodeID) ;

/// @brief Method AddEventMessage addr 0x202bcbc size 0x1c virtual false final false
 void AddEventMessage(::StringW msg) ;

/// @brief Method GetEventMessages addr 0x202bcd8 size 0x20 virtual false final false
 ::StringW GetEventMessages() ;

/// @brief Method ClearEventMessages addr 0x202bcf8 size 0x20 virtual false final false
 void ClearEventMessages() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor, "HoudiniEngineUnity", "HEU_PDGSession/EventMessageColor");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PDGSession);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGSession, "HoudiniEngineUnity", "HEU_PDGSession");
