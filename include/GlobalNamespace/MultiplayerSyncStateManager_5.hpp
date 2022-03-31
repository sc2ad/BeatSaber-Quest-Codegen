// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerSessionManager/MessageType
#include "GlobalNamespace/MultiplayerSessionManager_MessageType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: IStateTable`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3;
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: ISyncStateDeltaSerializable`1<T>
  template<typename T>
  class ISyncStateDeltaSerializable_1;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: RemoteMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class RemoteMultiplayerSyncState_3;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Skipping declaration: IConvertible because it is already included!
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSyncStateManager`5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>
  template<typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  class MultiplayerSyncStateManager_5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5, "", "MultiplayerSyncStateManager`5");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerSyncStateManager`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  class MultiplayerSyncStateManager_5 : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerSyncStateManager_5::$$c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: MultiplayerSyncStateManager`5/<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly MultiplayerSyncStateManager`5/<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable> <>9
      static typename ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly MultiplayerSyncStateManager`5/<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable> <>9
      static void _set_$$9(typename ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__37_0
      static ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* _get_$$9__37_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::_get_$$9__37_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>::get(), "<>9__37_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__37_0
      static void _set_$$9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::_set_$$9__37_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>::get(), "<>9__37_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Int32 <HandlePlayerConnected>b__37_0(RemoteMultiplayerSyncState`3<TStateTable,TType,TState> s)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int $HandlePlayerConnected$b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::<HandlePlayerConnected>b__37_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<HandlePlayerConnected>b__37_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(s)})));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, s);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::$$c*, creationType>()));
      }
    }; // MultiplayerSyncStateManager`5/<>c
    // Could not write size check! Type: MultiplayerSyncStateManager`5/<>c is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x124DA44
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private LocalMultiplayerSyncState`3<TStateTable,TType,TState> _localState
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _connectedPlayerStates
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* connectedPlayerStates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _disconnectedPlayerStates
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* disconnectedPlayerStates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::dyn__multiplayerSessionManager");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_multiplayerSessionManager"))->offset;
      return *reinterpret_cast<::GlobalNamespace::IMultiplayerSessionManager**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private LocalMultiplayerSyncState`3<TStateTable,TType,TState> _localState
    ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*& dyn__localState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::dyn__localState");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_localState"))->offset;
      return *reinterpret_cast<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _connectedPlayerStates
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& dyn__connectedPlayerStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::dyn__connectedPlayerStates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_connectedPlayerStates"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _disconnectedPlayerStates
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& dyn__disconnectedPlayerStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::dyn__disconnectedPlayerStates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disconnectedPlayerStates"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected IMultiplayerSessionManager get_multiplayerSessionManager()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_multiplayerSessionManager");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal__method);
    }
    // public LocalMultiplayerSyncState`3<TStateTable,TType,TState> get_localState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_localState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_localState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_connectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_connectedPlayerCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_connectedPlayerCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_disconnectedPlayerCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_disconnectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_disconnectedPlayerCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_disconnectedPlayerCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_syncTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_syncTime");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_syncTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_deltaUpdateFrequency()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_deltaUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_deltaUpdateFrequency");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_deltaUpdateFrequency", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_fullStateUpdateFrequency()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_fullStateUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_fullStateUpdateFrequency");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_fullStateUpdateFrequency", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // protected System.Int32 get_localBufferSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_localBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_localBufferSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_localBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected System.Int32 get_remoteBufferSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_remoteBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_remoteBufferSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_remoteBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected IPacketPool`1<TSerializable> get_serializablePool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_serializablePool");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_serializablePool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TSerializable>*, false>(this, ___internal__method);
    }
    // protected IPacketPool`1<TDeltaSerializable> get_deltaSerializablePool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* get_deltaSerializablePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_deltaSerializablePool");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_deltaSerializablePool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*, false>(this, ___internal__method);
    }
    // protected MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_messageType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_messageType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal__method);
    }
    // protected MultiplayerSessionManager/MessageType get_deltaMessageType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::get_deltaMessageType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_deltaMessageType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal__method);
    }
    // protected System.Void Start()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Start() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::Start");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void LateUpdate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void LateUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::LateUpdate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected TState Interpolate(TState a, System.Single timeA, TState b, System.Single timeB, System.Single time)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TState Interpolate(TState a, float timeA, TState b, float timeB, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::Interpolate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Interpolate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(timeA), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(timeB), ::il2cpp_utils::ExtractType(time)})));
      return ::il2cpp_utils::RunMethodRethrow<TState, false>(this, ___internal__method, a, timeA, b, timeB, time);
    }
    // protected TState Smooth(TState a, TState b, System.Single smoooth)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TState Smooth(TState a, TState b, float smoooth) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::Smooth");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Smooth", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(smoooth)})));
      return ::il2cpp_utils::RunMethodRethrow<TState, false>(this, ___internal__method, a, b, smoooth);
    }
    // public System.Void ClearBufferedStates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClearBufferedStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::ClearBufferedStates");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearBufferedStates", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void TryCreateLocalState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void TryCreateLocalState() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::TryCreateLocalState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryCreateLocalState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandlePlayerConnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::HandlePlayerConnected");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandlePlayerConnected", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(player)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::HandlePlayerDisconnected");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandlePlayerDisconnected", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(player)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandleSyncPacket(TSerializable packet, IConnectedPlayer player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleSyncPacket(TSerializable packet, ::GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::HandleSyncPacket");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleSyncPacket", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(player)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, packet, player);
    }
    // private System.Void HandleSyncDeltaPacket(TDeltaSerializable packet, IConnectedPlayer player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleSyncDeltaPacket(TDeltaSerializable packet, ::GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::HandleSyncDeltaPacket");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleSyncDeltaPacket", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(player)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, packet, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::GetSyncState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSyncState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::GetSyncStateForPlayer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSyncStateForPlayer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(player)})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetDisconnectedSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetDisconnectedSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::GetDisconnectedSyncState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDisconnectedSyncState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSyncStateManager_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*, creationType>()));
    }
  }; // MultiplayerSyncStateManager`5
  // Could not write size check! Type: MultiplayerSyncStateManager`5 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
