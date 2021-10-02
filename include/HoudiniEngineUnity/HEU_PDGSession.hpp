// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HAPI_PDG_EventInfo
#include "HoudiniEngineUnity/HAPI_PDG_EventInfo.hpp"
// Including type: HoudiniEngineUnity.HAPI_PDG_State
#include "HoudiniEngineUnity/HAPI_PDG_State.hpp"
// Including type: HoudiniEngineUnity.HEU_TOPNodeData
#include "HoudiniEngineUnity/HEU_TOPNodeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_PDGAssetLink
  class HEU_PDGAssetLink;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_TOPNetworkData
  class HEU_TOPNetworkData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PDGSession
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_PDGSession : public ::Il2CppObject {
    public:
    // Nested type: HoudiniEngineUnity::HEU_PDGSession::EventMessageColor
    struct EventMessageColor;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_PDGAssetLink> _pdgAssets
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PDGAssetLink*>* pdgAssets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PDGAssetLink*>*) == 0x8);
    // public System.Int32 _pdgMaxProcessEvents
    // Size: 0x4
    // Offset: 0x18
    int pdgMaxProcessEvents;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pdgMaxProcessEvents and: pdgQueryEvents
    char __padding1[0x4] = {};
    // public HoudiniEngineUnity.HAPI_PDG_EventInfo[] _pdgQueryEvents
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<HoudiniEngineUnity::HAPI_PDG_EventInfo> pdgQueryEvents;
    // Field size check
    static_assert(sizeof(::ArrayW<HoudiniEngineUnity::HAPI_PDG_EventInfo>) == 0x8);
    // public System.Int32 _pdgContextSize
    // Size: 0x4
    // Offset: 0x28
    int pdgContextSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pdgContextSize and: pdgContextIDs
    char __padding3[0x4] = {};
    // public System.Int32[] _pdgContextIDs
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> pdgContextIDs;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Boolean _errored
    // Size: 0x1
    // Offset: 0x38
    bool errored;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: errored and: errorMsg
    char __padding5[0x7] = {};
    // public System.String _errorMsg
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* errorMsg;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public HoudiniEngineUnity.HAPI_PDG_State _pdgState
    // Size: 0x4
    // Offset: 0x48
    HoudiniEngineUnity::HAPI_PDG_State pdgState;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_PDG_State) == 0x4);
    // Padding between fields: pdgState and: pdgEventMessages
    char __padding7[0x4] = {};
    // private System.Text.StringBuilder _pdgEventMessages
    // Size: 0x8
    // Offset: 0x50
    System::Text::StringBuilder* pdgEventMessages;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.String[] _eventMessageColorCode
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::Il2CppString*> eventMessageColorCode;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    public:
    // Get static field: static private HoudiniEngineUnity.HEU_PDGSession _pdgSession
    static HoudiniEngineUnity::HEU_PDGSession* _get__pdgSession();
    // Set static field: static private HoudiniEngineUnity.HEU_PDGSession _pdgSession
    static void _set__pdgSession(HoudiniEngineUnity::HEU_PDGSession* value);
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_PDGAssetLink> _pdgAssets
    System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PDGAssetLink*>*& dyn__pdgAssets();
    // Get instance field reference: public System.Int32 _pdgMaxProcessEvents
    int& dyn__pdgMaxProcessEvents();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_PDG_EventInfo[] _pdgQueryEvents
    ::ArrayW<HoudiniEngineUnity::HAPI_PDG_EventInfo>& dyn__pdgQueryEvents();
    // Get instance field reference: public System.Int32 _pdgContextSize
    int& dyn__pdgContextSize();
    // Get instance field reference: public System.Int32[] _pdgContextIDs
    ::ArrayW<int>& dyn__pdgContextIDs();
    // Get instance field reference: public System.Boolean _errored
    bool& dyn__errored();
    // Get instance field reference: public System.String _errorMsg
    ::Il2CppString*& dyn__errorMsg();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_PDG_State _pdgState
    HoudiniEngineUnity::HAPI_PDG_State& dyn__pdgState();
    // Get instance field reference: private System.Text.StringBuilder _pdgEventMessages
    System::Text::StringBuilder*& dyn__pdgEventMessages();
    // Get instance field reference: private System.String[] _eventMessageColorCode
    ::ArrayW<::Il2CppString*>& dyn__eventMessageColorCode();
    // static public HoudiniEngineUnity.HEU_PDGSession GetPDGSession()
    // Offset: 0x17A0A44
    static HoudiniEngineUnity::HEU_PDGSession* GetPDGSession();
    // public System.Void AddAsset(HoudiniEngineUnity.HEU_PDGAssetLink asset)
    // Offset: 0x17A3CB4
    void AddAsset(HoudiniEngineUnity::HEU_PDGAssetLink* asset);
    // public System.Void RemoveAsset(HoudiniEngineUnity.HEU_PDGAssetLink asset)
    // Offset: 0x17A0AC0
    void RemoveAsset(HoudiniEngineUnity::HEU_PDGAssetLink* asset);
    // private System.Void Update()
    // Offset: 0x17A3CB8
    void Update();
    // private System.Void CleanUp()
    // Offset: 0x17A3CBC
    void CleanUp();
    // private System.Void UpdatePDGContext()
    // Offset: 0x17A3DA4
    void UpdatePDGContext();
    // public System.Void ReinitializePDGContext()
    // Offset: 0x17A3DA8
    void ReinitializePDGContext();
    // private System.Void ProcessPDGEvent(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 contextID, ref HoudiniEngineUnity.HAPI_PDG_EventInfo eventInfo)
    // Offset: 0x17A3DAC
    void ProcessPDGEvent(HoudiniEngineUnity::HEU_SessionBase* session, int contextID, ByRef<HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo);
    // private System.Boolean GetTOPAssetLinkAndNode(System.Int32 nodeID, out HoudiniEngineUnity.HEU_PDGAssetLink assetLink, out HoudiniEngineUnity.HEU_TOPNodeData topNode)
    // Offset: 0x17A3DB0
    bool GetTOPAssetLinkAndNode(int nodeID, ByRef<HoudiniEngineUnity::HEU_PDGAssetLink*> assetLink, ByRef<HoudiniEngineUnity::HEU_TOPNodeData*> topNode);
    // private System.Void SetTOPNodePDGState(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode, HoudiniEngineUnity.HEU_TOPNodeData/HoudiniEngineUnity.PDGState pdgState)
    // Offset: 0x17A3EC0
    void SetTOPNodePDGState(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode, HoudiniEngineUnity::HEU_TOPNodeData::PDGState pdgState);
    // private System.Void NotifyTOPNodePDGStateClear(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode)
    // Offset: 0x17A3EF0
    void NotifyTOPNodePDGStateClear(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode);
    // private System.Void NotifyTOPNodeTotalWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode, System.Int32 inc)
    // Offset: 0x17A3F40
    void NotifyTOPNodeTotalWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode, int inc);
    // private System.Void NotifyTOPNodeCookedWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode)
    // Offset: 0x17A3FF4
    void NotifyTOPNodeCookedWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode);
    // private System.Void NotifyTOPNodeErrorWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode)
    // Offset: 0x17A4034
    void NotifyTOPNodeErrorWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode);
    // private System.Void NotifyTOPNodeWaitingWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode, System.Int32 inc)
    // Offset: 0x17A4074
    void NotifyTOPNodeWaitingWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode, int inc);
    // private System.Void NotifyTOPNodeScheduledWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode, System.Int32 inc)
    // Offset: 0x17A4128
    void NotifyTOPNodeScheduledWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode, int inc);
    // private System.Void NotifyTOPNodeCookingWorkItem(HoudiniEngineUnity.HEU_PDGAssetLink assetLink, HoudiniEngineUnity.HEU_TOPNodeData topNode, System.Int32 inc)
    // Offset: 0x17A41DC
    void NotifyTOPNodeCookingWorkItem(HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, HoudiniEngineUnity::HEU_TOPNodeData* topNode, int inc);
    // static private System.Void ResetPDGEventInfo(ref HoudiniEngineUnity.HAPI_PDG_EventInfo eventInfo)
    // Offset: 0x17A4290
    static void ResetPDGEventInfo(ByRef<HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo);
    // private System.Void SetErrorState(System.String msg, System.Boolean bLogIt)
    // Offset: 0x17A42A4
    void SetErrorState(::Il2CppString* msg, bool bLogIt);
    // private System.Void ClearErrorState()
    // Offset: 0x17A42E8
    void ClearErrorState();
    // public HoudiniEngineUnity.HEU_SessionBase GetHAPIPDGSession(System.Boolean bCreate)
    // Offset: 0x17A433C
    HoudiniEngineUnity::HEU_SessionBase* GetHAPIPDGSession(bool bCreate);
    // public System.Void CookTOPNetworkOutputNode(HoudiniEngineUnity.HEU_TOPNetworkData topNetwork)
    // Offset: 0x17A2AEC
    void CookTOPNetworkOutputNode(HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);
    // public System.Void PauseCook(HoudiniEngineUnity.HEU_TOPNetworkData topNetwork)
    // Offset: 0x17A2B64
    void PauseCook(HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);
    // public System.Void CancelCook(HoudiniEngineUnity.HEU_TOPNetworkData topNetwork)
    // Offset: 0x17A2BDC
    void CancelCook(HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);
    // public System.Void ClearWorkItemResult(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 contextID, HoudiniEngineUnity.HAPI_PDG_EventInfo eventInfo, HoudiniEngineUnity.HEU_TOPNodeData topNode)
    // Offset: 0x17A43C8
    void ClearWorkItemResult(HoudiniEngineUnity::HEU_SessionBase* session, int contextID, HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo, HoudiniEngineUnity::HEU_TOPNodeData* topNode);
    // public System.Boolean DirtyTOPNode(System.Int32 nodeID)
    // Offset: 0x17A29D4
    bool DirtyTOPNode(int nodeID);
    // public System.Boolean CookTOPNode(System.Int32 nodeID)
    // Offset: 0x17A2A08
    bool CookTOPNode(int nodeID);
    // public System.Boolean DirtyAll(System.Int32 nodeID)
    // Offset: 0x17A2A34
    bool DirtyAll(int nodeID);
    // public System.Void AddEventMessage(System.String msg)
    // Offset: 0x17A43CC
    void AddEventMessage(::Il2CppString* msg);
    // public System.String GetEventMessages()
    // Offset: 0x17A43E8
    ::Il2CppString* GetEventMessages();
    // public System.Void ClearEventMessages()
    // Offset: 0x17A4408
    void ClearEventMessages();
    // public System.Void .ctor()
    // Offset: 0x17A3B38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PDGSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_PDGSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PDGSession*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_PDGSession
  #pragma pack(pop)
  static check_size<sizeof(HEU_PDGSession), 88 + sizeof(::ArrayW<::Il2CppString*>)> __HoudiniEngineUnity_HEU_PDGSessionSizeCheck;
  static_assert(sizeof(HEU_PDGSession) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PDGSession*, "HoudiniEngineUnity", "HEU_PDGSession");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::GetPDGSession
