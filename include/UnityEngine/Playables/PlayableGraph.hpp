// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableGraph
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E74754
  // [NativeHeaderAttribute] Offset: E74754
  // [NativeHeaderAttribute] Offset: E74754
  // [NativeHeaderAttribute] Offset: E74754
  // [UsedByNativeCodeAttribute] Offset: E74754
  struct PlayableGraph/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.IntPtr m_Handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 m_Version
    // Size: 0x4
    // Offset: 0x8
    uint m_Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PlayableGraph
    constexpr PlayableGraph(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr m_Handle
    System::IntPtr& dyn_m_Handle();
    // Get instance field reference: System.UInt32 m_Version
    uint& dyn_m_Version();
    // public UnityEngine.Playables.Playable GetRootPlayable(System.Int32 index)
    // Offset: 0x1DB33A8
    UnityEngine::Playables::Playable GetRootPlayable(int index);
    // public System.Boolean Connect(U source, System.Int32 sourceOutputPort, V destination, System.Int32 destinationInputPort)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    bool Connect(U source, int sourceOutputPort, V destination, int destinationInputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableGraph::Connect");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Connect", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(sourceOutputPort), ::il2cpp_utils::ExtractType(destination), ::il2cpp_utils::ExtractType(destinationInputPort)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___generic__method, source, sourceOutputPort, destination, destinationInputPort);
    }
    // public System.Boolean IsValid()
    // Offset: 0x1DB3414
    bool IsValid();
    // public System.Boolean IsPlaying()
    // Offset: 0x1DB3494
    bool IsPlaying();
    // public UnityEngine.IExposedPropertyTable GetResolver()
    // Offset: 0x1DB3514
    UnityEngine::IExposedPropertyTable* GetResolver();
    // public System.Int32 GetPlayableCount()
    // Offset: 0x1DB3594
    int GetPlayableCount();
    // public System.Int32 GetRootPlayableCount()
    // Offset: 0x1DB3614
    int GetRootPlayableCount();
    // UnityEngine.Playables.PlayableHandle CreatePlayableHandle()
    // Offset: 0x1DB29D4
    UnityEngine::Playables::PlayableHandle CreatePlayableHandle();
    // System.Boolean CreateScriptOutputInternal(System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x1DB36E4
    bool CreateScriptOutputInternal(::Il2CppString* name, ByRef<UnityEngine::Playables::PlayableOutputHandle> handle);
    // UnityEngine.Playables.PlayableHandle GetRootPlayableInternal(System.Int32 index)
    // Offset: 0x1DB33AC
    UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int index);
    // private System.Boolean ConnectInternal(UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x1DB37EC
    bool ConnectInternal(UnityEngine::Playables::PlayableHandle source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle destination, int destinationInputPort);
    // static private System.Boolean IsValid_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1DB3454
    static bool IsValid_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self);
    // static private System.Boolean IsPlaying_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1DB34D4
    static bool IsPlaying_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self);
    // static private UnityEngine.IExposedPropertyTable GetResolver_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1DB3554
    static UnityEngine::IExposedPropertyTable* GetResolver_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self);
    // static private System.Int32 GetPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1DB35D4
    static int GetPlayableCount_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self);
    // static private System.Int32 GetRootPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1DB3654
    static int GetRootPlayableCount_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self);
    // static private System.Void CreatePlayableHandle_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1DB3694
    static void CreatePlayableHandle_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> ret);
    // static private System.Boolean CreateScriptOutputInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x1DB373C
    static bool CreateScriptOutputInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self, ::Il2CppString* name, ByRef<UnityEngine::Playables::PlayableOutputHandle> handle);
    // static private System.Void GetRootPlayableInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.Int32 index, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1DB3794
    static void GetRootPlayableInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self, int index, ByRef<UnityEngine::Playables::PlayableHandle> ret);
    // static private System.Boolean ConnectInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, ref UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, ref UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x1DB3864
    static bool ConnectInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> source, int sourceOutputPort, ByRef<UnityEngine::Playables::PlayableHandle> destination, int destinationInputPort);
  }; // UnityEngine.Playables.PlayableGraph
  #pragma pack(pop)
  static check_size<sizeof(PlayableGraph), 8 + sizeof(uint)> __UnityEngine_Playables_PlayableGraphSizeCheck;
  static_assert(sizeof(PlayableGraph) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayable
// Il2CppName: GetRootPlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Playables::PlayableGraph::*)(int)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayable)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::Connect
// Il2CppName: Connect
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsPlaying
// Il2CppName: IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetResolver
// Il2CppName: GetResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::IExposedPropertyTable* (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetPlayableCount
// Il2CppName: GetPlayableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetPlayableCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetPlayableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableCount
// Il2CppName: GetRootPlayableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreatePlayableHandle
// Il2CppName: CreatePlayableHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::CreatePlayableHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreatePlayableHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal
// Il2CppName: CreateScriptOutputInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)(::Il2CppString*, ByRef<UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreateScriptOutputInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal
// Il2CppName: GetRootPlayableInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::PlayableGraph::*)(int)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::ConnectInternal
// Il2CppName: ConnectInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)(UnityEngine::Playables::PlayableHandle, int, UnityEngine::Playables::PlayableHandle, int)>(&UnityEngine::Playables::PlayableGraph::ConnectInternal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* sourceOutputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* destinationInputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "ConnectInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, sourceOutputPort, destination, destinationInputPort});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsValid_Injected
// Il2CppName: IsValid_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>)>(&UnityEngine::Playables::PlayableGraph::IsValid_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsValid_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsPlaying_Injected
// Il2CppName: IsPlaying_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>)>(&UnityEngine::Playables::PlayableGraph::IsPlaying_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsPlaying_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetResolver_Injected
// Il2CppName: GetResolver_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::IExposedPropertyTable* (*)(ByRef<UnityEngine::Playables::PlayableGraph>)>(&UnityEngine::Playables::PlayableGraph::GetResolver_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetResolver_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetPlayableCount_Injected
// Il2CppName: GetPlayableCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::Playables::PlayableGraph>)>(&UnityEngine::Playables::PlayableGraph::GetPlayableCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetPlayableCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableCount_Injected
// Il2CppName: GetRootPlayableCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::Playables::PlayableGraph>)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected
// Il2CppName: CreatePlayableHandle_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableGraph>, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreatePlayableHandle_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected
// Il2CppName: CreateScriptOutputInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, ::Il2CppString*, ByRef<UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreateScriptOutputInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, name, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected
// Il2CppName: GetRootPlayableInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableGraph>, int, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected
// Il2CppName: ConnectInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, ByRef<UnityEngine::Playables::PlayableHandle>, int, ByRef<UnityEngine::Playables::PlayableHandle>, int)>(&UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* sourceOutputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* destinationInputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "ConnectInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, source, sourceOutputPort, destination, destinationInputPort});
  }
};