// Il2CppName: GetPDGSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_PDGSession* (*)()>(&HoudiniEngineUnity::HEU_PDGSession::GetPDGSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "GetPDGSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::AddAsset
// Il2CppName: AddAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*)>(&HoudiniEngineUnity::HEU_PDGSession::AddAsset)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "AddAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::RemoveAsset
// Il2CppName: RemoveAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*)>(&HoudiniEngineUnity::HEU_PDGSession::RemoveAsset)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "RemoveAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext
// Il2CppName: UpdatePDGContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "UpdatePDGContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext
// Il2CppName: ReinitializePDGContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ReinitializePDGContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent
// Il2CppName: ProcessPDGEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_SessionBase*, int, ByRef<HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(&HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* contextID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* eventInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PDG_EventInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ProcessPDGEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, contextID, eventInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode
// Il2CppName: GetTOPAssetLinkAndNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PDGSession::*)(int, ByRef<HoudiniEngineUnity::HEU_PDGAssetLink*>, ByRef<HoudiniEngineUnity::HEU_TOPNodeData*>)>(&HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode)> {
  static const MethodInfo* get() {
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->this_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "GetTOPAssetLinkAndNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeID, assetLink, topNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState
// Il2CppName: SetTOPNodePDGState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*, HoudiniEngineUnity::HEU_TOPNodeData::PDGState)>(&HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    static auto* pdgState = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData/PDGState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "SetTOPNodePDGState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode, pdgState});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear
// Il2CppName: NotifyTOPNodePDGStateClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodePDGStateClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem
// Il2CppName: NotifyTOPNodeTotalWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*, int)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    static auto* inc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeTotalWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode, inc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem
// Il2CppName: NotifyTOPNodeCookedWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeCookedWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem
// Il2CppName: NotifyTOPNodeErrorWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeErrorWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem
// Il2CppName: NotifyTOPNodeWaitingWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*, int)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    static auto* inc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeWaitingWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode, inc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem
// Il2CppName: NotifyTOPNodeScheduledWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*, int)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    static auto* inc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeScheduledWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode, inc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem
// Il2CppName: NotifyTOPNodeCookingWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_PDGAssetLink*, HoudiniEngineUnity::HEU_TOPNodeData*, int)>(&HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem)> {
  static const MethodInfo* get() {
    static auto* assetLink = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_PDGAssetLink")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    static auto* inc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "NotifyTOPNodeCookingWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetLink, topNode, inc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo
// Il2CppName: ResetPDGEventInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(&HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo)> {
  static const MethodInfo* get() {
    static auto* eventInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PDG_EventInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ResetPDGEventInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::SetErrorState
// Il2CppName: SetErrorState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(::Il2CppString*, bool)>(&HoudiniEngineUnity::HEU_PDGSession::SetErrorState)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bLogIt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "SetErrorState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, bLogIt});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ClearErrorState
// Il2CppName: ClearErrorState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::ClearErrorState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ClearErrorState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession
// Il2CppName: GetHAPIPDGSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase* (HoudiniEngineUnity::HEU_PDGSession::*)(bool)>(&HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession)> {
  static const MethodInfo* get() {
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "GetHAPIPDGSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bCreate});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode
// Il2CppName: CookTOPNetworkOutputNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_TOPNetworkData*)>(&HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode)> {
  static const MethodInfo* get() {
    static auto* topNetwork = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNetworkData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "CookTOPNetworkOutputNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topNetwork});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::PauseCook
// Il2CppName: PauseCook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_TOPNetworkData*)>(&HoudiniEngineUnity::HEU_PDGSession::PauseCook)> {
  static const MethodInfo* get() {
    static auto* topNetwork = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNetworkData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "PauseCook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topNetwork});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::CancelCook
// Il2CppName: CancelCook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_TOPNetworkData*)>(&HoudiniEngineUnity::HEU_PDGSession::CancelCook)> {
  static const MethodInfo* get() {
    static auto* topNetwork = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNetworkData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "CancelCook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topNetwork});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult
// Il2CppName: ClearWorkItemResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(HoudiniEngineUnity::HEU_SessionBase*, int, HoudiniEngineUnity::HAPI_PDG_EventInfo, HoudiniEngineUnity::HEU_TOPNodeData*)>(&HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* contextID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* eventInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_PDG_EventInfo")->byval_arg;
    static auto* topNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_TOPNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ClearWorkItemResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, contextID, eventInfo, topNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode
// Il2CppName: DirtyTOPNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PDGSession::*)(int)>(&HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode)> {
  static const MethodInfo* get() {
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "DirtyTOPNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::CookTOPNode
// Il2CppName: CookTOPNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PDGSession::*)(int)>(&HoudiniEngineUnity::HEU_PDGSession::CookTOPNode)> {
  static const MethodInfo* get() {
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "CookTOPNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::DirtyAll
// Il2CppName: DirtyAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PDGSession::*)(int)>(&HoudiniEngineUnity::HEU_PDGSession::DirtyAll)> {
  static const MethodInfo* get() {
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "DirtyAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::AddEventMessage
// Il2CppName: AddEventMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_PDGSession::AddEventMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "AddEventMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::GetEventMessages
// Il2CppName: GetEventMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::GetEventMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "GetEventMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages
// Il2CppName: ClearEventMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGSession::*)()>(&HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PDGSession*), "ClearEventMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PDGSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
